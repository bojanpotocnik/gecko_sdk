# SoC - AoA Asset Tag

This sample app demonstrates a CTE (Constant Tone Extension) transmitter that can be used as an asset tag in a direction finding setup estimating Angle of Arrival (AoA). Test this sample app with **NCP - AoA Locator** which (used together with the **aoa_locator host** applications) can estimate the direction of the asset tag. 



## Getting Started

To learn the basics of Bluetooth direction finding technology , see [UG103.18: Bluetooth® Direction Finding Fundamentals](https://www.silabs.com/documents/public/user-guides/ug103-18-bluetooth-direction-finding-fundamentals.pdf).

To get started with Bluetooth and Simplicity Studio, see [QSG169: Bluetooth® SDK v3.x Quick Start Guide](https://www.silabs.com/documents/public/quick-start-guides/qsg169-bluetooth-sdk-v3x-quick-start-guide.pdf).

To get started with Silicon Labs' Direction Finding Solution, see [QSG175: Silicon Labs Direction Finding Solution Quick-Start Guide](https://www.silabs.com/documents/public/quick-start-guides/qsg175-direction-finding-solution-quick-start-guide.pdf)

In an AoA direction finding use case the tag acts as a transmitter and the locator acts as a receiver. The locator determines the direction of the tag by sampling the signal of the tag on different antennas of an antenna array and measuring phase differences.

![Locators determine the direction of the tag by sampling different antennas](readme_img1.png) 

To estimate the direction of the incoming signal the AoA - Locator needs to receive a special Bluetooth packet, which has a Constant Tone Extension (CTE). CTEs can be transmitted:

* via a Bluetooth connections (connection oriented mode),
* in periodic advertisements (connectionless mode),
* attached to extended advertisements, which is however not part of the Bluetooth standard, but is a Silicon Labs proprietary solution (Silabs mode).

This sample app:

* transmits connectable advertisements, and makes it possible to enable CTE on the established connections
* transmits Silicon Labs proprietary extended advertisements with CTE to let multiple locators receive the same signal

This makes it possible for locators to locate the asset tag.



## Configuring the CTE Transmit Method

By default the asset tag is connectable, and CTEs can be enabled and requested via a connection. Additionally, Silicon Labs proprietary non-connectable extended advertisements with CTE are also sent out periodically, so that (multiple) locators can locate the tag without connecting to it. These features are enabled by the installed **Constant Tone Extension GATT Service (Connection)** and **Constant Tone Extension GATT Service (Silabs proprietary)** software components

![CTE related software components](readme_img2.png)

To transmit standard periodic advertisements instead of Silicon Labs proprietary extended advertisements, uninstall the **Constant Tone Extension GATT Service (Silabs proprietary)** and install the **Constant Tone Extension GATT Service (Connectionless)** software component in the Project Configurator.



## Testing the SoC - AoA Asset Tag Application

AoA Asset Tag can be tested together with an AoA Locator. After programming your board with the SoC - AoA Asset Tag sample app, please attach an antenna array board, as well, create an NCP - AoA Locator sample app, and then follow the instructions documented in [AN1296: Application Development with Silicon Labs’ RTL Library](https://www.silabs.com/documents/public/application-notes/an1296-application-development-with-rtl-library.pdf).



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

Before programming the radio board mounted on the WSTK, make sure the power supply switch the AEM position (right side), as shown below.

![Radio board power supply switch](readme_img0.png)



## Resources

[Bluetooth Documentation](https://docs.silabs.com/bluetooth/latest/)

[UG103.14: Bluetooth® LE Fundamentals](https://www.silabs.com/documents/public/user-guides/ug103-14-fundamentals-ble.pdf)

[UG103.18: Bluetooth® Direction Finding Fundamentals](https://www.silabs.com/documents/public/user-guides/ug103-18-bluetooth-direction-finding-fundamentals.pdf)

[QSG169: Bluetooth® SDK v3.x Quick Start Guide](https://www.silabs.com/documents/public/quick-start-guides/qsg169-bluetooth-sdk-v3x-quick-start-guide.pdf)

[QSG175: Silicon Labs Direction Finding Solution Quick-Start Guide](https://www.silabs.com/documents/public/quick-start-guides/qsg175-direction-finding-solution-quick-start-guide.pdf)

[AN1296: Application Development with Silicon Labs’ RTL Library](https://www.silabs.com/documents/public/application-notes/an1296-application-development-with-rtl-library.pdf)

[Bluetooth Training](https://www.silabs.com/support/training/bluetooth)



## Report Bugs & Get Support

You are always encouraged and welcome to report any issues you found to us via [Silicon Labs Community](https://www.silabs.com/community).