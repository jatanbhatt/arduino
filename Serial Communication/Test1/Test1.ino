const int ledPin = 13;
char d;

void setup()
{
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin,LOW);
    //d = Serial.read();
    
}

void loop()
{
    //if (Serial.available() > 0) {
      d = Serial.read();
      Serial.print(d);
      
      //if (d != 0) digitalWrite(ledPin,HIGH);
      if (d == '1') digitalWrite(ledPin,HIGH);
      //Serial.print("I received: ");
      //Serial.println(d,DEC);
      //Serial.write(d);
      delay(1000);
    //}
      
}
