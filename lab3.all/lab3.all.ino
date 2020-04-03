const int port_led = 4;
const int port_idr = 14;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(port_led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(port_led, LOW);
  int sensor_value = digitalRead(port_idr);
  Serial.println(sensor_value);
  if(sensor_value==1){
    digitalWrite(port_led, HIGH);
    delay(300);
  }
}
