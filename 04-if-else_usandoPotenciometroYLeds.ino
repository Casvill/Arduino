//casvilldaniel@gmail.com
//IF-ELSE usando potenciometro y leds
//potenciometro: 
//izq=GRD
//Center=AnalogPin
//Der=5V
//2 leds
int blueLed= 3;
int whiteLed= 2;

float lecture= 0;
float pin= 0;
int sleep= 100;

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
  Serial.println("Lecture:"+String(lecture)+"V");
  
  if(lecture < 2.5)
  {
    digitalWrite(whiteLed,HIGH);
    digitalWrite(blueLed,LOW);
  }
  
  else
  {
    digitalWrite(whiteLed,LOW);
    digitalWrite(blueLed,HIGH);
  }
  delay(sleep);
}
