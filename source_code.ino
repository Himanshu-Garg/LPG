#include<SoftwareSerial.h>
SoftwareSerial mySerial(10,11); // 10 rx 11 tx
int state = 0;


int l1=5;
int l2=6;
int l3=7;
int l4=8;
int r1=9;
int r2=10;
int r3=11;
int r4=12;
int count = 0;
int mult = 1;
void setup() {
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(r4, OUTPUT);
  Serial.begin(9600); // Default communication rate of the Bluetooth module
}
void finish(){
  while(true){
  digitalWrite(l1, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, HIGH);
  digitalWrite(l4, HIGH);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, HIGH);
  delay(500);
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(r1, LOW);
  digitalWrite(r2, LOW);
  digitalWrite(r3, LOW);
  digitalWrite(r4, LOW);
  delay(500);
  }
}
void loop() {
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
  state = Serial.read(); // Reads the data from the serial port
  }
  mult = state;  
  if(count == 0){
  digitalWrite(l1, HIGH);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, HIGH);
  digitalWrite(l4, HIGH);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, HIGH); 
  delay(3000);
  digitalWrite(l1,LOW);
  delay(500);
  digitalWrite(l2,LOW);
  delay(500);
  digitalWrite(l3,LOW);
  delay(500);
  digitalWrite(l4,LOW);
  delay(500);
  digitalWrite(r1,LOW);
  delay(500);
  digitalWrite(r2,LOW);
  delay(500);
  digitalWrite(r3,LOW);
  delay(500);
  digitalWrite(r4,LOW);
  count++;
  }
  digitalWrite(l1,HIGH);
  delay(216.6*mult);
  digitalWrite(l1,LOW);
  delay(200*mult);
  digitalWrite(l1,HIGH);
  delay(216.6*mult);
  digitalWrite(l1,LOW);
  delay(200*mult);
  digitalWrite(l1,HIGH);
  delay(216.6*mult);
  digitalWrite(l1,LOW);
  delay(200*mult);
  delay(250*mult);
  digitalWrite(r1,HIGH);
  delay(347.2*mult);
  digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  delay(200*mult);
  digitalWrite(r2,LOW);
  delay(200*mult);
  digitalWrite(r2,HIGH);
  delay(200*mult);
  digitalWrite(r2,LOW);
  digitalWrite(r1,HIGH);
  delay(347.2*mult);
  digitalWrite(r1,LOW);
  
  
  digitalWrite(l3,HIGH);
  delay(400*mult);
  digitalWrite(l3,LOW);
  delay(200*mult);
  digitalWrite(l3,HIGH);
  delay(400*mult);
  digitalWrite(l3,LOW);
  digitalWrite(l2,HIGH);
  delay(400*mult);
  digitalWrite(l2,LOW);
  delay(200*mult);
  digitalWrite(l2,HIGH);
  delay(400*mult);
  digitalWrite(l2,LOW);
  digitalWrite(l1,HIGH);
  delay(1000);
  digitalWrite(l1,LOW);


  digitalWrite(r1,HIGH);
  delay(216.6*mult);
  digitalWrite(r1,LOW);
  delay(200*mult);
  digitalWrite(l1,HIGH);
  delay(216.6*mult);
  digitalWrite(l1,LOW);
  delay(200*mult);
  digitalWrite(l1,HIGH);
  delay(216.6*mult);
  digitalWrite(l1,LOW);
  delay(200*mult);
  digitalWrite(l1,HIGH);
  delay(216.6*mult);
  digitalWrite(l1,LOW);
  delay(200*mult);
  digitalWrite(r1,HIGH);
  delay(347.2*mult);
  digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  delay(200*mult);
  digitalWrite(r2,LOW);
  delay(200*mult);
  digitalWrite(r2,HIGH);
  delay(200*mult);
  digitalWrite(r2,LOW);
  digitalWrite(r1,HIGH);
  delay(347.2*mult);
  digitalWrite(r1,LOW);
  
  
  digitalWrite(l3,HIGH);
  delay(400*mult);
  digitalWrite(l3,LOW);
  delay(200*mult);
  digitalWrite(l3,HIGH);
  delay(400*mult);
  digitalWrite(l3,LOW);
  digitalWrite(l2,HIGH);
  delay(400*mult);
  digitalWrite(l2,LOW);
  delay(200*mult);
  digitalWrite(l2,HIGH);
  delay(400*mult);
  digitalWrite(l2,LOW);
  digitalWrite(l1,HIGH);
  delay(1000);
  digitalWrite(l1,LOW);


  finish();
}
