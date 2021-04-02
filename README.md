# Chromecast_AirMouse
## Use ESP32 and MPU6050 motion sensor to create Chromecast Air Mouse.
1. Controller have 4 buttons: Back button/ Mouse click/ Scroll up/ Scroll down
2. Controller will go to deep sleep after 30 sec while no motion detected.
3. Controller will wake up upon motion detected via MPU6050 interrupt pin.

Total of 5 steps need to prepare:
1. To determine MPU6050 X, Y offset value.
2. To fix MPU6050 mouse sensitivity value.
3. Check ESP32 deep sleep function.
4. Check MPU6050 interrupt pin to wake up ESP32.
5. Combine all together.

## 1. To determine MPU6050 X, Y offset value.
1. Connect MPU6050 to ESP32.
2. Upload MPU6050_Calibration.ino to ESP32
3. Place MPU6050 in stationary location.
4. Get X, Y offset value from Serial Monitor and record down.

## 2. To fix MPU6050 mouse sensitivity value.
1. Replace x_offset and y_offset by recorded value in MPU6050_MouseMove.ino.
2. Upload MPU6050_MouseMove.ino to ESP32.
3. Connect ESP32 bluetooth to PC or Chromecast ATV.
4. Test motion of mouse move. if too sentitive, reduce sensitivity value. if mouse move too slow, increase sensitivity value.

## 3. Check ESP32 deep sleep function.
1. Connect push button to ESP32 pin 4 to wake ESP32 from deep sleep.
2. Upload ESP32_DeepSleep.ino to ESP32.
3. Blue LED should light up.
4. Wait 30 sec to let ESP32 go to deep sleep and blue LED should go off.
5. Push button to wake up ESP32 and blue LED should light up again.

## 4.Check MPU6050 interrupt pin to wake up ESP32.
1. Replace ESP32 pin 4 connect to MPU6050 INT pin.
2. Upload MPU6050_MotionToWake to ESP32.
3. Blue LED should light up.
4. Wait 10 sec to let ESP32 go to deep sleep and blue LED should go off.
5. Shake MPU6050 to wake up ESP32 and blue LED should light up again.

## 5. Combine all together.
1. Connect 4 push button to pin 5 (Mouse click), pin 23 (Back button), pin 18 (Scroll up), pin 19 (scroll down).
2. Upload Chromecast_AirMouse.ino to ESP32.
3. Replace x_offset and y_offset by recorded value in MPU6050_MouseMove.ino.
4. Connect ESP32 bluetooth to Chromecast ATV.
5. Have fun!
