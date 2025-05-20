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

  ldrValue = analogRead(ldrPin);

  if (manualMode) {
    // Invert brightness when manual mode is active
    ledBrightness = map(ldrValue, 0, 1023, 0, 255);
  } else {
    // LED brightness is directly proportional to ambient light
    ledBrightness = map(ldrValue, 0, 1023, 255, 0);
  }

  analogWrite(ledPin, ledBrightness);
  delay(100); 
}
