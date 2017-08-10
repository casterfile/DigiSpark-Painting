#include "DigiMouse.h"

void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on Model A  
  DigiMouse.begin(); //start or reenumerate USB
   DigiMouse.update(); // DigiMouse.update() at least every 50ms
 
}

void loop() {
  
  DigiMouse.setButtons(1); //left click
  DigiMouse.delay(200);
  DigiMouse.moveY(100); // 100 px down
  DigiMouse.delay(200);
  DigiMouse.moveY(-100); // 100 px up
  DigiMouse.delay(200);

  DigiMouse.moveY(50); // 100 px down
  DigiMouse.delay(200);
  DigiMouse.moveX(50); // 100 px down
  DigiMouse.delay(200);

  DigiMouse.delay(200);
  DigiMouse.moveY(58); // 100 px down
  DigiMouse.delay(200);
  DigiMouse.moveY(-100); // 100 px up
  DigiMouse.delay(200);


  DigiMouse.setButtons(0); //unclick all
  DigiMouse.delay(200);


  DigiMouse.moveX(10); // 100 px down
  DigiMouse.delay(200);
  
  DigiMouse.setButtons(1); //left click
  DigiMouse.delay(200);

  //Letter E
  DigiMouse.moveY(100);
  DigiMouse.delay(200);
  DigiMouse.moveY(30); 
  DigiMouse.delay(200);
  DigiMouse.moveY(-58);
  DigiMouse.delay(200);
  DigiMouse.moveX(50); 
  DigiMouse.delay(200);
  DigiMouse.moveX(-50); 
  DigiMouse.delay(200);
  DigiMouse.moveY(-49); 
  DigiMouse.delay(200);
  DigiMouse.moveX(50); 
  DigiMouse.delay(200);
  DigiMouse.moveX(-50); 
  DigiMouse.delay(200);
  DigiMouse.moveY(100); 
  DigiMouse.delay(200);
  DigiMouse.moveX(50); 
  DigiMouse.delay(200);

  
  DigiMouse.setButtons(0); //unclick all
  DigiMouse.delay(200);
  DigiMouse.moveX(10); // 100 px down
  DigiMouse.delay(200);
  DigiMouse.setButtons(1); //left click
  DigiMouse.delay(200);

  //Letter L
  DigiMouse.moveY(-100);
  DigiMouse.delay(200);
  DigiMouse.moveY(-30);
  DigiMouse.delay(200);
  DigiMouse.moveY(100);
  DigiMouse.delay(200);
  DigiMouse.moveX(50); 
  DigiMouse.delay(200);

  DigiMouse.setButtons(0); //unclick all
  DigiMouse.delay(200);
  DigiMouse.moveX(10); // 100 px down
  DigiMouse.delay(200);
  DigiMouse.setButtons(1); //left click
  DigiMouse.delay(200);

  //Letter L
  DigiMouse.moveY(-100);
  DigiMouse.delay(200);
  DigiMouse.moveY(-30);
  DigiMouse.delay(200);
  DigiMouse.moveY(100);
  DigiMouse.delay(200);
  DigiMouse.moveX(50); 
  DigiMouse.delay(200);

  DigiMouse.setButtons(0); //unclick all
  DigiMouse.delay(200);
  DigiMouse.moveX(10); 
  DigiMouse.delay(200);
  DigiMouse.setButtons(1); //left click
  DigiMouse.delay(200);

  //O
  DigiMouse.moveY(-100);
  DigiMouse.delay(200);
  DigiMouse.moveY(-30);
  DigiMouse.delay(200);
  DigiMouse.moveX(50); 
  DigiMouse.delay(200);
  DigiMouse.moveY(100);
  DigiMouse.delay(200);
  DigiMouse.moveX(-50); 
  DigiMouse.delay(200);

  DigiMouse.setButtons(0); //unclick all
  DigiMouse.delay(200);

  //Relocated
  DigiMouse.moveX(-100);
  DigiMouse.delay(200);
  DigiMouse.moveX(-100);
  DigiMouse.delay(200);
  DigiMouse.moveY(-100);
  DigiMouse.delay(200);
  
  
  DigiMouse.setButtons(0); //unclick all
  DigiMouse.delay(200);
}
