//pin definitions.  must be PWM-capable pins!
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;


//maximum duty cycle to be used on each led for color balancing.  
//if "white" (R=255, G=255, B=255) doesn't look white, reduce the red, green, or blue max value.
const int max_red = 255;
const int max_green = 255;
const int max_blue = 255;

byte colors[2] = {0, 0}; //array to store led brightness values
byte lineEnding = 0x0A; //10 in decimal, ASCII newline character

void setup(){
  //set all three of our led pins to output
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop(){
  //check that at least 3 bytes are available on the Serial port

  //set the three PWM pins according to the data read from the Serial port
  //we also scale the values with map() so that the R, G, and B brightnesses are balanced.
  analogWrite(redPin,max_red);
  delay(1000);
  analogWrite(redPin,0);
  delay(10);
  analogWrite(greenPin,max_green);
  delay(1000);
  analogWrite(greenPin,0);
  delay(10);
  //analogWrite(bluePin,max_blue);
  //delay(1000);
  //analogWrite(bluePin,0);
  //delay(10);
}
