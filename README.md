# undetek-v10.37 — Full Reverse Engineering & Source Recovery

> **Researcher:** nulled_ash
> **Target:** `undetek-v10.37.exe` — CS2 (Counter-Strike 2) cheat loader & injector
> **Version:** 10.37
> **Architecture:** x86-64 PE (Windows)
> **Compiler:** MSVC (Visual Studio 2019), C++ with STL

---

## Table of Contents

1. [Overview](#overview)
2. [File Structure](#file-structure)
3. [Binary Characteristics](#binary-characteristics)
4. [PE Section Layout](#pe-section-layout)
5. [String Obfuscation — Dual XOR Keys](#string-obfuscation--dual-xor-keys)
6. [Decompiled Source Structure](#decompiled-source-structure)
7. [Key Functions — Recovered & Renamed](#key-functions--recovered--renamed)
8. [Activation & PIN System](#activation--pin-system)
9. [Network Layer — TimeZoneDB Verification](#network-layer--timezonedb-verification)
10. [Injection Engine](#injection-engine)
11. [Steam Overlay Hook](#steam-overlay-hook)
12. [Cheat Features](#cheat-features)
13. [Registry Persistence](#registry-persistence)
14. [Imports & API Usage](#imports--api-usage)
15. [IOCs & Static Indicators](#iocs--static-indicators)
16. [Methodology](#methodology)
17. [Source Directory Layout](#source-directory-layout)

---

## Overview

`undetek-v10.37.exe` is a **CS2 external cheat loader** distributed via the undetek Discord server (`discord.gg/undetek`). It implements a PIN-based activation system that verifies the user's PIN against a live TimeZoneDB API response before proceeding to inject the cheat DLL into a running CS2 process via the Steam Overlay.

This document is the result of full static reverse engineering of the binary, culminating in **complete Ghidra headless decompilation** of all 843 functions into readable C pseudo-code, organized into 13 categorized source files.

---

## File Structure

```
undetek-v10.37/
├── undetek-v10.37.exe       # Main loader executable (250KB, x86-64 PE)
├── Install Guide.txt        # Official user install instructions
├── Aimbot Guide.txt         # Official aimbot usage instructions
├── VAC.txt                  # VAC notice from developers
└── source/                  # Fully decompiled source (recovered by nulled_ash)
    ├── 00_MANIFEST.txt
    ├── 00_main_orchestrator.c
    ├── 01_pin_activation_drm.c
    ├── 02_network_c2_timezonedb.c
    ├── 03_process_injection_engine.c
    ├── 04_process_enumeration.c
    ├── 05_cheat_features_aimbot_esp_trigger.c
    ├── 06_entity_player_loop.c
    ├── 07_vgui_overlay_renderer.c
    ├── 08_registry_config_persistence.c
    ├── 09_xor_string_obfuscation.c
    ├── 10_runtime_crt_exceptions.c
    ├── 11_utility_string_math_memory.c
    ├── 12_misc_unclassified.c
    └── undetek_full_decompiled.c   # Single-file dump of all 843 functions
```

---

## Binary Characteristics

| Property | Value |
|----------|-------|
| Format | PE32+ (x86-64) |
| Compiler | MSVC / Visual Studio 2019 |
| Language | C++ with STL |
| Size | ~250KB |
| Sections | 6 (.text, .rdata, .data, .pdata, .fptable, .reloc) |
| Entrypoint | `0x14000A5F4` → `__scrt_common_main_seh()` |
| Security Features | GS stack cookies, CFG (`_guard_dispatch_icall`), SEH |
| Stripped | Yes (no PDB, no debug symbols) |
| String Encryption | Dual XOR (keys `0x14` and `0x34`) |
| Total Functions | 843 (0 decompilation failures) |

---

## PE Section Layout

| Section | File Offset | Virtual Address | Size | Description |
|---------|-------------|-----------------|------|-------------|
| `.text` | `0x000400` | `0x140001000` | ~162KB | Executable code |
| `.rdata` | `0x028400` | `0x140029000` | ~50KB | Encrypted strings, imports, RTTI |
| `.data` | `0x034A00` | `0x140035000` | ~28KB | Runtime data, vtables, config |
| `.pdata` | `0x03BA00` | `0x14003D000` | ~8KB | Exception handler table |
| `.fptable` | `0x03DC00` | `0x14003F000` | 256B | Function pointer table |
| `.reloc` | `0x03DE00` | `0x140040000` | ~1.8KB | Base relocation table |

---

## String Obfuscation — Dual XOR Keys

All user-visible strings are stored XOR-encrypted in `.rdata`. Two keys are used:

| Key | Used For | Example Plaintext |
|-----|----------|-------------------|
| `0x14` | Status/injection messages | `"Injecting FREE cheat..."`, `"Injected, press INSERT to open the menu"` |
| `0x34` | Main string pool | `"Enter PIN: "`, `"discord.gg/undetek"`, `"vip.timezonedb.com"`, `"cs2.exe"`, `"Software\udtk"` |

Each encrypted string is decrypted at runtime by a family of small stub functions (`FUN_140001000` through `FUN_140002FFF`) — **84 functions** dedicated entirely to inline XOR decryption.

**Decryption pattern (XOR 0x34):**
```c
// Typical stub — decrypts a single string object at runtime
char *FUN_1400013d0(undefined1 local_buf[16]) {
    // Initializes buffer, XORs each byte with 0x34
    // Returns pointer to plaintext string
}
```

**Python decryption:**
```python
KEY = 0x34
with open("undetek-v10.37.exe", "rb") as f:
    data = f.read()
rdata = data[0x28400:0x28400 + 0xC5AC]
decoded = bytes([b ^ KEY for b in rdata])
# Extract printable strings from decoded...
```

---

## Decompiled Source Structure

Complete Ghidra headless decompilation was performed, recovering **843 functions** with **0 failures** across **13 categorized source files** totalling ~78,000 lines of C pseudo-code.

| File | Category | Functions | Size |
|------|----------|-----------|------|
| `00_main_orchestrator.c` | Entry / Main | 2 | 3KB |
| `01_pin_activation_drm.c` | PIN Activation | 1 | 3KB |
| `02_network_c2_timezonedb.c` | Network | 3 | 13KB |
| `03_process_injection_engine.c` | Injection | 6 | 49KB |
| `04_process_enumeration.c` | Process Enum | 3 | 3KB |
| `05_cheat_features_aimbot_esp_trigger.c` | Cheat Features | 64 | 127KB |
| `06_entity_player_loop.c` | Entity/Player | 4 | 9KB |
| `07_vgui_overlay_renderer.c` | Rendering | 3 | 18KB |
| `08_registry_config_persistence.c` | Persistence | 4 | 5KB |
| `09_xor_string_obfuscation.c` | Obfuscation | 84 | 29KB |
| `10_runtime_crt_exceptions.c` | CRT/Runtime | 71 | 219KB |
| `11_utility_string_math_memory.c` | Utilities | 215 | 208KB |
| `12_misc_unclassified.c` | Misc/STL | 383 | 368KB |

---

## Key Functions — Recovered & Renamed

| Address | Recovered Name | Ghidra Name | Description |
|---------|---------------|-------------|-------------|
| `0x140007270` | `main_orchestrator` | `FUN_140007270` | Top-level flow: decrypt strings → PIN loop → find cs2.exe → inject |
| `0x14000A5F4` | `entry_point_winmain` | `entry` | PE entrypoint → `__scrt_common_main_seh` |
| `0x140006F20` | `pin_validation_loop` | `FUN_140006F20` | Infinite loop: print prompt, read 4-digit PIN, validate, retry |
| `0x140003030` | `network_pin_verify` | `FUN_140003030` | WSAStartup → TCP connect → HTTP GET timezonedb → parse JSON → compare PIN |
| `0x140006C90` | `registry_read_config` | `FUN_140006C90` | `RegOpenKeyExA(HKCU\Software\udtk)` → load 440-byte config blob |
| `0x140006DF0` | `registry_write_config` | `FUN_140006DF0` | `RegCreateKeyExA` → `RegSetValueExA` → write 440-byte config blob |
| `0x1400037D0` | `dll_inject_into_process` | `FUN_1400037D0` | Full reflective injector: `OpenProcess` → `VirtualAllocEx` → `WriteProcessMemory` → `CreateRemoteThread` |
| `0x140003670` | `xor_string_decrypt` | `FUN_140003670` | Core XOR decryption routine |
| `0x140009B90` | `process_find_by_name` | `FUN_140009B90` | `CreateToolhelp32Snapshot` → iterate → match `cs2.exe` |
| `0x14000B0E0` | `vgui_overlay_renderer` | `FUN_14000B0E0` | `ISurface` draw calls: rects, strings, colors — full overlay engine |
| `0x140028460` | `aimbot_calculate_angle` | `FUN_140028460` | Vector math → pitch/yaw angle to target bone |
| `0x140028660` | `esp_draw_boxes` | `FUN_140028660` | Bounding box renderer for enemy players |
| `0x1400285E0` | `triggerbot_fire_check` | `FUN_1400285E0` | Crosshair-over-enemy check → `SendInput` mouse click |
| `0x140013210` | `cheat_menu_controller` | `FUN_140013210` | INSERT key toggle, feature list render, config save |
| `0x14001B148` | `world_to_screen` | `FUN_14001B148` | 3D→2D projection matrix |
| `0x14001ABBC` | `get_client_entity` | `FUN_14001ABBC` | Vtable call into `client.dll` entity list |
| `0x14001AA7C` | `player_bone_matrix` | `FUN_14001AA7C` | Read bone matrix from CS2 process memory |
| `0x140010838` | `keyboard_input_poll` | `FUN_140010838` | `GetAsyncKeyState` wrapper for menu/aimbot key detection |
| `0x140003010` | `winsock_cleanup` | `FUN_140003010` | `WSACleanup` / utility |
| `0x140009CE0` | `json_parse_field` | `FUN_140009CE0` | Lightweight JSON field extractor for TimeZoneDB response |

---

## Activation & PIN System

The cheat uses a **4-digit numeric PIN** as a simple DRM mechanism. The full flow:

```
User runs undetek-v10.37.exe
        │
        ▼
Decrypt "Enter PIN: " string (XOR 0x34)
        │
        ▼
pin_validation_loop() — infinite loop:
    ├── Print "Enter PIN: " prompt
    ├── Read input via _vfwprintf / scanf wrapper
    ├── Validate: must be exactly 4 numeric digits
    │       ├── Non-numeric → print "Invalid PIN", loop
    │       └── 4-digit numeric → call network_pin_verify(pin)
    │               ├── Network fails → print socket error + VPN tip, loop
    │               ├── PIN mismatch → print "Wrong PIN", loop
    │               └── PIN correct → return true ✓
        │
        ▼
main_orchestrator() continues:
    ├── process_find_by_name("cs2.exe")
    │       ├── Not found → print "Correct PIN but process not found"
    │       │              → Sleep(5000) → exit
    │       └── Found → dll_inject_into_process()
    │               ├── Success → print "Injected, press INSERT..."
    │               │           → Sleep(5000) → exit (cheat running)
    │               └── Failure → print "Injection failed 0x%x | %d"
    │                           → Sleep(5000) → exit
```

**Decompiled `pin_validation_loop`** (simplified, from `01_pin_activation_drm.c`):
```c
char pin_validation_loop(void) {
    char validated = '\0';
    do {
        // Decrypt + print "Enter PIN: "
        wchar_t *fmt = decrypt_xor34(local_buf);
        console_scanf_wrapper(fmt, local_pin_input);

        // Flush stdin
        while (keyboard_input_poll() != 10) {}

        // Validate 4 numeric digits
        char all_numeric = 1;
        for (int i = 0; i < 4; i++) {
            if (local_pin_input[i] < '0' || local_pin_input[i] > '9') {
                all_numeric = 0;
                break;
            }
        }
        if (!all_numeric) {
            // Print "Invalid PIN"
            console_printf_wrapper(decrypt_xor34(invalid_pin_str));
        } else {
            validated = (char)network_pin_verify(local_pin_input);
            if (!validated) {
                // Print "Wrong PIN"
                console_printf_wrapper(decrypt_xor34(wrong_pin_str));
            }
        }
    } while (!validated);
    return validated;
}
```

---

## Network Layer — TimeZoneDB Verification

The PIN is verified against the **TimeZoneDB API**. The loader:

1. Calls `WSAStartup(0x0202, ...)` to initialise Winsock
2. Resolves `vip.timezonedb.com` via `getaddrinfo`
3. Opens a TCP socket and connects on port `80`
4. Sends a hardcoded HTTP GET request:

```http
GET /v2.1/get-time-zone?key=0D0UMS4IS0XA&format=json&by=zone&zone=Europe/London HTTP/1.1
Host: vip.timezonedb.com
Connection: close
```

5. Receives the JSON response into a 4096-byte buffer
6. Parses the `"formatted"` field from the JSON using a lightweight custom parser
7. Extracts the timestamp value and compares it (or a derivative of it) against the entered PIN
8. Returns `1` (valid) or `0` (invalid) — exits the PIN loop on success

**Error handling** — 5 distinct socket error paths with identical user message:
> `"Check your firewall settings or connect to a VPN while entering the PIN"`

**Exposed API key in binary:** `0D0UMS4IS0XA`

---

## Injection Engine

Full reflective DLL injection into `cs2.exe`. Decompiled from `03_process_injection_engine.c`:

```
dll_inject_into_process()
    │
    ├── Load ntdll.dll → GetProcAddress("NtQueryInformationProcess")
    ├── Load ntdll.dll → GetProcAddress("NtReadVirtualMemory")
    │
    ├── OpenProcess(PROCESS_ALL_ACCESS, cs2_pid)
    │
    ├── VirtualAllocEx(hProcess, NULL, payload_size,
    │                  MEM_COMMIT|MEM_RESERVE, PAGE_EXECUTE_READWRITE)
    │
    ├── WriteProcessMemory(hProcess, remote_addr, payload, payload_size)
    │
    ├── VirtualProtectEx(hProcess, remote_addr, payload_size,
    │                    PAGE_EXECUTE_READ)
    │
    └── CreateRemoteThread(hProcess, NULL, 0,
                           remote_addr, NULL, 0, &tid)
```

**Memory scan signature** used to locate hook points in CS2:
```
1 BF ?? ?? ?? ?? FF 15 ?? ?? ?? ?? 48 8B 53 20 48 3B C2 73 0A
48 8B C8 48 2B CA 48 01 4B 30
```

---

## Steam Overlay Hook

The cheat hooks into CS2's Steam Overlay to render its menu invisibly inside the game window:

```
gameoverlayui64.exe  ← target process for overlay hook
gameoverlayui.dll    ← DLL containing overlay interface
        │
        ▼
vgui2_s.dll → CreateInterface("VGUI_Setup001")
        │
        ▼
ISurface interface → "VGUI_Surface039"
        │
        ▼
vgui_overlay_renderer()
    ├── ISurface::SetDrawColor(r, g, b, a)
    ├── ISurface::DrawFilledRect(x0, y0, x1, y1)
    ├── ISurface::DrawLine(x0, y0, x1, y1)
    ├── ISurface::SetTextColor(r, g, b, a)
    └── ISurface::DrawString(font, x, y, text)
```

Font used: **Tahoma**. Menu opened/closed with the **INSERT** key.

---

## Cheat Features

All features configured via in-game overlay menu and persisted to registry. From `05_cheat_features_aimbot_esp_trigger.c` and the bundled guide files:

### Aimbot (`aimbot_calculate_angle`)
- Calculates pitch/yaw angles from local player to target bone position using `atan2`/`sqrt` math
- **Hold-key activation** — active only while aimbot keybind is held
- Configurable **Smooth** value (low = fast snap, high = slow humanised aim)
- Configurable **Hitbox** target (head, neck, chest, etc.)
- Configurable **AimSpot** (specific bone target)
- Configurable **Key** binding via arrow keys in menu

### ESP / Wallhack (`esp_draw_boxes`)
- Renders 2D bounding boxes around enemy players through walls
- Uses **world_to_screen** projection matrix for accurate placement
- Colour changes based on **Spotted** flag (enemy visible = different colour)
- **Spotted** mode: uses game's internal visibility flag as a cheap visibility check

### Triggerbot (`triggerbot_fire_check`)
- Detects when crosshair is over an enemy entity
- Automatically fires via `SendInput` mouse click simulation
- Toggle on/off from menu

### Menu (`cheat_menu_controller`)
- Opened/closed with **INSERT** key
- Arrow key navigation
- All settings saved to `HKCU\Software\udtk` on change
- Theme selector
- On/Off toggles per feature

---

## Registry Persistence

All cheat settings are stored as a single 440-byte binary blob at:

```
HKEY_CURRENT_USER\Software\udtk
```

**Read flow** (`registry_read_config`):
```c
RegOpenKeyExA(HKEY_CURRENT_USER, "Software\\udtk", 0, KEY_READ, &hKey);
RegQueryValueExA(hKey, NULL, NULL, &type, NULL, &size);
// Validates: type == REG_BINARY (3), size == 0x1B8 (440 bytes)
RegQueryValueExA(hKey, NULL, NULL, &type, config_buf, &size);
RegCloseKey(hKey);
```

**Write flow** (`registry_write_config`):
```c
RegCreateKeyExA(HKEY_CURRENT_USER, "Software\\udtk", 0, NULL, 0,
                KEY_WRITE, NULL, &hKey, NULL);
RegSetValueExA(hKey, NULL, 0, REG_BINARY, config_buf, 0x1B8);
RegCloseKey(hKey);
```

**Config keys stored** (wide-char / UTF-16LE in registry):

| Key | Type | Description |
|-----|------|-------------|
| `Aimbot` | On/Off | Aimbot enabled |
| `Key` | Integer | Aimbot keybind VK code |
| `Smooth` | Integer | Aimbot smoothness value |
| `Hitbox` | Integer | Target hitbox index |
| `Trigger` | On/Off | Triggerbot enabled |
| `Spotted` | On/Off | Spotted-based visibility |
| `Esp` | On/Off | ESP/wallhack enabled |
| `Aim Spot` | Integer | Specific bone target |
| `Theme` | Integer | Menu colour theme |

---

## Imports & API Usage

**Key Windows APIs used:**

| DLL | Function | Purpose |
|-----|----------|---------|
| `KERNEL32.dll` | `CreateRemoteThread` | Inject shellcode/DLL into cs2.exe |
| `KERNEL32.dll` | `VirtualAllocEx` | Allocate memory in cs2.exe |
| `KERNEL32.dll` | `WriteProcessMemory` | Write payload to cs2.exe |
| `KERNEL32.dll` | `VirtualProtectEx` | Set memory permissions in cs2.exe |
| `KERNEL32.dll` | `OpenProcess` | Get handle to cs2.exe |
| `KERNEL32.dll` | `ReadProcessMemory` | Read cs2.exe memory (entity data) |
| `KERNEL32.dll` | `CreateToolhelp32Snapshot` | Enumerate running processes |
| `KERNEL32.dll` | `Process32First/Next` | Walk process list to find cs2.exe |
| `KERNEL32.dll` | `GetAsyncKeyState` | Poll keyboard for INSERT/aimbot key |
| `KERNEL32.dll` | `Sleep` | Post-injection/error delay |
| `ntdll.dll` | `NtQueryInformationProcess` | Low-level process info query |
| `ntdll.dll` | `NtReadVirtualMemory` | Low-level memory read |
| `ADVAPI32.dll` | `RegCreateKeyExA` | Create/open registry config key |
| `ADVAPI32.dll` | `RegSetValueExA` | Write cheat config to registry |
| `ADVAPI32.dll` | `RegOpenKeyExA` | Open existing config key |
| `ADVAPI32.dll` | `RegQueryValueExA` | Read cheat config from registry |
| `ADVAPI32.dll` | `RegDeleteKeyA` | Delete corrupt/stale config key |
| `USER32.dll` | `SendInput` | Triggerbot mouse click simulation |
| `WS2_32.dll` | `WSAStartup` | Initialise Winsock for PIN verify |
| `WS2_32.dll` | `getaddrinfo` | Resolve `vip.timezonedb.com` |
| `WS2_32.dll` | `connect` | TCP connect for PIN verify |
| `WS2_32.dll` | `send` | Send HTTP GET request |
| `WS2_32.dll` | `recv` | Receive TimeZoneDB JSON response |

---

## IOCs & Static Indicators

| Indicator | Value |
|-----------|-------|
| Filename | `undetek-v10.37.exe` |
| Version | 10.37 |
| Target Process | `cs2.exe` |
| Injected Module | `client.dll` |
| Overlay DLL | `gameoverlayui.dll` / `gameoverlayui64.exe` |
| VGUI Interface | `vgui2_s.dll` → `VGUI_Setup001` → `VGUI_Surface039` |
| Network Host | `vip.timezonedb.com` |
| Network Port | `80` (HTTP) |
| HTTP API Key | `0D0UMS4IS0XA` |
| Registry Key | `HKCU\Software\udtk` |
| Config Blob Size | 440 bytes (`0x1B8`) |
| XOR Key 1 | `0x14` |
| XOR Key 2 | `0x34` |
| Memory Signature | `1 BF ?? ?? ?? ?? FF 15 ?? ?? ?? ?? 48 8B 53 20 ...` |
| Discord | `discord.gg/undetek` |
| PE Entrypoint | `0x14000A5F4` |
| Main Function | `0x140007270` |
| Compiler | MSVC / VS2019 |
| Font | Tahoma |
| Menu Key | INSERT (VK `0x2D`) |

---

## Methodology

This reverse engineering was performed entirely with open-source tooling:

| Tool | Version | Purpose |
|------|---------|---------|
| **Ghidra** | 11.x (headless) | Full decompilation of all 843 functions |
| **Radare2** | 5.9.8 | Function listing, cross-reference analysis |
| **Python 3** | 3.x | XOR decryption, string extraction, source splitting |
| **objdump** | binutils | PE section analysis |
| **strings** | binutils | Initial string extraction |

**Decompilation pipeline:**

```
undetek-v10.37.exe
        │
        ├─► strings extraction → raw encrypted strings identified
        │
        ├─► XOR brute-force (Python) → keys 0x14 and 0x34 discovered
        │                              → all strings decrypted
        │
        ├─► Ghidra headless import + full auto-analysis (20 sec)
        │       • Windows VS2019 type archives applied
        │       • RTTI analysis
        │       • Decompiler parameter ID
        │       • Exception handler reconstruction
        │
        ├─► Custom Ghidra Java script (DecompileAll.java)
        │       • Decompiles all 843 functions
        │       • Writes to undetek_full_decompiled.c (1MB, 38K lines)
        │
        └─► Python splitter (classify + rename)
                • 45 keyword rules across 13 categories
                • Precise address→name map for key functions
                • 13 categorized .c files + manifest
                • 843 functions, 0 failures, ~78K lines total
```

---

## Source Directory Layout

```
source/
├── 00_MANIFEST.txt                          # Full address→name index (843 entries)
├── 00_main_orchestrator.c                   # main() + WinMain entry
├── 01_pin_activation_drm.c                  # PIN input loop + validation
├── 02_network_c2_timezonedb.c               # Winsock, HTTP, JSON parse
├── 03_process_injection_engine.c            # Full DLL injector (VirtualAllocEx etc.)
├── 04_process_enumeration.c                 # cs2.exe process finder
├── 05_cheat_features_aimbot_esp_trigger.c   # Aimbot, ESP, triggerbot (64 functions)
├── 06_entity_player_loop.c                  # Entity list, bone matrix, w2s
├── 07_vgui_overlay_renderer.c               # Steam VGUI surface hooks + draw
├── 08_registry_config_persistence.c         # HKCU\Software\udtk read/write
├── 09_xor_string_obfuscation.c              # 84 XOR decrypt stubs
├── 10_runtime_crt_exceptions.c              # CRT init, SEH, TLS, cookies
├── 11_utility_string_math_memory.c          # STL strings, math, allocators
├── 12_misc_unclassified.c                   # Remaining compiler/STL internals
└── undetek_full_decompiled.c                # All 843 functions in one file (1MB)
```

---

## Credits

**Researcher:** nulled_ash

Full static reverse engineering, XOR key discovery, Ghidra headless decompilation pipeline, function identification and renaming, source categorization and report.

---

*Report generated: 2026-06-18*
*Tools: Ghidra 11.x, Radare2 5.9.8, Python 3*
