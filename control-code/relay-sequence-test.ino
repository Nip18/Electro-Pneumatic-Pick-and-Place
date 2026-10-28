int relay1 = 9;
int relay2 = 10;
int relay3 = 11;

void setup()
{
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  digitalWrite(relay3, HIGH);
}

void loop()
{
  digitalWrite(relay1, HIGH);
  delay(1000);
  digitalWrite(relay2, HIGH);
  delay(2000);
  digitalWrite(relay3, LOW);
  delay(1000);
  digitalWrite(relay2, LOW);
  delay(1000);
  digitalWrite(relay1, LOW);
  delay(1000);
  digitalWrite(relay2, HIGH);
  delay(2000);
  digitalWrite(relay3, HIGH);
  delay(1000);
  digitalWrite(relay2, LOW);
  delay(1000);
}