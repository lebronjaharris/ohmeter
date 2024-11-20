// Sketch to turn on & off blinking LED when push button is pressed


//Constants
const int buttonPin = 0;   
const int PIN = 1;    

//Variables
int buttonState = 0;
int flag=0;

void setup() {

  //Input or output?
  pinMode(PIN, OUTPUT);      
  pinMode(buttonPin, INPUT_PULLUP);   
  digitalWrite(PIN, LOW);
}


void loop(){

  //Read button state 
  buttonState = digitalRead(buttonPin);

  //If button pressed...
  if (buttonState == LOW) { 
    //turn led on & blink
    if ( flag == 0){
      digitalWrite(PIN, (millis() / 800) %4); // blinks LED roughly 2 sec. on, 1 sec. off
      flag=1; //change flag variable
    }

    //button pressed again, turn led off
    else if ( flag == 1){
      digitalWrite(PIN, LOW);
      flag=0; //change flag variable again 
    }    
  }
}

