char data = 0;

void setup() {
Serial.begin(9600); 
}

void loop() {
 if(Serial.available() > 0)      // Send data only when you receive data:
   {
    data = Serial.read();       //read data from bluetooth
    Serial.print(data); 
    Serial.print("\n");
   }
}
