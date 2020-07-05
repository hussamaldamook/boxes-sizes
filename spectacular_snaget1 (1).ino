#include <Servo.h>

Servo myservo;  

// three IR sensors will be placed on 30cm high, 20 cm and 10 cm 
void setup() {
  myservo.attach(5);
  pinMode(3,INPUT);
  pinMode(1,INPUT);
  pinMode(2,INPUT);
 
}

void loop() {
    
int a = digitalRead(3);
  if (a == HIGH){
    myservo.write(0);}  
  else{}
     
  int b = digitalRead(1);  
  if(b == HIGH){
    myservo.write(90);
        }
  else{ }
  
int c = digitalRead(2); 
   if(c == HIGH){
    myservo.write(180);
         }
  else{ }
 
 
  }



