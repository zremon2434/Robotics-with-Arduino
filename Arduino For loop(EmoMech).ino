/* 
  Author: ZR Emon 
  Simple Arduino code to blink two sets of LEDs alternatively.
*/

int pin1 = 6;      // Pin connected to the first set of LEDs
int delayt = 2000; // Delay between sets of blinks
int delaytt = 1000;// Delay between individual blinks
int pin2 = 9;      // Pin connected to the second set of LEDs
int pin1blink = 3; // Number of times the first set of LEDs blinks
int pin2blink = 5; // Number of times the second set of LEDs blinks
int j;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
}

void loop() {
  for (j = 1; j <= pin1blink; j = j + 1) {
    digitalWrite(pin1, HIGH);
    delay(delaytt);
    digitalWrite(pin1, LOW);
    delay(delaytt);
  }
  delay(delayt);

  for (j = 1; j <= pin2blink; j = j + 1) {
    digitalWrite(pin2, HIGH);
    delay(delaytt);
    digitalWrite(pin2, LOW);
    delay(delaytt);
  }
  delay(delayt);
}
