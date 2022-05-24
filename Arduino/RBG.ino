////controlling the RBG LED
////Define pins
//
//#define BLUE 3
//#define GREEN 5
//#define RED 6
//
//void setup(){
//  pinMode(RED, OUTPUt);
//  pinMode(GREEN, OUTPUt);
//  pinMode(BLUE, OUTPUt);
//
//  digitalWrite(RED, HIGH);
//  digitalWrite(GREEN, HIGH);
//  digitalWrite(BLUE, HIGH);
//}
//
////defining variables
//int redValue;
//int greenValue;
//int blueValue;
//
////main 
//void loop(){
//  #define delayTime 10
//
//  redValue = 225; //value between 1-225
//  greenValue = 0;
//  blueValue = 0;
//
//  for(int i = 0; i < 255; i++){
//    redValue--;
//    greenValue++;
//
//    analogWrite(RED, redValue);
//    analogWrite(GREEN, greenValue);
//    delay(delayTime);
//  }
//
//  redValue = 0; //value between 1-225
//  greenValue = 225;
//  blueValue = 0;
//
//  for(int i = 0; i < 255; i++){
//    greenValue--;
//    blueValue++;
//
//    analogWrite(RED, redValue);
//    analogWrite(GREEN, greenValue);
//    delay(delayTime);
//  }
//
//  redValue = 0; //value between 1-225
//  greenValue = 0;
//  blueValue = 225;
//
//  for(int i = 0; i < 255; i++){
//    blueValue--;
//    redValue++;
//
//    analogWrite(RED, redValue);
//    analogWrite(GREEN, greenValue);
//    delay(delayTime);
//  }
//}
//
//
//
//
