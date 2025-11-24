#include <Servo.h>;

#define servomotor 10

Servo servo;

int sensor = 4;
int umido;

void setup() {

  pinMode(sensor, INPUT);
  servo.attach(servomotor);
}

void loop() {

  umido = digitalRead(sensor);

  if (!umido) {
    for (int i = 0; i < 90; i++) {
      servo.write(i);
      delay(10);
    }
    for (int i = 90; i > 0; i--) {
      servo.write(i);
      delay(10);
    }
  }
}
