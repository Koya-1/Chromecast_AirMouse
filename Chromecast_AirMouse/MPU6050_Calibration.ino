#include <Adafruit_MPU6050.h>

Adafruit_MPU6050 mpu;
float x, y;

void setup() {
  Serial.begin(115200);
  mpu.begin();
}

void loop() {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);
  
  x = -g.gyro.z;
  y = -g.gyro.x;
  Serial.print("x: ");
  Serial.print(x, 3);
  Serial.print (" y: ");
  Serial.println(y, 3);
  delay(1000);
}
