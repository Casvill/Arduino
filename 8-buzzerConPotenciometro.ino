//casvilldaniel@gmail.com
//Buzzer con potenciometro

#define buzzer 10
#define potentiometer A5

int potencia = 0;
float voltaje = 0;

void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(potentiometer, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  potencia = analogRead(potentiometer);
  voltaje = (5. * potencia)/1023.;
  Serial.println("Voltaje: "+String(voltaje));
 
  
  if(potencia > 512)
  {
    digitalWrite(buzzer,HIGH);
  }
  else
  {
    digitalWrite(buzzer,LOW);
  }
}
