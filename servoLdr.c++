#include "Servo.h"

Servo myservo;

int pos = 0;

int Left = 0;
bool d = true;
void setup()
{
    Serial.begin(9600);
    myservo.attach(9);
}

void loop()
{
    Left = analogRead(A0);
    Serial.println(Left);
    if (Left < 850)
    {
        if (pos < 179 && d)
        {
            pos++;
            myservo.write(pos);
        }
        else
        {
            d = false;
            pos -= 1;
            myservo.write(pos);
            if (pos < 1)
                d = true;
        }
    }

    delay(10);
}