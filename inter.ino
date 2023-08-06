int push1=3;//push button1
int push2=4;//push button2
int push3=5;//push button3
int count = 0;
int led[]={8,9,10,11};
void setup() {
  pinMode(push1,INPUT);
  pinMode(push2,INPUT);
  pinMode(push3,INPUT);
  pinMode(led[0],OUTPUT);
  pinMode(led[1],OUTPUT);
  pinMode(led[2],OUTPUT);
  pinMode(led[3],OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int p1 = digitalRead(push1);
  int p2 = digitalRead(push2);
  int p3 = digitalRead(push3);
  if(p1==HIGH && count == 0)
{
  while(1){
  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  int p2 = digitalRead(push2);
  if(p2==HIGH)
    break;} 
    count+=1;
 }
else if(p2==HIGH && count == 1)
{
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],HIGH);
  delay(5000);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],HIGH);
  delay(5000);
  digitalWrite(led[3],HIGH);
  while(1){
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],HIGH);
  int p3 = digitalRead(push3);
  if(p3==1)
    break;
    count= 0;
  }
}
else 
{
  for (int i = 0; i < 4; i++) {
    digitalWrite(led[i], LOW);}
}
  
}
