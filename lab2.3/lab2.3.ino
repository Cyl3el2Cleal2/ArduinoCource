const int led_BT = 17;
const int led_WIFI = 2;
const int led_NTP = 15;
const int led_IOT = 12;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led_BT, OUTPUT);
  pinMode(led_WIFI, OUTPUT);
  pinMode(led_NTP, OUTPUT);
  pinMode(led_IOT, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 
  
  digitalWrite(led_BT, HIGH);
  digitalWrite(led_IOT, HIGH);
  delay(200);
  digitalWrite(led_NTP, LOW);
  digitalWrite(led_WIFI, LOW);
  delay(200);
  digitalWrite(led_NTP, HIGH);
  digitalWrite(led_WIFI, HIGH);
  delay(200);
   digitalWrite(led_BT, LOW);
  digitalWrite(led_IOT, LOW);
  delay(200);
}
