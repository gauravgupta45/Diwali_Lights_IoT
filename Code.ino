
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "******************";
char ssid[] = "Your Wi-Fi SSID";
char pass[] = "password";
void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pass);
}
void loop()
{
    Blynk.run();
}

