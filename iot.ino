#include <ESP32Servo.h>

#define BLYNK_TEMPLATE_ID           "TMPL690lHz_22"
#define BLYNK_DEVICE_NAME           "exercise 1"
#define BLYNK_AUTH_TOKEN            "O9zaUkU4trApy580Bb9k2p75yhQrLtYW"


#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "GRANADA";
char pass[] = "";
BLYNK_WRITE(V2)
{
int pinValue = param.asInt();
  if (pinValue == 1) {
    digitalWrite(13,HIGH);
    digitalWrite(14,LOW);
    analogWrite(25,100);
    digitalWrite(18,HIGH);
    digitalWrite(19,LOW);
    analogWrite(15,100);

  } else {
    digitalWrite(13,LOW);
    digitalWrite(14,HIGH);
    analogWrite(25,0);
    digitalWrite(18,LOW);
    digitalWrite(19,HIGH);
    analogWrite(15,0);

  }
}

BLYNK_WRITE(V3)
{
int pinValue = param.asInt();
  if (pinValue == 1) {
    digitalWrite(13,LOW);
    digitalWrite(14,HIGH);
    analogWrite(25,0);
    digitalWrite(18,LOW);
    digitalWrite(19,HIGH);
    analogWrite(15,0);

  } else {
    digitalWrite(13,HIGH);
    digitalWrite(14,LOW);
    analogWrite(25,100);
    digitalWrite(18,HIGH);
    digitalWrite(19,LOW);
    analogWrite(15,100);

  }
}

BLYNK_WRITE(V0)
{
int pinValue = param.asInt();
  if (pinValue == 1) {
    digitalWrite(13,LOW);
    digitalWrite(14,HIGH);
    analogWrite(25,0);
    digitalWrite(18,HIGH);
    digitalWrite(19,LOW);
    analogWrite(15,100);

  } else {
    digitalWrite(13,LOW);
    digitalWrite(14,HIGH);
    analogWrite(25,0);
    digitalWrite(18,HIGH);
    digitalWrite(19,LOW);
    analogWrite(15,100);

  }
}

BLYNK_WRITE(V1)
{
int pinValue = param.asInt();
  if (pinValue == 1) {
    digitalWrite(13,HIGH);
    digitalWrite(14,LOW);
    analogWrite(25,100);
    digitalWrite(18,LOW);
    digitalWrite(19,HIGH);
    analogWrite(15,0);

  } else {
    digitalWrite(13,HIGH);
    digitalWrite(14,LOW);
    analogWrite(25,100);
    digitalWrite(18,LOW);
    digitalWrite(19,HIGH);
    analogWrite(15,0);

  }
}


{
int pinValue = param.asInt();
  if (pinValue == 1) {
    servo_23.write(90);

  } else {
    servo_23.write(0);

  }
}


void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(13,OUTPUT);
 pinMode(14,OUTPUT);
 pinMode(19,OUTPUT);
 pinMode(15,OUTPUT);
  servo_23.attach(23);
  servo_23.attach(24);
}

void loop() {
  Blynk.run();
}