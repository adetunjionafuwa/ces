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
  
  //Light one
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);

  //Light two
  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  changeLights();
}

void changeLights(){
  digitalWrite(red1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(red2, HIGH);
  digitalWrite(green1, HIGH);
  delay(5000);
  
  
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, HIGH);
  delay(3000);
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, HIGH);
  delay(3000);
  
  digitalWrite(yellow2, HIGH);
  delay(3000);
  digitalWrite(red2, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, HIGH);
  delay(5000);
  
  digitalWrite(green2, LOW);
  digitalWrite(yellow2, HIGH);
  delay(3000);
  digitalWrite(yellow2, LOW);
  digitalWrite(red2, HIGH);
  delay(3000);
  digitalWrite(yellow1, HIGH);
  delay(3000);
}

