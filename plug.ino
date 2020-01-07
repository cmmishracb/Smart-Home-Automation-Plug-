#define BLYNK_PRINT serial
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
// Auth Token
char auth[] = "Blynk Authentication Token";
// Network(WiFi) Credential
char ssid[] = "Network(WiFi Name)";
char pass[] = "Network(WiFi) Password";

void setup()
{
serial.begin(9600);
Blynk.begin(auth, ssid, pass);
}
void loop()
{
Blynk.run()
}
