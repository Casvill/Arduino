//casvilldaniel@gmail.com
//Lector de potencia usando potenciometro
//potenciometro: 
//izq=GRD
//Center=AnalogPin
//Der=5V

float lecture= 0;
float pin= 0;
int sleep= 100;

void setup()
{
  pinMode(pin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  lecture= (5. * analogRead(pin))/1023.;
  Serial.println("Lecture:"+String(lecture)+"V");
  delay(sleep);
}
