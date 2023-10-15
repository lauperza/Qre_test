#include <Arduino.h>
#define DEBUG 1
int qre1;
int qre2;
int qre3;
int qre4;
int qre5;
int qre6;
int qre7;
int qre8;
void setup() {
  Serial.begin(115200);
  pinMode(34, INPUT);
  pinMode(35, INPUT);
  pinMode(32, INPUT);
  pinMode(33, INPUT);
  pinMode(25, INPUT);
  pinMode(26, INPUT);
  pinMode(27, INPUT);
  pinMode(14, INPUT);
}

void loop() {
  qre1 = analogRead(34);
  qre2 = analogRead(35);
  qre3 = analogRead(32);
  qre4 = analogRead(33);
  qre5 = analogRead(25);
  qre6 = analogRead(26);
  qre7 = analogRead(27);
  qre8 = analogRead(14);
  if(DEBUG)
  {
    Serial.print("qre1: ");
    Serial.print(qre1);
    Serial.print("   qre2: ");
    Serial.print(qre2);
    Serial.print("   qre3: ");
    Serial.print(qre3);
    Serial.print("   qre4: ");
    Serial.print(qre4);
    Serial.print("   qre5: ");
    Serial.print(qre5);
    Serial.print("   qre6: ");
    Serial.print(qre6);
    Serial.print("   qre7: ");
    Serial.print(qre7);
    Serial.print("   qre8: ");
    Serial.print(qre8);
    Serial.println();
    delay(100);
  }
}
