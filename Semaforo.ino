// C++ code
//
#define RED 3
#define YELLOW 4
#define GREEN 5
#define P_RED 8
#define P_GREEN 9
#define BTN 2

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(P_RED, OUTPUT);
  pinMode(P_GREEN, OUTPUT);
  pinMode(BTN, INPUT);

  //Initial State
  digitalWrite(GREEN, HIGH);
  digitalWrite(P_RED, HIGH);
}

void loop()
{
  if(digitalRead(BTN)){

    //Already in Green
    delay(2000); //Wait 2 seconds


    //To Yellow
    digitalWrite(GREEN, LOW);
    digitalWrite(YELLOW, HIGH);
    delay(2000); //Wait 2 seconds


    //To Red
    digitalWrite(YELLOW, LOW);
    digitalWrite(P_RED, LOW);
    digitalWrite(RED, HIGH);
    digitalWrite(P_GREEN, HIGH);
    delay(5000); //Wait 5 seconds


    //To Green
    digitalWrite(GREEN, HIGH);
    digitalWrite(P_RED, HIGH);
    digitalWrite(RED, LOW);
    digitalWrite(P_GREEN, LOW);
  }
}
