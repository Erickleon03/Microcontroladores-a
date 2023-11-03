#define LEDrojo 8
#define LEDamarillo 9
#define LEDverde 10

void setup(){
  pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
  
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
}
void loop(){
  bool swi1,swi2; 
    swi1=digitalRead(2);
    swi2=digitalRead(3);
  if(swi1==1&&swi2==0){
   digitalWrite(LEDrojo, HIGH);
      digitalWrite(LEDamarillo, LOW);
      digitalWrite(LEDverde, LOW);
      delay(5000);

      digitalWrite(LEDrojo, HIGH);
      digitalWrite(LEDamarillo, HIGH);
      digitalWrite(LEDverde, LOW);
      delay(1000);

      digitalWrite(LEDrojo, LOW);
      digitalWrite(LEDamarillo, LOW);
      digitalWrite(LEDverde, HIGH);
      delay(3000);

      digitalWrite(LEDrojo, LOW);
      digitalWrite(LEDamarillo, HIGH);
      digitalWrite(LEDverde, LOW);
      delay(1000);
  }
  if(swi1==0 && swi2==1){
   digitalWrite(LEDrojo, LOW);
   digitalWrite(LEDverde, LOW);
    digitalWrite(LEDamarillo, HIGH);
      delay(500);
      digitalWrite(LEDamarillo, LOW);
      delay(500);
  }
  else{
   digitalWrite(LEDrojo, LOW);
   digitalWrite(LEDverde, LOW);
   digitalWrite(LEDamarillo,LOW);
  }
}
    