const int button = 7;
const int motor = 11;
 
///Three transistors for each solenoids/////
const int transistorGate_1 = 12;  // Transistor_1 is wired with first solenoid
const int transistorGate_2 = 14;  // Transistor_2 is wired with second solenoid
const int transistorGate_3 = 18;  // Transistor_3 is wired with thrid solenoid


unsigned long start_time = 0;
const long motor_duration = 60400;

void setup() {
  Serial.begin(9600);
                                ////////////////////Initializing Components/////////////////////////

  pinMode(motor,OUTPUT);    // Motor Pin

  pinMode(transistorGate_1,OUTPUT);  
  pinMode(transistorGate_2,OUTPUT);
  pinMode(transistorGate_3, OUTPUT);

  pinMode(button,INPUT_PULLUP);  // button(trigger)

                                 ///////////////////Assigning all components to LOW, for safety/////////////////////////
   
  digitalWrite(transistorGate_1, LOW);   
  digitalWrite(transistorGate_2, LOW);
  digitalWrite(transistorGate_3, LOW);
  
  digitalWrite(motor, LOW);

  start_time = millis();     //initiating time


}


void loop() {  
  
    if (start_time > 0) {
      unsigned long elapsed = millis() - start_time;    //continously stores elapsed time    

      

      ///Sequential Initialization of Solenoids///

      if(elapsed >= 100) {
        digitalWrite(transistorGate_1, HIGH);
      }else {
        digitalWrite(transistorGate_1, LOW);
      }

      if(elapsed >= 200) {
        digitalWrite(transistorGate_2, HIGH);
      } else {
        digitalWrite(transistorGate_2, LOW);
      }

      if(elapsed >= 300) {
        digitalWrite(transistorGate_3, HIGH);
      }else{
        digitalWrite(transistorGate_3, LOW);
      } 

      if(elapsed >= 5000){
        TurnOffTransistors();  //Transistors turns off, after 5 seconds of INACTIVITY
      }


       int buttonState = digitalRead(button);

       if(buttonState == LOW && elapsed >= 400 && elapsed < motor_duration) {
        digitalWrite(motor, HIGH);
       }else {
        digitalWrite(motor, LOW);
       }

       if(elapsed >= motor_duration){
        digitalWrite(motor, LOW);
        
       }if((buttonState == HIGH) && (elapsed >= 60450)){
        Kill_All();
        start_time = 0;
       }
      
            
    } 

} 
  
void TurnOffTransistors() {                       ////////////Turns off solenoids/transistors//////////////////
  digitalWrite(transistorGate_1, LOW);
  digitalWrite(transistorGate_2, LOW);
  digitalWrite(transistorGate_3, LOW);
}


void Kill_All() {                              /////////////Kills everything//////////////////
  digitalWrite(transistorGate_1, LOW);
  digitalWrite(transistorGate_2, LOW);
  digitalWrite(transistorGate_3, LOW);

  digitalWrite(motor, LOW);

}
