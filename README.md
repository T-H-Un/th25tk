# TH25TK
TH25TK is a simple and basic 25 keys keyboard with STM32F103C8T6.
I hope the board become tutorial board of STM32F series for Japanese.
This keyboard is support this layouts.

![keyboard-layout-1](https://user-images.githubusercontent.com/39953146/197390275-86551d3a-951a-4734-8b94-0985c1d47894.jpg)

# Build
This repository is not commited qmk_firmware. So, you must do a few act.
1. Download and unzip this project.
2. Make "th25tk" directory in qmk_firmware/keyboards . 
3. Copy all contents to "th25tk" directory.
4. Run code on a comandline in qmk_firmware directory.
This is example of command.
```
make th25tk/rev1/f103:via
```
The path may change for your board because it has many revision(e.g. Prototype, Consumer, Custum...).
The directory named by varios things.
1. revx:PCB revision.
2. f103 or f303 or x03s: f103 is using STM32F103C8T6 and f303 is using STM32F303CBT6 and x03s is support split layout for the above MCUs.
