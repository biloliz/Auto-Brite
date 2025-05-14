const int ldrPin = A0;       
const int ledPin = 9;        
const int switchPin = 2;      

int ldrValue = 0;           
int ledBrightness = 0;        
bool manualMode = false;   

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int switchState = digitalRead(switchPin);

  if (switchState == LOW) {
    manualMode = !manualMode;
    delay(500); 
  }

  if (manualMode) {
    analogWrite(ledPin, 128);
  } else {
    ldrValue = analogRead(ldrPin);
    ledBrightness = map(ldrValue, 0, 1023, 255, 0);
    analogWrite(ledPin, ledBrightness);
  }

  delay(100); 
}
