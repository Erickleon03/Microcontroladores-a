#define LEDrojo 7
#define LEDamarillo 6
#define LEDverde 5
#define POTENCIOMETRO A0
int conteo = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(POTENCIOMETRO, INPUT);
  pinMode(LEDrojo, OUTPUT);
  pinMode(LEDamarillo, OUTPUT);
  pinMode(LEDverde, OUTPUT);
}

void loop() 
{
  bool swi1, swi2;
  swi1 = digitalRead(9);
  swi2 = digitalRead(8);
  int sensor = analogRead(A0);
  int velocidad = map (sensor,0,1023,300,50);
  Serial.print("se cumplio un ciclo numero ");
  conteo++;
  Serial.print(conteo);
  Serial.println(".");
  delay(1);
  
  if (swi1 == 1 && swi2 == 0) 
  {
     digitalWrite(LEDrojo, HIGH);
      digitalWrite(LEDamarillo, LOW);
      digitalWrite(LEDverde, LOW);
      delay(velocidad*10);

      digitalWrite(LEDrojo, HIGH);
      digitalWrite(LEDamarillo, HIGH);
      digitalWrite(LEDverde, LOW);
      delay(velocidad*10);

      digitalWrite(LEDrojo, LOW);
      digitalWrite(LEDamarillo, LOW);
      digitalWrite(LEDverde, HIGH);
      delay(velocidad*10);

      digitalWrite(LEDrojo, LOW);
      digitalWrite(LEDverde, LOW);
      digitalWrite(LEDamarillo, HIGH);
      delay(velocidad*10);
  }
  if(swi1==0 && swi2==1)
  {
   digitalWrite(LEDrojo, LOW);
   digitalWrite(LEDverde, LOW);
    digitalWrite(LEDamarillo, HIGH);
      delay(500);
      digitalWrite(LEDamarillo, LOW);
      delay(500);
  }
  else
  {
   digitalWrite(LEDrojo, LOW);
   digitalWrite(LEDverde, LOW);
   digitalWrite(LEDamarillo,LOW);
  }
}
    