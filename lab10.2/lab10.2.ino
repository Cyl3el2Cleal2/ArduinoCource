#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>
#include <math.h>

#define DHTPIN 5
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

char auth[] = "SzqCA8MHVZOpBIGidMVTKv158d-MqZO5";
char ssid[] = "vivo 1819";
char pass[] = "kill777222";


float t;

WidgetLCD lcd(V0);


void setup(){
  Blynk.begin(auth, ssid, pass);
  dht.begin();

}

void loop()
{
  Blynk.run();


  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  
  lcd.clear();

  lcd.print(0,0, "Temp.  = "+String(temperature)+"*C");
  lcd.print(0,1, "Hum.  = "+String(humidity)+"%RH");
  delay(2000); 
}
