#include <Adafruit_NeoPixel.h>

#define PIN 12	 // input pin Neopixel is attached to

#define LEDS      20 // number of neopixels in Ring


Adafruit_NeoPixel pixels = Adafruit_NeoPixel(LEDS, PIN, NEO_GRB + NEO_KHZ800);

//int delayval = 100; // timing delay
//const int boton =8;
int llegada=2;
int autentificacion=4;
int Auto=0;  
int Verificacion=0;
int tiempo=0;
//int redColor = 0;
//int greenColor = 0;
//int blueColor = 0;

void setup() {
  pixels.begin(); // Initializes the NeoPixel library.
//  Serial.begin(9600);
  //pinMode(boton, INPUT);
  pinMode(llegada, INPUT);
  pinMode(autentificacion, INPUT);
}

void loop() {
  //setColor();
  Auto=digitalRead(llegada);
  Verificacion=digitalRead(autentificacion);
  if (Auto>0){
    if (Verificacion==0 && tiempo<4){
    for(int i=0;i<LEDS;i++){
    pixels.setPixelColor(i, pixels.Color(255, 233,0)); 
    pixels.show(); 
	  }
    delay(5);
      for(int i=0;i<LEDS;i++){
    pixels.setPixelColor(i, pixels.Color(0,0,0)); 
    pixels.show(); 
	  }
    }
    else if(Verificacion>0 ){
     for(int i=0;i<LEDS;i++){
      pixels.setPixelColor(i, pixels.Color(0, 255,0)); 
      pixels.show(); 
     }}
    else if(Verificacion==0 && tiempo>3){
     for(int i=0;i<LEDS;i++){
      pixels.setPixelColor(i, pixels.Color(255, 0,0)); 
      pixels.show(); 
     }
    } 
    tiempo+=1;
  }
  else {
    for(int i=0;i<LEDS;i++){
      pixels.setPixelColor(i, pixels.Color(0, 0,0)); 
      pixels.show(); 
     }
  }
}
  
//  if (Auto>0 && Verificacion==0){
  //for(int i=0;i<LEDS;i++){
    //pixels.setPixelColor(i, pixels.Color(255, 233,0)); 
    //pixels.show(); 
	  //}
    /*delay(0);
      for(int i=0;i<LEDS;i++){
    pixels.setPixelColor(i, pixels.Color(0,0,0)); 
    pixels.show(); 
	  }
  }
  else if (Auto>0 && Verificacion>0){
   for(int i=0;i<LEDS;i++){
    pixels.setPixelColor(i, pixels.Color(0, 255,0)); 
    pixels.show(); 
  }
}
}*/

// pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    //pixels.setPixelColor(i, pixels.Color(0, 255,0)); // Moderately bright green color.
    //pixels.show(); // This sends the updated pixel color to the hardware.

    //delay(delayval); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);
  
//    if (i == LEDS){
  //  	i = 0; // start all over again!
        //setColor();
  //}

  //else if (Auto==0){
  //for(int i=0;i<LEDS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    //pixels.setPixelColor(i, pixels.Color(255, 0,0)); // Moderately bright green color.

    //pixels.show(); // This sends the updated pixel color to the hardware.

  //}}
//}

// setColor()
// picks random values to set for RGB

//void setColor(){
  //redColor = random(0, 255);
  //greenColor = random(0,255);
  //blueColor = random(0, 255);
  //Serial.print("red: ");
  //Serial.println(redColor);
  //Serial.print("green: ");
  //Serial.println(greenColor);
  //Serial.print("blue: ");
  //Serial.println(blueColor);
  
//}
//println(blueColor);
  
//}