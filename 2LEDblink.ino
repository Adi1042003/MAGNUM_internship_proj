int i=1;
int j=1;
int value1;
int value2;
int pinL1=10;//red LED:
int pinL2=9;//yellow LED:
int delayT=1000;
String msg1="Enter how many times do you wanna blink the RED led light";
String msg2="Enter how many times do you wanna blink the yellow light";
void setup() {
  // put your setup code here, to run once:
  pinMode(pinL1,OUTPUT);
  pinMode(pinL2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print(msg1);
  while(Serial.available()==0)
  {}
  value1=Serial.parseInt();
  Serial.println(msg2);
   while(Serial.available()==0)
  {}
  value2=Serial.parseInt();
 
   for(i=1;i<=value1;i++)//for red light:
   {
     digitalWrite(pinL1,HIGH);
     delay(delayT);
     digitalWrite(pinL1,LOW);
     delay(delayT);
   }
   for(j=1;j<=value2;j++)//for yellow light:
   {
    digitalWrite(pinL2,HIGH);
    delay(delayT);
     digitalWrite(pinL2,LOW);
    delay(delayT);
   }

}
