#include "FastLED.h"

/*
* Bluetooh Basic: LED ON OFF - Avishkar
* Coder - Mayoogh Girish
* Website - http://bit.do/Avishkar
* Download the App : https://github.com/Mayoogh/Arduino-Bluetooth-Basic
* This program lets you to control a LED on pin 13 of arduino using a bluetooth module
*/

#define NUM_LEDS 50
#define DATA_PIN 3
#define CLOCK_PIN 8
CRGB leds[NUM_LEDS];
char data = 0;            //Variable for storing received data

void setup()
{   delay(2000);
    Serial.begin(9600);   //Sets the baud for serial data transmission                               
    //pinMode(13, OUTPUT);  //Sets digital pin 13 as output pin
    FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
    FastLED.show();
}
void loop()
{
   if(Serial.available() > 0)      // Send data only when you receive data:
   {
      data = Serial.read();        //Read the incoming data & store into data
      Serial.print(data);          //Print Value inside data in Serial monitor
      Serial.print("\n");        
      if(data == 'A')              // Checks whether value of data is equal to 1
         {leds[0] = CRGB::White;
         leds[1] = CRGB::White;
         leds[2] = CRGB::White;
         leds[3] = CRGB::White;
         //digitalWrite(13, HIGH);   //If value is 1 then LED turns ON
         }
      else if(data == 'a')         //  Checks whether value of data is equal to 0
        { leds[0] = CRGB::Black;
         leds[1] = CRGB::Black;
         leds[2] = CRGB::Black;
         leds[3] = CRGB::Black;
         //digitalWrite(13, LOW);    //If value is 0 then LED turns OFF
        }
        else if(data == 'B')              // Checks whether value of data is equal to 1
         {leds[5] = CRGB::White;
         leds[6] = CRGB::White;
         leds[7] = CRGB::White;
         leds[8] = CRGB::White;
         leds[9] = CRGB::White;
         //digitalWrite(13, HIGH);   //If value is 1 then LED turns ON
         }
      else if(data == 'b')         //  Checks whether value of data is equal to 0
        { leds[5] = CRGB::Black;
         leds[6] = CRGB::Black;
         leds[7] = CRGB::Black;
         leds[8] = CRGB::Black;
         leds[9] = CRGB::Black;
         //digitalWrite(13, LOW);    //If value is 0 then LED turns OFF
        }
        else if(data == 'C')              // Checks whether value of data is equal to 1
         {leds[12] = CRGB::White;
         leds[13] = CRGB::White;
         leds[15] = CRGB::White;
         leds[16] = CRGB::White;
         //digitalWrite(13, HIGH);   //If value is 1 then LED turns ON
         }
      else if(data == 'c')         //  Checks whether value of data is equal to 0
        {leds[12] = CRGB::Black;
         leds[13] = CRGB::Black;
         leds[15] = CRGB::Black;
         leds[16] = CRGB::Black;
         //digitalWrite(13, LOW);    //If value is 0 then LED turns OFF
        }
        else if(data == 'D')              // Checks whether value of data is equal to 1
         {leds[17] = CRGB::White;
         leds[18] = CRGB::White;
         leds[19] = CRGB::White;
         
         //digitalWrite(13, HIGH);   //If value is 1 then LED turns ON
         }
      else if(data == 'd')         //  Checks whether value of data is equal to 0
        {leds[17] = CRGB::Black;
         leds[18] = CRGB::Black;
         leds[19] = CRGB::Black;
         //digitalWrite(13, LOW);    //If value is 0 then LED turns OFF
        }
        else if(data == 'E')              // Checks whether value of data is equal to 1
         {leds[20] = CRGB::White;
         leds[21] = CRGB::White;
         leds[22] = CRGB::White;
         //digitalWrite(13, HIGH);   //If value is 1 then LED turns ON
         }
      else if(data == 'e')         //  Checks whether value of data is equal to 0
        {leds[20] = CRGB::Black;
         leds[21] = CRGB::Black;
         leds[22] = CRGB::Black;
         //digitalWrite(13, LOW);    //If value is 0 then LED turns OFF
        }
        else if(data == 'F')              // Checks whether value of data is equal to 1
         {leds[23] = CRGB::White;
         
         //digitalWrite(13, HIGH);   //If value is 1 then LED turns ON
         }
      else if(data == 'f')         //  Checks whether value of data is equal to 0
        { leds[23] = CRGB::Black;
         
         //digitalWrite(13, LOW);    //If value is 0 then LED turns OFF
        }
        else if(data == 'G')              // Checks whether value of data is equal to 1
         {leds[24] = CRGB::White;
         
         //digitalWrite(13, HIGH);   //If value is 1 then LED turns ON
         }
      else if(data == 'g')         //  Checks whether value of data is equal to 0
        { leds[24] = CRGB::Black;
         
         //digitalWrite(13, LOW);    //If value is 0 then LED turns OFF
        }
        else if(data == 'H')              // Checks whether value of data is equal to 1
         {leds[25] = CRGB::White;
         leds[26] = CRGB::White;
         leds[27] = CRGB::White;
         leds[28] = CRGB::White;
         //digitalWrite(13, HIGH);   //If value is 1 then LED turns ON
         }
      else if(data == 'h')         //  Checks whether value of data is equal to 0
        { leds[25] = CRGB::Black;
         leds[26] = CRGB::Black;
         leds[27] = CRGB::Black;
         leds[28] = CRGB::Black;
         //digitalWrite(13, LOW);    //If value is 0 then LED turns OFF
        }
        FastLED.show();
   }
}
