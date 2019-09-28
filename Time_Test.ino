#include <Bounce2.h>

#define button 34
#define buttonLED 35
byte time1 = 20;
byte timelimit = 0;

boolean lastButton = false;

void setup() {

Serial.begin(9600); 
pinMode(button, INPUT_PULLUP);
pinMode(buttonLED, OUTPUT);

debouncer.attach(buttonPin);
debouncer.interval(5);
}

void loop() {

debouncer.update();

 --time1; 
 if(time1 > timelimit){
   count1();
   count2();
   count3();
 }
 else{
  reset(); 
 }
 }

void reset(){
  if(digitalRead(button) == HIGH && lastButton == LOW);
    Serial.println("Please, press the reset button");
    lastButton = HIGH;
}
else{
  lastButton = digitalRead(button);
  count1();
  count2();
  count3();
}}

void count1(){
 Serial.println("1");
}

void count2(){
 Serial.println("2");
}

void count3(){
 Serial.println("3");
 delay(1000);
}
 
