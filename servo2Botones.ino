#include <Servo.h>
#define BTN_R 6
#define BTN_L 2
#define PIN_SERVO 10

Servo myservo;
int pos = 90;
void setup() {
  // put your setup code here, to run once:
  pinMode(BTN_R, INPUT);
  pinMode(BTN_L, INPUT);
  pinMode(3, OUTPUT);
  myservo.attach(PIN_SERVO);
  
}

void loop() {
  if(digitalRead(BTN_R) && pos < 180) pos += 1;
  if(digitalRead(BTN_L) && pos > 0) pos -= 1;
  myservo.write(pos);
  delay(15);
}
