#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>

#define DHTPIN 5
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

//char auth[] = "SzqCA8MHVZOpBIGidMVTKv158d-MqZO5";
char auth[] = "tZejnbt9fF-Q0E9PDMQa0D20VR2fczxc";
char ssid[] = "vivo 1819";
char pass[] = "kill777222";

BlynkTimer timer;
BlynkTimer timer2;
float t;
float h;

WidgetLCD lcd(V0);

void sendSensor(){
  Blynk.virtualWrite(V5, h);
}

void TempSensor() {
  Blynk.virtualWrite(V6, t);
}

void setup(){
  Blynk.begin(auth, ssid, pass);
  dht.begin();
  timer.setInterval(1000L, sendSensor);
  timer2.setInterval(1000L, TempSensor);
}

void loop()
{
  Blynk.run();
  timer.run();
  timer2.run();
  float temperature = dht.readTemperature();
  h = dht.readHumidity();

  t = temperature;

  lcd.clear();

  
  delay(2000); 
}
