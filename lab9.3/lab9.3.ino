#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "1l3OHCk-WGcXAsjmtLPcnG57ZwjPC46O";
char ssid[] = "vivo 1819";
char pass[] = "kill777222";
int switchState = 0;
WidgetLED led(V3);

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}
void loop() {
  if(switchState == 1){
    int ldr = digitalRead(4);
    Serial.println(ldr);
    if(ldr == 1){
      Blynk.virtualWrite(V4, 255);
      led.on();
    }else{
      Blynk.virtualWrite(V4, 0);
      led.off();
    }
  }else{
    Blynk.virtualWrite(V4, 0);
    led.off();
  }
  delay(400);
  Blynk.run();

} 

BLYNK_WRITE(V5){
  Serial.println("button pressed");
  int value = param.asInt();
  if(value == 1 ){
    switchState = 1;
  }else{
    switchState = 0;
  }

}
