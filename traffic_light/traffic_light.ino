//Light one variables
int red1 = 10;
int yellow1 = 9;
int green1 = 8;

//Light two variables
int red2 = 13;
int yellow2 = 12;
int green2 = 11;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

void changeLights(){

  // turn both yellow lights on
  digitalWrite(red2, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(yellow2, HIGH);
  delay(3000);

  //turn both yellow off and opposte green and red
  digitalWrite(yellow1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red1, HIGH);
  delay(5000);
  digitalWrite(green2, HIGH);
  delay(10000);

  // turn both yellow on again
  digitalWrite(red1, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(yellow2, HIGH);
  digitalWrite(green2, LOW);
  delay(3000);

  //turn both yellow off and opposite green and red
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red2, HIGH);
  delay(5000);
  digitalWrite(green1, HIGH);
  delay(10000);
}

