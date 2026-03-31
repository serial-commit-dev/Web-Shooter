const int first_solenoid = 8;
const int second_solenoid = 9;
const int third_solenoid = 10;

void setup() {
  Serial.begin(9600);

  pinMode(8,OUTPUT); // solenoid-1
  pinMode(9,OUTPUT); // solenoid-2
  pinMode(10,OUTPUT); // solenoid-3

}

void loop() {
  //turning on the first solenoid
  digitalWrite(first_solenoid,true);
  delay(5000);
  //second solenoid 
  digitalWrite(second_solenoid,true);
  delay(5000);
  //third solenoid
  digitalWrite(third_solenoid,true);

}
