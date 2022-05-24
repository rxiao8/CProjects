int buzzPin =  3;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin, OUTPUT);
}


void loop() {
  //active

//  //beep
//  digitalWrite(buzzPin, HIGH);
//  delay(500);
//  digitalWrite(buzzPin, LOW);
//  delay(500);

//  //tick
//  digitalWrite(buzzPin, HIGH);
//  delay(1);
//  digitalWrite(buzzPin, LOW);
//  delay(999);

//  //passive
//
//  //buzz
//  digitalWrite(buzzPin, HIGH);
//  delay(5);
//  digitalWrite(buzzPin, LOW);
//  delay(5);
//  
//  //high pitch
//  digitalWrite(buzzPin, HIGH);
//  delay(1);
//  digitalWrite(buzzPin, LOW);
//  delay(1);
//
//  //dumpTruck beeper
//  for(int i = 0; i < 250; i++){
//  digitalWrite(buzzPin, HIGH);
//  delay(1);
//  digitalWrite(buzzPin, LOW);
//  delay(1);
//  }
//  
//  delay(500);
//
//  //double loops,, emergency vehicle
  for(int i = 0; i < 250; i++){
  digitalWrite(buzzPin, HIGH);
  delay(1);
  digitalWrite(buzzPin, LOW);
  delay(1);
  }
  
   for(int i = 0; i < 250; i++){
  digitalWrite(buzzPin, HIGH);
  delay(2);
  digitalWrite(buzzPin, LOW);
  delay(2);
  }
  
}
