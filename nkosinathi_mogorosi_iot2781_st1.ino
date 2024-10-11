// C++ code
//

int redlight = 2;
int bluelight = 3;
int orangelight = 4;
int greenlight = 5;
int button = 8;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(redlight, OUTPUT);
  pinMode(bluelight, OUTPUT);
  pinMode(orangelight, OUTPUT);
  pinMode(redlight, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  
  
}
int buttonclicked = 0;
int counter = 0;
void loop()
{
  buttonclicked = digitalRead(button);
  
  if (buttonclicked == LOW) {
      counter = counter + 1;
    if (counter == 1)
    {
      digitalWrite(redlight, HIGH);
      digitalWrite(bluelight, LOW);
      digitalWrite(orangelight, LOW);
      digitalWrite(greenlight, LOW);
    }
    if (counter == 2)
    {
      digitalWrite(redlight, LOW);
      digitalWrite(bluelight, HIGH);
      digitalWrite(orangelight, LOW);
      digitalWrite(greenlight, LOW);
    }
    if (counter == 3)
    {
      digitalWrite(redlight, LOW);
      digitalWrite(bluelight, LOW);
      digitalWrite(orangelight, HIGH);
      digitalWrite(greenlight, LOW);
    }
    if (counter == 4)
    {
      digitalWrite(redlight, LOW);
      digitalWrite(bluelight, LOW);
      digitalWrite(orangelight, LOW);
      digitalWrite(greenlight, HIGH);
    }
    if (counter == 5)
    {
      counter = 1;
      digitalWrite(redlight, HIGH);
      //digitalWrite(bluelight, LOW);
      //digitalWrite(orangelight, LOW);
      //digitalWrite(greenlight, LOW);
      //counter = 0;
    }
    counter + 1;
  }
     
  //digitalWrite(bluelight, HIGH);
  //delay(1000);
  //digitalWrite(redlight, HIGH);
  //delay(1000);
  //digitalWrite(greenlight, HIGH);
  //delay(1000);
  //digitalWrite(orangelight, HIGH);
  //delay(1000);
  Serial.begin(9600);
  Serial.println(counter);
  //counter =+ 1;
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}