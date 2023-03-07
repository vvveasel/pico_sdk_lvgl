# Debugging with picoprobe
1. Use [picoprobe.uf2](https://github.com/raspberrypi/picoprobe/releases) v1.02 or higher
2. Download [OpenOCD](https://sysprogs.com/files/auxiliary/openocd/com.sysprogs.arm.openocd/openocd-20230202.7z) and add bin to path
3. Download and install [gcc-arm-none-eabi](https://armkeil.blob.core.windows.net/developer/Files/downloads/gnu-rm/10.3-2021.10/gcc-arm-none-eabi-10.3-2021.10-win32.exe).
Add to path
4. Add following configuration to launch.json:
```json
{
	"cwd": "${workspaceRoot}",
	"executable": "C:/Users/alexa/Projects/Granny/repos/pico_sdk_lvgl/platformio/.pio/build/pico_ili9488_ft6206/APPLICATION.elf",
	"name": "Debug with OpenOCD",
	"request": "launch",
	"type": "cortex-debug",
	"servertype": "openocd",
	"interface": "swd",
	"device": "RP2040",
	"configFiles": [
		"interface/picoprobe.cfg",
		"target/rp2040.cfg"
	],
	"searchDir": [
		"C:/Users/alexa/Projects/Granny/tools/OpenOCD/share/openocd/scripts"
	],
	"svdFile": "C:/Users/alexa/.platformio/platforms/wizio-pico/misc/svd/rp2040.svd",
	"runToEntryPoint": "main",
	"showDevDebugOutput": "none",
	"preLaunchTask": {
		"type": "PlatformIO",
		"task": "Pre-Debug"
	}
},
```
5. Edit `\OpenOCD\share\openocd\scripts\interfaceinterface/picoprobe.cfg` as follows:
```json
	# Adapter section
	adapter driver cmsis-dap
	transport select swd
	adapter speed 5000
```

6. Add `"cortex-debug.gdbPath": "arm-none-eabi-gdb",` to VSCode settings
7. Connect picoprobe as in RP2 docs