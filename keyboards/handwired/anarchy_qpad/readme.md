# anarchy_qpad

![anarchy_qpad](imgur.com image replace me!)

*This is intended to be a matrix keyboard with mapped midi controls to control QLAB and other audio applications. Meant to be used with Vial to adjust keymaps and functions as needed.*

* Keyboard Maintainer: [Grant Patrick](https://github.com/anarchysoundllc)
* Hardware Supported: *KB2040 PCB*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make anarchy_qpad:default

Flashing example for this keyboard:

    Put the KB2040 into bootloader mode by holding the boot button on power up. Copy the uf2 file that was compiled to the drive that appears on your computer. KB2040 will disappear and show up as an HID.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
