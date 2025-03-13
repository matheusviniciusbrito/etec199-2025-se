// C++ code
//
int a = 0;

int my_0_5 = 0;

int counter;

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(5, LOW);
  for (counter = 0; counter < 5; ++counter) {
    digitalWrite(6, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(6, LOW);
    delay(500); // Wait for 500 millisecond(s)
  }
  digitalWrite(2, HIGH);
  digitalWrite(4, LOW);
}