#include <NewPing.h>
float d;
#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 200
int redled = 6;

NewPing sonar(TRIGGER_PIN,ECHO_PIN,MAX_DISTANCE);
void setup(){
  Serial.begin(9600);
  pinMode(redled, OUTPUT);
}

void loop(){
  delay(1000);
  d = sonar.ping_cm();
  if (d <= 200 && d > 4)
  {
    digitalWrite(redled,HIGH);
    Serial.print("Ping:");
    Serial.print(d);
    Serial.println("cm");
  }
  else if (d > 200)
  {
    digitalWrite(redled,LOW);
  }
  else
  {
    digitalWrite(redled,LOW);
   }
  }
