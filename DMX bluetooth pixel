//PWM LED Brightness and Bluetooth Serial Link Demo
//By keuwlsoft:  www.keuwl.com  23rd Aug 2015
#include "FastLED.h"
#define NUM_LEDS 400
#define DATA_PIN 9
#define CLOCK_PIN 5
CRGB leds[NUM_LEDS];

//int Red_LED_Pin = 9; // PWM Pin for Red LED
//int Green_LED_Pin = 10; // PWM Pin for Green LED
//int Blue_LED_Pin = 11; // PWM Pin for Blue LED

//Varibles to hold brightness values ranging from 0 (off) to 255 (fully on)
int Red_value=0;
int Green_value=0;
int Blue_value=0;
int Delay_value=0;

char BluetoothData; // the data received from bluetooth serial link

void setup() {
       delay(2000);
    FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
  //FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // Initialise LED pins as outputs
  // pinMode(Red_LED_Pin, OUTPUT);
  // pinMode(Green_LED_Pin, OUTPUT);
  // pinMode(Blue_LED_Pin, OUTPUT);

  //initialsie serial communication
  Serial.begin(9600);
}

void loop() {

  //Process any info coming from the bluetooth serial link
  if (Serial.available()){
    BluetoothData=Serial.read(); //Get next character from bluetooth
    if(BluetoothData=='R') Red_value=Serial.parseInt(); //Read Red value
    if(BluetoothData=='G') Green_value=Serial.parseInt(); //Read Green Value
    if(BluetoothData=='B') Blue_value=Serial.parseInt(); //Read Blue Value
    if(BluetoothData=='D') Delay_value=Serial.parseInt(); //Read Blue Value
    
  }
  
  //update LED Brightness
  //analogWrite(Red_LED_Pin, Red_value);
  //analogWrite(Green_LED_Pin, Green_value);
  //analogWrite(Blue_LED_Pin, Blue_value);
  leds[0].r = 0; 
    leds[0].g = 0; 
    leds[0].b = 0;
    for(int i=1;i<NUM_LEDS;i++)
  {leds[i]= leds[0];  }
  FastLED.show();
  delay(Delay_value);
    leds[0].r = Red_value; 
    leds[0].g = Green_value; 
    leds[0].b = Blue_value;
  for(int i=1;i<NUM_LEDS;i++)
  {leds[i]=leds[0];  }
  FastLED.show();

}
