#define L_SENSOR A5
#define RED 3
#define YELLOW 4
#define GREEN 5

int val = 0;

void setup() {
  Serial.begin(9600);           //  setup serial
  
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(L_SENSOR, INPUT);
}

void loop() {
  val = analogRead(L_SENSOR);  // read the input pin
  val = map(val, 28, 929, 0, 1000); // map the value
  Serial.println(val);          // debug value
  
  // Control the leds
  if(val < 900){
    digitalWrite(RED, HIGH);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, LOW);
  }
  else if(val < 975){
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, HIGH);
    digitalWrite(GREEN, LOW);
  }
  else{
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, HIGH);
  }
}
