#include "DHT.h"
#define DHTPIN 4
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
int led = 13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
  pinMode(led, OUTPUT);
}

void loop() {
  float a = dht.readHumidity();
  float b = dht.readTemperature();
  Serial.printf("Humidity = %f %%\n",a);
  Serial.printf("Temperature = %f c\n",b);
  delay(1000);
  // put your main code here, to run repeatedly:

}
