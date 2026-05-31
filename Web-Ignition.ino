const int button = 7;
const int motor = 11;
const int first_solenoid = 8;
const int second_solenoid = 9;
const int third_solenoid = 10;

void setup() {
  Serial.begin(9600);
  pinMode(11,OUTPUT); // Motor Pin

  pinMode(8,OUTPUT); // solenoid-1
  pinMode(9,OUTPUT); // solenoid-2
  pinMode(10,OUTPUT); // solenoid-3

  pinMode(7,INPUT); // button(trigger)


}

void loop() {
  //turning on the first solenoid
  digitalWrite(first_solenoid,true);
  delay(150);
  //second solenoid 
  digitalWrite(second_solenoid,true);
  delay(150);
  //third solenoid
  digitalWrite(third_solenoid,true);

  if(button == HIGH){
    digitalWrite(motor,true);
    delay(60000); 
    digitalWrite(motor,false);
  }else{
    digitalWrite(motor,false);
  }
  


}
