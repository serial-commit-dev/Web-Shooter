const int button = 7;
const int motor = 8;
const int transistorGate = 9;


void setup() {
  Serial.begin(9600);

  pinMode(7,INPUT); // button(trigger)
  pinMode(8,OUTPUT); // Motor Pin
  pinMode(9,OUTPUT); //Gate pin 

  digitalWrite(transistorGate,LOW);
  digitalWrite(motor,LOW);
}

void loop() {
  
  if(digitalRead(button) == HIGH){
    
    digitalWrite(transistorGate,HIGH);
    delay(20000); //duration set for projectile to experience EMF
    digitalWrite(motor,HIGH); //enables the projectile to move forward
    delay(10000);
    digitalWrite(transistorGate,LOW); 
    delay(1000); 
    digitalWrite(motor,LOW); 
    
  }else{
    digitalWrite(transistorGate,LOW);
    digitalWrite(motor,LOW);
  }
  
}
