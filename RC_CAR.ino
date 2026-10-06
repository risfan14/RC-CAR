#include <SoftwareSerial.h>

SoftwareSerial sinyal(10, 11); // RX, TX

int spdA = 6;
int spdB = 9;

int m1a = 2;
int m1b = 3;
int m2a = 4;
int m2b = 5;
char val;

void setup() {  
Serial.begin(9600);
sinyal.begin(9600);

pinMode(m1a, OUTPUT);  
pinMode(m1b, OUTPUT);  
pinMode(m2a, OUTPUT);  
pinMode(m2b, OUTPUT);
pinMode(spdA, OUTPUT);
pinMode(spdB, OUTPUT);

}

void loop(){
  
  if (sinyal.available() > 0) {
  val = sinyal.read();
  Serial.println(val);
  }

  if( val == 'F') // Forward
    {
      digitalWrite(m1a, LOW);
      digitalWrite(m1b, HIGH);
      digitalWrite(m2a, LOW);
      digitalWrite(m2b, HIGH);  
    }
  else if(val == 'B') // Backward
    {
      digitalWrite(m1a, HIGH);
      digitalWrite(m1b, LOW);
      digitalWrite(m2a, HIGH);
      digitalWrite(m2b, LOW); 
    }
  
    else if(val == 'L') //Left
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, HIGH);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
    }
    else if(val == 'R') //Right
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, HIGH); 
    }
    
  else if(val == 'S') //Stop
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW); 
    }
  else if(val == 'I') //Forward Right
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, HIGH);
    }
  else if(val == 'J') //Backward Right
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, HIGH);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
    }
   else if(val == 'G') //Forward Left
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, HIGH);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
    }
  else if(val == 'H') //Backward Left
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, HIGH); 
    }
  else if(val == '1'){
   analogWrite(spdA, 50);
   analogWrite(spdB, 50);
}
  else if(val == '2'){
   analogWrite(spdA, 70);
   analogWrite(spdB, 70);   
}
  else if(val == '3'){
   analogWrite(spdA, 90);
   analogWrite(spdB, 90);       
}
  else if(val == '4'){
   analogWrite(spdA, 110);
   analogWrite(spdB, 110);     
}
  else if(val == '5'){
   analogWrite(spdA, 130);
   analogWrite(spdB, 130);  
}
  else if(val == '6'){
   analogWrite(spdA, 155);
   analogWrite(spdB, 155);    
}
  else if(val == '7'){
   analogWrite(spdA, 175);
   analogWrite(spdB, 175);    
}
  else if(val == '8'){
   analogWrite(spdA, 190);
   analogWrite(spdB, 190);    
}
  else if(val == '9'){
   analogWrite(spdA, 220);
   analogWrite(spdB, 220);       
}
  else if(val == 'q'){
   analogWrite(spdA, 255);
   analogWrite(spdB, 255);       
}

//else if(val == 'V'){  //horn
//  digitalWrite();      
//}
//else if(val == 'v'){
//  digitalWrite();
//}

}
