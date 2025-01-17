# SoC - DTM

This sample application provides the Direct Test Mode (DTM) through a 2-wire UART interface for the RF PHY testing of a Bluetooth Low Energy device.

## Direct Test Mode (DTM) Overview

DTM is typically used with a separate Bluetooth Tester device.

DTM can be used either through a 2-wire UART interface, as described in this example, or over HCI, which is currently not supported. The 2-wire UART interface uses baud rates from 1200 up to 115200 bps (the default) always with 8 data bits, no parity, 1 stop bit and without flow control (no RTS nor CTS).

![Connecting the Bluetooth Tester to the WSTK](readme_img1.png)

DTM can be also used without a separate Bluetooth Tester device when testing more manually with a spectrum analyzer and signal generators setup by sending the command bytes with a special terminal. For an easier usage in this setup, it is also good to consider using the [BGTool](https://www.silabs.com/documents/public/application-notes/an1267-bt-rf-phy-evaluation-using-dtm-sdk-v3x.pdf) desktop application instead, which uses the [NCP-mode](https://www.silabs.com/documents/public/application-notes/an1259-bt-ncp-mode-sdk-v3x.pdf) [BGAPI](https://docs.silabs.com/bluetooth/latest)-interface.

Although the DTM is defined for the Bluetooth Qualifications, it can be used to run most of the Regulatory Certification tests.

Typical use cases for the DTM:
- SoCs:
  - Regulatory Certifications testing
  - RF-PHY testing for the Bluetooth Qualification if the design does not match the reference design
  - Production testing
- Modules:
  - Regulatory Certifications testing (required for the modules in Europe)
  - Spot checks (strongly recommended by FCC)
  - RF-PHY testing for the Bluetooth Qualification if the design might affect the module operation
  - Production testing
- Radio Boards with WSTK:
  - Mostly for getting to know the DTM overall and testing the setup
  - Typically not much practical usage

For more information about using the DTM, see the following documents:

- [AN1267: Radio Frequency Physical Layer Evaluation in Bluetooth® SDK v3.x](https://www.silabs.com/documents/public/application-notes/an1267-bt-rf-phy-evaluation-using-dtm-sdk-v3x.pdf)

The full DTM specification can be found here:

- [Bluetooth® Core Specification Adopted Version 5.2, Vol 6: Low Energy Controller, Part F: Direct Test Mode](https://www.bluetooth.com/specifications/bluetooth-core-specification/)

## Getting Started

To get started with Bluetooth and Simplicity Studio, see [QSG169: Bluetooth® SDK v3.x Quick Start Guide](https://www.silabs.com/documents/public/quick-start-guides/qsg169-bluetooth-sdk-v3x-quick-start-guide.pdf).

The instructions to create and flash the DTM example application are in the [AN1267: Radio Frequency Physical Layer Evaluation in Bluetooth® SDK v3.x](https://www.silabs.com/documents/public/application-notes/an1267-bt-rf-phy-evaluation-using-dtm-sdk-v3x.pdf). The same document contains information about customizing UART pins for your own hardware and examples about using the DTM.

Detailed specifications are in the Bluetooth Specifications.

## Troubleshooting

Note that __NO__ Bootloader is included in any Software Example projects, but they are configured so, that they expect a bootloader to be present on the device. To get your application work, you should either
- flash a bootloader to the device or
- uninstall the **OTA DFU** and **Bootloader Application Interface** software components.

To flash a bootloader, you should either create a bootloader project or run a precompiled **Demo** on your device from the Launcher view. Precompiled Demos flash both bootloader and application images to your device.

- To flash an OTA DFU capable bootloader to your device, *SoC-Thermometer* demo can be flashed before your application to load the bootloader.
- To flash a UART DFU capable bootloader to your device, *NCP-Empty* demo can be flashed before your application to load the bootloader.
- For your custom application, create your own bootloader project and flash it to your device before flashing your application.
- When you flash your application image to the device, use the *.hex* or *.s37* output file. Flashing *.bin* files may overwrite (erase) the bootloader.
- On Series 1 devices (EFR32xG1x), both first stage and second stage bootloaders have to be flashed. This can be done at once by flashing the **-combined.s37* file found in your bootloader project after building the project.
- For more information, see *[UG103: Bootloading fundamentals](https://www.silabs.com/documents/public/user-guides/ug103-06-fundamentals-bootloading.pdf)* and *[UG266: Silicon Labs Gecko Bootloader User's Guide](https://www.silabs.com/documents/public/user-guides/ug266-gecko-bootloader-user-guide.pdf)*.

Before programming the radio board mounted on the WSTK, make sure the power supply switch the AEM position (right side) as shown below.

![Radio board power supply switch](readme_img0.png)

**Note!** With the WSTK and the Radio Board, the DTM example uses EXP-header UART pins by default and not the USB UART as most of the other examples. Also, the default is no flow control.


## Resources

[Bluetooth Documentation](https://docs.silabs.com/bluetooth/latest/)

[UG103.14: Bluetooth® LE Fundamentals](https://www.silabs.com/documents/public/user-guides/ug103-14-fundamentals-ble.pdf)

[QSG169: Bluetooth® SDK v3.x Quick Start Guide](https://www.silabs.com/documents/public/quick-start-guides/qsg169-bluetooth-sdk-v3x-quick-start-guide.pdf)

[UG434: Silicon Labs Bluetooth ® C Application Developer's Guide for SDK v3.x](https://www.silabs.com/documents/public/user-guides/ug434-bluetooth-c-soc-dev-guide-sdk-v3x.pdf)

[Bluetooth Training](https://www.silabs.com/support/training/bluetooth)

[AN1267: Radio Frequency Physical Layer Evaluation in Bluetooth® SDK v3.x](https://www.silabs.com/documents/public/application-notes/an1267-bt-rf-phy-evaluation-using-dtm-sdk-v3x.pdf)

[Bluetooth® Core Specification Adopted Version 5.2, Vol 6: Low Energy Controller, Part F: Direct Test Mode](https://www.bluetooth.com/specifications/bluetooth-core-specification/)

## Report Bugs & Get Support

You are always encouraged and welcome to report any issues you found to us via [Silicon Labs Community](https://www.silabs.com/community).