//casvilldaniel@gmail.com
//Semaforo Leds
//Leds en pines digitales (correspondientes a sus variables según su color)
//Resistencias de 220 ohmios

int ledRed   = 7;
int ledYell  = 6;
int ledGreen  = 5;
int sleep   = 900;
int sleep2  = 200;
int sleep3  = 100;
//-----------------
int ledRed2  = 13;
int ledGreen2  = 12;

void setup()
{
        pinMode(ledRed, OUTPUT);
        pinMode(ledYell, OUTPUT);
        pinMode(ledGreen, OUTPUT);

        pinMode(ledRed2, OUTPUT);
        pinMode(ledGreen2, OUTPUT);
}

void loop()
{
        digitalWrite(ledRed, HIGH);
        digitalWrite(ledGreen2, HIGH);
        delay(sleep);
        digitalWrite(ledRed, LOW);
        delay(sleep2);
        digitalWrite(ledRed, HIGH);
        delay(sleep2);
        digitalWrite(ledRed, LOW);
        delay(sleep2);
        digitalWrite(ledRed, HIGH);
        delay(sleep2);
        digitalWrite(ledRed, LOW);
        delay(sleep2);
        digitalWrite(ledRed, HIGH);
        delay(sleep2);
        digitalWrite(ledRed, LOW);
        delay(sleep3);
        digitalWrite(ledRed, HIGH);
        delay(sleep3);
        digitalWrite(ledRed, LOW);
        delay(sleep3);
        digitalWrite(ledRed, HIGH);
        delay(sleep3);
        digitalWrite(ledRed, LOW);
        delay(sleep3);
        digitalWrite(ledRed, HIGH);
        delay(sleep3);
        digitalWrite(ledRed, LOW);
        digitalWrite(ledRed2, HIGH);
        digitalWrite(ledGreen2, LOW);
        //--------------------------
        digitalWrite(ledGreen, HIGH);
        delay(sleep*2);
        digitalWrite(ledGreen, LOW);
        //--------------------------
        digitalWrite(ledYell, HIGH);
        delay(sleep);
        digitalWrite(ledYell, LOW);
        digitalWrite(ledRed2, LOW);
        //delay(sleep);
}
