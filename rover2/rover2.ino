#include<SoftwareSerial.h>
SoftwareSerial Genotronex(10,9);
int bluetoothData;
void setup() {
  // put your setup code here, to run once:
  Genotronex.begin(9600);
  Genotronex.println("bluetooth");
  pinMode(6,OUTPUT); //PWM1
  pinMode(45,INPUT); //CNTRL1
  pinMode(49,INPUT); //ENM1

  pinMode(7,OUTPUT); //PWM2
  pinMode(46,INPUT); //CNTRL2
  pinMode(50,INPUT); //ENM2

  pinMode(5,OUTPUT); //PWM3
  pinMode(47,INPUT); //CNTRL3
  pinMode(51,INPUT); //ENM3

  pinMode(4,OUTPUT); //PWM4
  pinMode(48,INPUT); //CNTRL4
  pinMode(52,INPUT); //ENM4

}

void loop() {
  if(Genotronex.available())
  {
      bluetoothData=Genotronex.read();
      if(bluetoothData=='1')
    
  {
  digitalWrite(49,HIGH);//front
  digitalWrite(50,HIGH);//enable moter 1
  digitalWrite(51,HIGH);
  digitalWrite(52,HIGH);//enable moter 1
  
  digitalWrite(45,HIGH);
  digitalWrite(46,LOW);
  digitalWrite(47,HIGH);
  digitalWrite(48,LOW);
  
   analogWrite(6,180);
   analogWrite(7,78);
   analogWrite(6,180);
   analogWrite(7,78);
  }

   else if(bluetoothData=='2')
  {
    digitalWrite(49,HIGH);//right
  digitalWrite(50,HIGH);//enable moter 1
  digitalWrite(51,HIGH);
  digitalWrite(52,HIGH);//enable moter 1
  
  digitalWrite(45,LOW);
  digitalWrite(46,HIGH);
  digitalWrite(47,LOW);
  digitalWrite(48,HIGH);
  
  analogWrite(6,50);
   analogWrite(7,28);
  analogWrite(6,50);
   analogWrite(7,28);
  }

  else if(bluetoothData=='3')
  {
     digitalWrite(49,HIGH);//back
  digitalWrite(50,HIGH);//enable moter 1
  digitalWrite(51,HIGH);
  digitalWrite(52,HIGH);//enable moter 1
  
  digitalWrite(45,LOW);
  digitalWrite(46,HIGH);
  digitalWrite(47,LOW);
  digitalWrite(48,HIGH);
  
  analogWrite(6,250);
   analogWrite(7,0);
   analogWrite(6,250);
   analogWrite(7,0);
  }

else if(bluetoothData=='4')
  {
       digitalWrite(49,HIGH);//right
  digitalWrite(50,HIGH);//enable moter 1
  digitalWrite(51,HIGH);
  digitalWrite(52,HIGH);//enable moter 1
  
  digitalWrite(45,LOW);
  digitalWrite(46,HIGH);
  digitalWrite(47,LOW);
  digitalWrite(48,HIGH);
  
  analogWrite(6,30);
   analogWrite(7,50);
  analogWrite(6,30);
   analogWrite(7,50);
  }

else if(bluetoothData=='5')
  {
       digitalWrite(49,HIGH);//right
  digitalWrite(50,HIGH);//enable moter 1
  digitalWrite(51,HIGH);
  digitalWrite(52,HIGH);//enable moter 1
  
  digitalWrite(45,LOW);
  digitalWrite(46,HIGH);
  digitalWrite(47,LOW);
  digitalWrite(48,HIGH);
  
  analogWrite(6,0);
   analogWrite(7,0);
  analogWrite(6,0);
   analogWrite(7,0);
  }


  
}
  }

