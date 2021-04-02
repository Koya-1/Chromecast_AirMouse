#include <Adafruit_MPU6050.h>
#include <BleCombo.h>

Adafruit_MPU6050 mpu;
float x, y;

float x_offset = 0.003;
float y_offset = 0.075;
int sensitivity = 30; //0 - 100

void setup() {
  mpu.begin();
  Keyboard.begin();
}

void loop() {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  x = -(g.gyro.z + x_offset) * sensitivity;
  y = -(g.gyro.x + y_offset) * sensitivity;
  Mouse.move(x, y);

  delay(20);
}
