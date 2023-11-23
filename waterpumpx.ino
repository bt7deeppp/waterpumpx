#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPL3mzzLThPK"
#define BLYNK_TEMPLATE_NAME "waterpumpx"
#define BLYNK_AUTH_TOKEN "ueROYOd_mrGeNezipwvKL6rdRvfih72e"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

void setup()
{
  Serial.begin(9600);
  Blynk.begin(BLYNK_AUTH_TOKEN, "swarnadeep", "class7bc");
}

void loop()
{
  Blynk.run();
}


