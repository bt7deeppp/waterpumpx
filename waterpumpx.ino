#define BLYNK_TEMPLATE_ID "TMPL3yrqGwx2M"
#define BLYNK_TEMPLATE_NAME "Switch On"
#define BLYNK_AUTH_TOKEN "kWKOXxQeO0EX0g_7pDqJ3EOWsFjPd4qx"

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

BLYNK_WRITE(V0)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    Serial.println("on");
    digitalWrite(D0,LOW);
  }
  if(value == 0)
  {
    Serial.println("off");
    digitalWrite(D0,HIGH);
  }
}

void setup()
{
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, "Pump", "op&*deep");
  pinMode(D0,OUTPUT);
}

void loop()
{
  Blynk.run();
}
