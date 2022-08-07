//casvilldaniel@gmail.com
//Codigo Lector de Voltaje
//Circuito usando pin 5V, GRD, resistencia/s y bombillo led

int analogPin= A0;
float analogVal= 0;
float voltaje= 0;
int sleep= 600;
int count=0;

void setup()
{
	pinMode(analogPin,INPUT);
	Serial.begin(9600);
}

void loop()
{
  analogVal= analogRead(analogPin);
  voltaje= (5. * analogVal)/1023.;
  
  Serial.println("Loop: "+String(count)+"\n");
  Serial.println("analogVal: "+String(analogVal)+"\n");
  Serial.println("Voltaje: "+String(voltaje)+"V\n");
  Serial.println("*---------------------------------*\n");
  delay(sleep);
  
  count++;
}
