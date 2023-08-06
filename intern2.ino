//#include <LiquidCrystal.h>

int start = 7;   // push button0
int Delay1 = 6;  // push button1
int Delay2 = 1;  // push button2
int cutoff = 0;  // push button3
int led[] = {8, 9, 10, 13};
int dl1 = 0;
int dl2 = 0;
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
 // lcd.begin(16, 2);  // Set up the number of columns and rows on the LCD.
  pinMode(start,INPUT);
  pinMode(Delay1,INPUT);
  pinMode(Delay2,INPUT);
  pinMode(cutoff,INPUT);
  for (int i = 0; i < 4; i++) {
    pinMode(led[i],OUTPUT);}
  Serial.begin(9600);
}

void loop()
{
  
  int p1 = digitalRead(start);
  int p2 = digitalRead(Delay1);
  if(p2==1){dl1=dl1+1;}
  
  //lcd.setCursor(0, 0);
  //lcd.print("Delay 1 : ");
  //lcd.print(dl1);
  
  int p3 = digitalRead(Delay2);
  
  if(p3==1){dl2=dl2+1;}
  
  //lcd.setCursor(0, 1);
  //lcd.print("Delay 2 : ");
  //lcd.print(dl2);
  
  if(p1==1){
  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  delay(dl1);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  delay(dl2);
  int p4 = digitalRead(cutoff);
    if(p4==0){
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],LOW);
    delay(dl1);
  
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],HIGH);
      delay(dl2);}
    else{
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],HIGH);
         delay(dl2);}
  dl1=0;//value rest
  dl2=0;//value rest
  }
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
}
