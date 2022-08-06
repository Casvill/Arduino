//casvilldaniel@gmail.com
//Encender led por input escrito
//Leds en pines digitales (correspondientes a sus variables según su color)
//Resistencias de 220 ohmios

int ledRed  = 4;
int ledYell = 3;
int ledGreen= 2;
int sleep   = 900;
int sleep2  = 200;
int sleep3  = 100;
//-----------------
int ledRed2  = 6;
int ledGreen2  = 5;
//-----------------
int i = 0;

void setup()
{
        pinMode(ledRed, OUTPUT);
        pinMode(ledYell, OUTPUT);
        pinMode(ledGreen, OUTPUT);

        pinMode(ledRed2, OUTPUT);
        pinMode(ledGreen2, OUTPUT);
  
  		Serial.begin(9600);
}

void loop()
{
  		Serial.println("Escoge un led (2-3-4-5-6):");
        while(Serial.available() == 0)
        {
        }
  		
  	    if(!isAlpha(Serial))
        {
          i = Serial.parseInt();
          if(i > 6 || i < 2)
          {
            Serial.println("Error:Numero invalido. Ingrese un numero entre 2 y 6.\n");
          }
          else
          {
            Serial.println("\n\n*------------------------------*");
            Serial.println("Encendiendo el led #"+String(i));
            delay(sleep);
            digitalWrite(i,HIGH);
            Serial.println("Led #"+String(i)+" encendido exitosamente!!");
            Serial.println("*------------------------------*\n\n\n");
            delay(sleep*5);
            digitalWrite(i,LOW);           
          }
        }
        i=0;
}
