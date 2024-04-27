#include <Servo.h> // Servo kutubxonasi
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
#define btnPin 2
#define btnPin2 3
static const uint8_t PIN_MP3_TX = 10; 
static const uint8_t PIN_MP3_RX = 11; 
SoftwareSerial softwareSerial(PIN_MP3_RX, PIN_MP3_TX);
DFRobotDFPlayerMini player;
uint8_t btn_prev;
uint8_t btn_prev2;
Servo servo1; // Servo obyektini yaratish
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
void setup() {
    Serial.begin(9600);
   softwareSerial.begin(9600);
pinMode(btnPin, INPUT_PULLUP);
pinMode(btnPin2, INPUT_PULLUP);
  if (player.begin(softwareSerial)) {
    Serial.println("OK");
      } else {
    Serial.println("Connecting to DFPlayer Mini failed!");
  }
  player.volume(29);
player.playMp3Folder(1);
delay(1000);
  servo1.attach(2); // Servo motorni D2 piniga ulash
  servo2.attach(3); // Servo motorni D2 piniga ulash
  servo3.attach(4); // Servo motorni D2 piniga ulash
  servo4.attach(5); // Servo motorni D2 piniga ulash
  servo5.attach(6); // Servo motorni D2 piniga ulash
  servo6.attach(7); // Servo motorni D2 piniga ulash

servo1.write(90);
servo2.write(80);
servo3.write(50);
servo4.write(70);
servo5.write(90);
servo6.write(90);
delay(1000);

}

void loop() {
  //A
servo1.write(90);
player.volume(10);
player.playMp3Folder(1);
delay(2000);
servo1.write(70);
delay(1000);
//////////////////////////
// servo1.write(90);
// servo2.write(80);
// servo3.write(50);
// servo4.write(70);
// servo5.write(50);
// servo6.write(90);
// delay(1000);
// servo1.write(70);
// servo2.write(90);
// servo3.write(70);
// servo4.write(50);
// servo5.write(70);
// servo6.write(70);
// delay(1000);
//   //B
servo1.write(90);
servo3.write(50);
player.volume(29);
player.playMp3Folder(2);
delay(2000);
delay(1000);
servo1.write(70);
servo3.write(70);
delay(1000);
// ///////////////////////////
//  //C
servo1.write(90);
servo2.write(80);
player.volume(29);
player.playMp3Folder(3);
delay(2000);
delay(1000);
servo1.write(70);
servo2.write(90);
delay(1000);
// //////////////////////////
//  //D
servo1.write(90);
servo2.write(80);
servo4.write(70);
player.volume(29);
player.playMp3Folder(4);
delay(2000);
delay(1000);
servo1.write(70);
servo2.write(80);
servo4.write(50);
delay(1000);
// //////////////////////////
//  //E
servo1.write(90);
servo4.write(70);
player.volume(29);
player.playMp3Folder(5);
delay(2000);
delay(1000);
servo1.write(70);
servo4.write(50);
delay(1000);
// //////////////////////////
//  //F
servo1.write(90);
servo2.write(80);
servo3.write(50);
player.volume(29);
player.playMp3Folder(6);
delay(2000);
delay(1000);
servo1.write(70);
servo2.write(90);
servo3.write(70);
delay(1000);
// //////////////////////////
//  //G
servo1.write(90);
servo2.write(80);
servo3.write(50);
servo4.write(70);
player.volume(29);
player.playMp3Folder(7);
delay(2000);
delay(1000);
servo1.write(70);
servo2.write(90);
servo3.write(70);
servo4.write(50);
delay(1000);
// //////////////////////////
//  //H
servo1.write(90);
servo3.write(50);
servo4.write(70);
player.volume(29);
player.playMp3Folder(8);
delay(2000);
delay(1000);
servo1.write(70);
servo3.write(70);
servo4.write(50);
delay(1000);
// //////////////////////////
//  //I
servo2.write(80);
servo3.write(50);

player.volume(29);
player.playMp3Folder(9);
delay(2000);
delay(1000);
servo2.write(90);
servo3.write(70);

delay(1000);
// //////////////////////////
//  //J
servo2.write(80);
servo3.write(50);
servo4.write(70);

player.volume(29);
player.playMp3Folder(10);
delay(2000);

delay(1000);
servo2.write(90);
servo3.write(70);
servo4.write(50);
delay(1000);
// //////////////////////////
//  //K
servo1.write(90);
servo5.write(50);
delay(1000);

player.volume(29);
player.playMp3Folder(11);
delay(2000);

servo1.write(70);
servo5.write(70);
delay(1000);
// //////////////////////////
//  //L
servo1.write(90);
servo3.write(50);
servo5.write(50);

player.volume(29);
player.playMp3Folder(12);
delay(2000);

servo1.write(70);
servo3.write(70);
servo5.write(70);
// //////////////////////////
//  //M

servo1.write(90);
servo2.write(80);
servo5.write(50);
delay(1000);

player.volume(29);
player.playMp3Folder(13);
delay(2000);

servo1.write(70);
servo2.write(90);
servo5.write(70);
delay(1000);
// //////////////////////////
//  //N
servo1.write(90);
servo2.write(80);
servo4.write(70);
servo5.write(50);

delay(1000);
player.volume(29);
player.playMp3Folder(14);
delay(2000);
servo1.write(70);
servo2.write(90);
servo4.write(50);
servo5.write(70);
delay(1000);
// //////////////////////////
//  //O
servo1.write(90);
servo4.write(70);
servo5.write(50);
delay(1000);

player.volume(29);
player.playMp3Folder(15);
delay(2000);

servo1.write(70);
servo4.write(50);
servo5.write(70);
delay(1000);
// //////////////////////////
//  //P
servo1.write(90);
servo2.write(80);
servo3.write(50);
servo5.write(50);

delay(1000);

player.volume(29);
player.playMp3Folder(16);
delay(2000);

servo1.write(70);
servo2.write(90);
servo3.write(70);
servo5.write(70);
delay(1000);
// //////////////////////////
//  //Q
servo1.write(90);
servo2.write(80);
servo3.write(50);
servo4.write(70);
servo5.write(50);
delay(1000);

player.volume(29);
player.playMp3Folder(17);
delay(2000);


servo1.write(70);
servo2.write(90);
servo3.write(70);
servo4.write(70);
servo5.write(70);
delay(1000);
// //////////////////////////
//  //R
servo1.write(90);
servo3.write(50);
servo4.write(70);
servo5.write(50);
delay(1000);
player.volume(29);
player.playMp3Folder(18);
delay(2000);
servo1.write(70);
servo3.write(70);
servo4.write(70);
servo5.write(70);
delay(1000);
// //////////////////////////
//  //S

servo2.write(80);
servo3.write(50);
servo5.write(50);
delay(1000);
player.volume(29);
player.playMp3Folder(19);
delay(2000);
servo2.write(90);
servo3.write(70);
servo5.write(70);
delay(1000);
// //////////////////////////
//  //T

servo2.write(80);
servo3.write(50);
servo4.write(70);
servo5.write(50);
delay(1000);
player.volume(29);
player.playMp3Folder(20);
delay(2000);
servo2.write(90);
servo3.write(70);
servo4.write(70);
servo5.write(70);
delay(1000);
// //////////////////////////
//  //U
servo1.write(90);
servo5.write(50);
servo6.write(90);
delay(1000);
player.volume(29);
player.playMp3Folder(21);
delay(2000);
servo1.write(70);
servo5.write(70);
servo6.write(70);
delay(1000);
// //////////////////////////
//  //V
servo1.write(90);
servo3.write(50);
servo5.write(50);
servo6.write(90);
delay(1000);
player.volume(29);
player.playMp3Folder(22);
delay(2000);
servo1.write(70);
servo3.write(70);
servo5.write(70);
servo6.write(70);
delay(1000);
// //////////////////////////
//  //W

servo2.write(80);
servo3.write(50);
servo4.write(70);
servo6.write(90);
delay(1000);
player.volume(29);
player.playMp3Folder(23);
delay(2000);
servo2.write(90);
servo3.write(70);
servo4.write(50);
servo6.write(70);
delay(1000);


// //////////////////////////
//  //X
servo1.write(90);
servo2.write(80);
servo5.write(50);
servo6.write(90);
delay(1000);
player.volume(29);
player.playMp3Folder(24);
delay(2000);
servo1.write(70);
servo2.write(90);
servo5.write(70);
servo6.write(70);
delay(1000);
// //////////////////////////
//  //Y
servo1.write(90);
servo2.write(80);
servo4.write(70);
servo5.write(50);
servo6.write(90);
delay(1000);
player.volume(29);
player.playMp3Folder(25);
delay(2000);
servo1.write(70);
servo2.write(90);
servo4.write(50);
servo5.write(70);
servo6.write(70);
delay(1000);
// //////////////////////////
//  //Z
servo1.write(90);
servo4.write(70);
servo5.write(50);
servo6.write(90);
delay(1000);
player.volume(29);
player.playMp3Folder(26);
delay(2000);
servo1.write(70);
servo4.write(50);
servo5.write(70);
servo6.write(70);
delay(1000);

}
