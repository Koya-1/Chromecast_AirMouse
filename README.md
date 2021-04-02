# Chromecast_AirMouse
## Use ESP32 and MPU6050 motion sensor to create Chromecast Air Mouse.
1. Controller have 4 buttons:
  1-1. Back button
  1-2. Mouse click
  1-3. Scroll up
  1-4. Scroll down

2. Controller will go to deep sleep after 30 sec while no motion detected.

3. Controller will wake up upon motion detected via MPU6050 interrupt pin.
