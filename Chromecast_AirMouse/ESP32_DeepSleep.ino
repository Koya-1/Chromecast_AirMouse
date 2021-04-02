#define onboardLED 2
#define timeToSleep 30 //sec
#define wakePin 4 // MPU6050 interupt pin used for waking up  

int timer = 0;

void deep_sleep() {
  digitalWrite(onboardLED, LOW);
  delay(2000);
  esp_deep_sleep_start();
}

void setup() {
  pinMode(wakePin, INPUT_PULLUP);
  pinMode(onboardLED, OUTPUT);
  digitalWrite(onboardLED, HIGH);
  esp_sleep_enable_ext0_wakeup(GPIO_NUM_4, 0); //wakePin number
}

void loop() {
  if (millis() - timer >= timeToSleep * 1000){
    deep_sleep();
  }
  if (!digitalRead(wakePin)){
    timer = millis();
  }
  delay(1000);
}
