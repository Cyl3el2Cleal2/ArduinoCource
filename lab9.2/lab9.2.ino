#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "1l3OHCk-WGcXAsjmtLPcnG57ZwjPC46O";
char ssid[] = "vivo 1819";
char pass[] = "kill777222";

void setup() {
  Blynk.begin(auth, ssid, pass);
}
void loop() {
  Blynk.run();
  Blynk.virtualWrite(V4, 127);
} 
