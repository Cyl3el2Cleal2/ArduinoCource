#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "1l3OHCk-WGcXAsjmtLPcnG57ZwjPC46O";
char ssid[] = "vivo 1819";
char pass[] = "kill777222";
WidgetLED led1(V0);
WidgetLED led2(V1);
WidgetLED led3(V2);
WidgetLED led4(V3);

void setup() {
 Blynk.begin(auth, ssid, pass);
}
void loop() {
 led1.setValue(15);
 led2.setValue(100);
 led3.setValue(127);
 led4.setValue(255);
} 
