int led1=9;
int led2=10;
int led3=11;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 analogWrite(9,512);
 //delay(1000);
 analogWrite(10,1023);
 //delay(1000);
 analogWrite(11,256);
 //delay(2000);
}
