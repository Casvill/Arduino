//casvilldaniel@gmail.com
//IF-ELSE usando potenciometro y leds / Variante
//potenciometro: 
//izq=GRD
//Center=AnalogPin
//Der=5V
//2 leds
int blueLed= 6;
int whiteLed= 3;

float lecture= 0;
float brightness= 0;
float pin= 0;
int sleep= 200;

void setup()
{
  pinMode(blueLed,OUTPUT);
  pinMode(whiteLed,OUTPUT);
  pinMode(pin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  lecture= (5. * analogRead(pin))/1023.;
  brightness= analogRead(pin)/4;
  
  Serial.println("Lecture: "+String(lecture)+"V");
  Serial.println("Brightness: "+String(brightness));
  Serial.println("*-------------------------*");
  
  if(lecture < 2.5)
  {
    digitalWrite(blueLed,LOW);
    analogWrite(whiteLed, brightness);
  }
  
  else
  {
    digitalWrite(whiteLed,LOW);
    analogWrite(blueLed,brightness);
  }
  delay(sleep);
}
