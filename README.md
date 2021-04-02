# Chromecast_AirMouse
## Use ESP32 and MPU6050 motion sensor to create Chromecast Air Mouse.
1. Controller have 4 buttons: Back button/ Mouse click/ Scroll up/ Scroll down

2. Controller will go to deep sleep after 30 sec while no motion detected.

3. Controller will wake up upon motion detected via MPU6050 interrupt pin.

Total of 4 steps need to prepare:
1. To determine MPU6050 X, Y offset value.
2. To fix MPU6050 mouse sensitivity value.
3. Check ESP32 deep sleep function.
4. Check MPU6050 interrupt pin to wake up ESP32.


