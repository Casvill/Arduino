//casvilldaniel@gmail.com
//Usando un PushButton para encender/apagar led

#define button A0
#define led 8

int ledState=0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(button,INPUT);
}

void loop()
{
  if(analogRead(button) == 0)
  {
    while(analogRead(button) == 0){} //Mientras el botón esté apretado, no hagas nada
    if(analogRead(button) == 1023); //Una vez que suelta el botón, continúa por aquí
    {
      (ledState == 0) ? ledState = 1 : ledState = 0;
      digitalWrite(led,ledState);
    }
  }
}
