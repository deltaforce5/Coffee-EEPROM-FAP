# Coffee-EEPROM-FAP

## Articles
- [Vendors Still Allow You to Hack Their Vending Machine](https://medium.com/@nic_whr/vendors-still-allow-you-to-hack-the-vending-machine-34ddad81dbad)

## Features
- Read credit on load
- Press <- left, load .bin dump from storage
- Press -> right, dump EEPROM .bin to storage /ext/app_data/coffee_eeprom
- Hold . center, Enter credit editor mode
    - <- -> to move the digit cursor
    - up/down to increase/decrease the digit value (min 0.01 max 655.35)
    - center to save the new value

## Flipper Prototyping Board Schematic

- SDA -> Pin 15
- SCL -> Pin 16
- VCC (3.3V) -> Pin 9
- GND -> Pin 18

**Provide two 4k7 ohms Pull-Up resistors from SDA to VCC and one from SCL to VCC**

The upper 6 pins male header is not required (unless you want to use the PicKit2 either)

![alt text](https://github.com/wh00hw/Coffee-EEPROM-FAP/raw/master/assets/schema.png)


## PicKit2 Schematic

![alt text](https://github.com/wh00hw/Coffee-EEPROM-FAP/raw/master/assets/a74c600b-28eb-400c-b6e2-54530d133a6a.jpg)


## FAP

![alt text](https://github.com/wh00hw/Coffee-EEPROM-FAP/raw/master/assets/Screenshot.png)

## Demo

![alt text](https://github.com/wh00hw/Coffee-EEPROM-FAP/raw/master/assets/flipper.jpg)

## Disclaimer
**I am not responsible for any illegal use of this tool. Edit the credit is like stealing.**

## Compiling
Clone flipperzero firmware repository
```
git clone https://github.com/flipperdevices/flipperzero-firmware.git
```

If you already cloned the repository, update it
```
cd flipperzero-firmware
FLIPPERZEROFW_ROOT=$PWD
git fetch
git pull
```

From the flipperzero firmware cloned repository folder, download/update the toolchain
```
./fbt
```

Clone this repository into a different folder
```
cd ..
git clone https://https://github.com/deltaforce5/Coffee-EEPROM-FAP.git
```

Copy the source folder into the flipperzero user application sources folder
```
cd Coffee-EEPROM-FAP
cp -r ./coffee_eeprom_app $FLIPPERZEROFW_ROOT/applications_user/
```

From the flipperzero firmware cloned repository folder, compile the app
```
cd $FLIPPERZEROFW_ROOT
./fbt fap_coffee_eeprom
```

Check the output, if it compiled without errors, copy the coffee_eeprom.fap file to the flipper zero storage
