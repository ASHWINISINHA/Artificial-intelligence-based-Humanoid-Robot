#include<Servo.h>

Servo s1;
Servo s2;
Servo s3;
Servo s4;

Servo s5;

int mouth=12;
int command=0;
int pos = 0;  

int led = 8;          


void setup() {
Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(mouth,OUTPUT);
s1.attach(10);//hand
s2.attach(11);//hand

s5.attach(9);//neck

}

void loop() {

digitalWrite(led,HIGH);

 if(Serial.available()>0){
 command = Serial.read();
 }
 
 
 
 if(command=='w'){//walk




  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    s1.write(pos);
        s2.write(pos); 
    // tell servo to go to position in variable 'pos'
    delay(15);  
    
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    s1.write(pos); 
        s2.write(pos); // tell servo to go to position in variable 'pos'
        delay(15);            // waits 15ms for the servo to reach the position
  }
  
 }



  if(command=='s'){//stop
 
  
  s1. write(0);
  
  
  s3.detach();
  
  
  s4.detach();
  
  
  s2.write(0);
  s5.write(0);

  
  
  
  
  }





 if(command=='m'){//move forward
 
  
 s3.attach(5);//leg
s4.attach(6);//leg
 
  s3.write(0);
  s4.write(0);
  
  
  
  
  }



 if(command=='b'){//move back
 
  
  
   
 s3.attach(5);//leg
s4.attach(6);//leg
 
  s3.write(180);
  s4.write(180);
  
  
  
  
  
  
  }






   if(command=='r'){//mocve right
 
  
    
 s3.attach(5);//leg
s4.attach(6);//leg
 
  s3.write(0);
  s4.write(180);
  
  
  
  
  
  
  }








   if(command=='l'){//move left
 
  
  
  
     
 s3.attach(5);//leg
s4.attach(6);//leg
 
  s3.write(180);
  s4.write(0);
  
  
  
  
  }







   if(command=='n'){//neck
 
  
  
   for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    s5.write(pos);
        
    // tell servo to go to position in variable 'pos'
    delay(15);  
    
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    s5.write(pos); 
    // tell servo to go to position in variable 'pos'
        delay(15);            // waits 15ms for the servo to reach the position
  }
  
  
  
  
  }







   if(command=='e'){//exerciae
 
  
  
   
   for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    s5.write(pos);
          s1.write(pos);
            s2.write(pos);
    // tell servo to go to position in variable 'pos'
    delay(15);  
    
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    s5.write(pos); 
     s1.write(pos);
            s2.write(pos);
    // tell servo to go to position in variable 'pos'
        delay(15);            // waits 15ms for the servo to reach the position
  }
  
  
  
  
  
  }







   if(command=='z'){// lerft hand
 


  s1.write(45);
  
  
  
  
  
  
  }


   if(command=='y'){//right
 


  s2.write(45);
  
  
  
  
  
  
  }


 if(command=='q'){//left
 

  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    s1.write(pos);
   
    delay(15);  
    
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    s1.write(pos); 
      
        delay(15);            // waits 15ms for the servo to reach the position
  }
  
  
  
  
  
  }

 if(command=='p'){//right
 

  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    s2.write(pos);
     
    delay(15);  
    
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    s2.write(pos); 
      
  }
  
  
  
  
  }








   if(command=='t'){
 
  digitalWrite(mouth,1);
  
  
  
  
  
  
  }



   if(command=='a'){
 

  
  digitalWrite(led,LOW);
  
  
  
  }

  
   if(command=='.'){
 

  
  digitalWrite(led,HIGH);
  
  
  
  }


  

}
