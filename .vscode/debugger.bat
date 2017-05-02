set PATH=C:\Users\mikow\.vscode\HusarionTools\bin\;%PATH%
cd c:\Users\mikow\Dysk Google\3D_projects\Prototyperator\Marlin-RC_VSC\jajebie || exit 1
start /wait st-flash write myproject.bin 0x08010000 || exit 1
start st-util
arm-none-eabi-gdb %*