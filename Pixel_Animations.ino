#include <Adafruit_NeoPixel.h>
#define PIN 23
#define NUMPIXELS      26



//This code has been writen to apply some custom animation and synthwave like coloring
//for one of my projects.  includes a pattern wipingcolor, wipecolor and bounce, wipe 
//colour automated for running thru the full pallet and a fading effect. i tried to make a fading
//effect between 2 colors but didnd reach and needed to keep up with the project. so, here it is.
//Written By dsgnloopz, find me on IG as @desgeneradoTV and @dsgnloopz.  enjoy!




// Parameter 1 = number of pixels in pixels
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

uint32_t neoColorArrayTwo[48] = {

//paleta #1
pixels.ColorHSV(24000, 130, 255),
pixels.ColorHSV(59000, 130, 255),
pixels.ColorHSV(75000, 150, 255),
pixels.ColorHSV(44000, 130, 255),
pixels.ColorHSV(71000, 150, 255),
pixels.ColorHSV(33000, 120, 255),
pixels.ColorHSV(75000, 150, 255),
pixels.ColorHSV(44000, 130, 255),

//paleta #2 variacion de la #1

pixels.ColorHSV(36571, 130, 255),
pixels.ColorHSV(33000, 130, 255),
pixels.ColorHSV(75000, 150, 255),
pixels.ColorHSV(54857, 130, 255),
pixels.ColorHSV(71000, 150, 255),
pixels.ColorHSV(27428, 130, 255),
pixels.ColorHSV(75000, 150, 255),
pixels.ColorHSV(44000, 130, 255),

//Paleta #3 variacion de la #2

pixels.ColorHSV(36571, 130, 255),
pixels.ColorHSV(54857, 130, 255),
pixels.ColorHSV(75000, 150, 255),
pixels.ColorHSV(54857, 130, 255),
pixels.ColorHSV(71000, 150, 255),
pixels.ColorHSV(27428, 130, 255),
pixels.ColorHSV(75000, 150, 255),
pixels.ColorHSV(44000, 130, 255),

//Paleta #4 

pixels.ColorHSV(6000, 130, 255),
pixels.ColorHSV(12000, 130, 255),
pixels.ColorHSV(18000, 130, 255),
pixels.ColorHSV(24000, 130, 255),
pixels.ColorHSV(30000, 130, 255),
pixels.ColorHSV(36000, 130, 255),
pixels.ColorHSV(42000, 130, 255),
pixels.ColorHSV(54000, 130, 255),

//Paleta #5


pixels.ColorHSV(9142, 150, 255),
pixels.ColorHSV(18285, 130, 255),
pixels.ColorHSV(27428, 130, 255),
pixels.ColorHSV(36571, 130, 255),
pixels.ColorHSV(45714, 130, 255),
pixels.ColorHSV(54857, 130, 255),
pixels.ColorHSV(64000, 130, 255),
pixels.ColorHSV(73142, 130, 255),

//Paleta #6

pixels.ColorHSV(0, 150, 200),
pixels.ColorHSV(8000, 130, 200),
pixels.ColorHSV(16000, 130, 200),
pixels.ColorHSV(24000, 130, 200),
pixels.ColorHSV(32000, 130, 200),
pixels.ColorHSV(48000, 130, 200),
pixels.ColorHSV(56000, 130, 200),
pixels.ColorHSV(64000, 130, 100),
  
};



//paleta #1
uint32_t color1 = pixels.ColorHSV(24000, 130, 255);//verde 
uint32_t color2 = pixels.ColorHSV(59000, 130, 255);//rosa     
uint32_t color3 = pixels.ColorHSV(75000, 150, 255);//amarillo
uint32_t color4 = pixels.ColorHSV(44000, 130, 255);//violeta  
uint32_t color5 = pixels.ColorHSV(71000, 130, 255);//naranja
uint32_t color6 = pixels.ColorHSV(33000, 120, 255);//azul  
uint32_t color7 = pixels.ColorHSV(75000, 150, 255);//amarillo
uint32_t color8 = pixels.ColorHSV(44000, 130, 255);//violeta  


//paleta #2 variacion de la #1

uint32_t color10 = pixels.ColorHSV(27428, 130, 255);
uint32_t color20 = pixels.ColorHSV(54857, 130, 255);
uint32_t color30 = pixels.ColorHSV(75000, 150, 255);
uint32_t color40 = pixels.ColorHSV(45714, 130, 255);
uint32_t color50 = pixels.ColorHSV(73142, 130, 255);
uint32_t color60 = pixels.ColorHSV(36571, 130, 255);
uint32_t color70 = pixels.ColorHSV(71000, 150, 255);
uint32_t color80 = pixels.ColorHSV(44000, 130, 255);


//Paleta #3 variacion de la #2

uint32_t color11 = pixels.ColorHSV(36571, 130, 255);
uint32_t color21 = pixels.ColorHSV(54857, 130, 255);
uint32_t color31 = pixels.ColorHSV(75000, 150, 255);
uint32_t color41 = pixels.ColorHSV(54857, 130, 255);
uint32_t color51 = pixels.ColorHSV(71000, 150, 255);
uint32_t color61 = pixels.ColorHSV(27428, 130, 255);
uint32_t color71 = pixels.ColorHSV(75000, 150, 255);
uint32_t color81 = pixels.ColorHSV(44000, 130, 255);

//Paleta #4 

uint32_t color12 = pixels.ColorHSV(6000, 130, 255);
uint32_t color22 = pixels.ColorHSV(12000, 130, 255);
uint32_t color32 = pixels.ColorHSV(18000, 130, 255);
uint32_t color42 = pixels.ColorHSV(24000, 130, 255);
uint32_t color52 = pixels.ColorHSV(30000, 130, 255);
uint32_t color62 = pixels.ColorHSV(36000, 130, 255);
uint32_t color72 = pixels.ColorHSV(42000, 130, 255);
uint32_t color82 = pixels.ColorHSV(54000, 130, 255);


//Paleta #5


uint32_t color13 = pixels.ColorHSV(9142, 150, 255);
uint32_t color23 = pixels.ColorHSV(18285, 130, 255);
uint32_t color33 = pixels.ColorHSV(27428, 130, 255);
uint32_t color43 = pixels.ColorHSV(36571, 130, 255);
uint32_t color53 = pixels.ColorHSV(45714, 130, 255);
uint32_t color63 = pixels.ColorHSV(54857, 130, 255);
uint32_t color73 = pixels.ColorHSV(64000, 130, 255);
uint32_t color83 = pixels.ColorHSV(73142, 130, 255);

//Paleta #6

uint32_t color14 = pixels.ColorHSV(0, 150, 200);
uint32_t color24 = pixels.ColorHSV(8000, 130, 200);
uint32_t color34 = pixels.ColorHSV(16000, 130, 200);
uint32_t color44 = pixels.ColorHSV(24000, 130, 200);
uint32_t color54 = pixels.ColorHSV(32000, 130, 200);
uint32_t color64 = pixels.ColorHSV(48000, 130, 200);
uint32_t color74 = pixels.ColorHSV(56000, 130, 200);
uint32_t color84 = pixels.ColorHSV(64000, 130, 100);


// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup() {


  pixels.begin();
  pixels.setBrightness(250);
  pixels.show(); // Initialize all pixels to 'off'
}

void loop() {
  // Some example procedures showing how to display to the pixels:

colorWipeThree(pixels.gamma32(color1), 5);
colorWipeThree(pixels.gamma32(color2), 5); 
colorWipeThree(pixels.gamma32(color4), 5);
colorWipeThree(pixels.gamma32(color50), 5); 
colorWipeThree(pixels.gamma32(color6), 5);

colorWipe(20);
colorWipeTwo(20);
colorWipeFour(10);
firstlist(200);
firstlistTwo(4);
 
 
}


// 4 different zones each one wit ist color wipes leaving 
// colored and bounces back
void colorWipe(int wait) {

  for(int i=0; i<2; i++) {// For each pixel in pixels...
    if(i==0)
    pixels.setPixelColor(i, pixels.gamma32(color10));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait);
    //  Pause for a moment
    
    if(i==1)
    pixels.setPixelColor(i, pixels.gamma32(color20));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait);
    //  Pause for a moment
    
  }
  for(int i=2; i<10; i++) { // For each pixel in pixels...
    pixels.setPixelColor(i, pixels.gamma32(color60));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait); 
    //  Pause for a moment
  }
  for(int i=10; i<pixels.numPixels(); i++) { // For each pixel in pixels...
    pixels.setPixelColor(i, pixels.gamma32(color40));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait); 
    //  Pause for a moment
  }
  for(int i=pixels.numPixels(); i>9; i--) { // For each pixel in pixels...
    pixels.setPixelColor(i, pixels.gamma32(color60));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait); 
    //  Pause for a moment
  }
  for(int i=9; i>=2; i--) { // For each pixel in pixels...
    pixels.setPixelColor(i, pixels.gamma32(color50));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait); 
    //  Pause for a moment
  }
  
  for(int i=0; i<2; i++) { // For each pixel in pixels...
    if(i==0)
      pixels.setPixelColor(i, pixels.gamma32(color20));         //  Set pixel's color (in RAM)
      pixels.show();                          //  Update pixels to match
      delay(wait);
      //  Pause for a moment
    
    if(i==1)
      pixels.setPixelColor(i, pixels.gamma32(color40));         //  Set pixel's color (in RAM)
      pixels.show();                          //  Update pixels to match
      delay(wait);
      //  Pause for a moment
  }
  for(int i=2; i<10; i++) { // For each pixel in pixels...
    pixels.setPixelColor(i, pixels.gamma32(color10));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait); 
    //  Pause for a moment
  }
  for(int i=10; i<pixels.numPixels(); i++) { // For each pixel in pixels...
    pixels.setPixelColor(i, pixels.gamma32(color80));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait); 
    //  Pause for a moment
  }
  for(int i=pixels.numPixels(); i>9; i--) { // For each pixel in pixels...
    pixels.setPixelColor(i, pixels.gamma32(color50));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait); 
    //  Pause for a moment
  }
  for(int i=9; i>1; i--) { // For each pixel in pixels...
    pixels.setPixelColor(i, pixels.gamma32(color20));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait); 
    //  Pause for a moment
  }
  
  
}



// 4 different zones each one wit ist color wipes leaving 
// colored and bounces back
void colorWipeTwo(int wait) {

  for(int i=0; i<2; i++) {// For each pixel in pixels...
    if(i==0)
    pixels.setPixelColor(i, pixels.gamma32(color50));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait);
    //  Pause for a moment
    
    if(i==1)
    pixels.setPixelColor(i, pixels.gamma32(color6));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait);
    //  Pause for a moment
    
  }
  for(int i=2; i<10; i++) { // For each pixel in pixels...
    pixels.setPixelColor(i, pixels.gamma32(color1));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait); 
    //  Pause for a moment
  }
  for(int i=10; i<pixels.numPixels(); i++) { // For each pixel in pixels...
    pixels.setPixelColor(i, pixels.gamma32(color4));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait); 
    //  Pause for a moment
  }
  for(int i=pixels.numPixels(); i>9; i--) { // For each pixel in pixels...
    pixels.setPixelColor(i, pixels.gamma32(color2));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait); 
    //  Pause for a moment
  }
  for(int i=9; i>=2; i--) { // For each pixel in pixels...
    pixels.setPixelColor(i, pixels.gamma32(color6));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait); 
    //  Pause for a moment
  }

  for(int i=0; i<2; i++) { // For each pixel in pixels...
    if(i==0)
      pixels.setPixelColor(i, pixels.gamma32(color1));         //  Set pixel's color (in RAM)
      pixels.show();                          //  Update pixels to match
      delay(wait);
      //  Pause for a moment
    
    if(i==1)
      pixels.setPixelColor(i, pixels.gamma32(color4));         //  Set pixel's color (in RAM)
      pixels.show();                          //  Update pixels to match
      delay(wait);
      //  Pause for a moment
  }
  for(int i=2; i<10; i++) { // For each pixel in pixels...
    pixels.setPixelColor(i, pixels.gamma32(color1));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait); 
    //  Pause for a moment
  }
  for(int i=10; i<pixels.numPixels(); i++) { // For each pixel in pixels...
    pixels.setPixelColor(i, pixels.gamma32(color8));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait); 
    //  Pause for a moment
  }
  for(int i=pixels.numPixels(); i>9; i--) { // For each pixel in pixels...
    pixels.setPixelColor(i, pixels.gamma32(color2));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait); 
    //  Pause for a moment
  }
  for(int i=9; i>1; i--) { // For each pixel in pixels...
    pixels.setPixelColor(i, pixels.gamma32(color6));         //  Set pixel's color (in RAM)
    pixels.show();                          //  Update pixels to match
    delay(wait); 
    //  Pause for a moment
  }

}

// Fill the dots one after the other with a color
void colorWipeThree(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<2; i++) {
    pixels.setPixelColor(i, c);
    pixels.show();
    delay(wait);
  }
  for(uint16_t i=2; i<pixels.numPixels(); i++) {
    pixels.setPixelColor(i, c);
    pixels.show();
    delay(wait);
  }
}

//same as ColorWipe but cicles thru all of the colors(48)
void colorWipeFour(int wait) {

  for(int q=0; q<5; q++){
  
    if(q==0) {
    
      for(int j=0; j<2; j++) {
  
        if(j=0){

          for(int i=0; i<2; i++) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
          for(int i=2; i<10; i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+2]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //Pause for a moment
          }
          for(int i=10; i<pixels.numPixels(); i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+4]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=pixels.numPixels(); i>9; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+1]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=9; i>=2; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+3]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=1; i>=0; i--) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+5]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
        }
      
        if(j=1){

          for(int i=0; i<2; i++) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+2]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
          for(int i=2; i<10; i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+6]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=10; i<pixels.numPixels(); i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=pixels.numPixels(); i>9; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+3]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=9; i>=2; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+5]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=1; i>=0; i--) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+7]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
   
        }
     
      }
    
    }
  
    if(q==1) {
        
      for(int j=0; j<1; j++) {

        if(j=0){

          for(int i=0; i<2; i++) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+8]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
          for(int i=2; i<10; i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+2+8]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //Pause for a moment
          }
          for(int i=10; i<pixels.numPixels(); i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+4+8]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=pixels.numPixels(); i>9; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+1+8]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=9; i>=2; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+3+8]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=1; i>=0; i--) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+5+8]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
          
        }
      
        if(j=1){

          for(int i=0; i<2; i++) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+2+8]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
          for(int i=2; i<10; i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+6+8]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=10; i<pixels.numPixels(); i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+8]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=pixels.numPixels(); i>9; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+3+8]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=9; i>=2; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+5+8]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=1; i>=0; i--) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+7+8]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
        
        }
      
      }
      
    }
  
    if(q==2) {
        
      for(int j=0; j<1; j++) {
  
        if(j=0){
            
          for(int i=0; i<2; i++) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+16]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
          for(int i=2; i<10; i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+2+16]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //Pause for a moment
          }
          for(int i=10; i<pixels.numPixels(); i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+4+16]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=pixels.numPixels(); i>9; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+1+16]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=9; i>=2; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+3+16]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=1; i>=0; i--) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+5+16]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
        
        }
      
        if(j=1){
        
          for(int i=0; i<2; i++) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+2+16]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
          for(int i=2; i<10; i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+6+16]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=10; i<pixels.numPixels(); i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+16]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=pixels.numPixels(); i>9; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+3+16]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=9; i>=2; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+5+16]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=1; i>=0; i--) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+7+16]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
        
        }
      
      }
      
    }
  
    if(q==3) {

      for(int j=0; j<1; j++) {

        if(j=0){

          for(int i=0; i<2; i++) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+24]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
          for(int i=2; i<10; i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+2+24]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //Pause for a moment
          }
          for(int i=10; i<pixels.numPixels(); i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+4+24]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=pixels.numPixels(); i>9; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+1+24]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=9; i>=2; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+3+24]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=1; i>=0; i--) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+5+24]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
        }
      
        if(j=1){

          for(int i=0; i<2; i++) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+2+24]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
          for(int i=2; i<10; i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+6+24]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=10; i<pixels.numPixels(); i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+24]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=pixels.numPixels(); i>9; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+3+24]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=9; i>=2; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+5+24]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=1; i>=0; i--) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+7+24]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
        }
      }
    }
  
    if(q==4) {

      for(int j=0; j<1; j++) {

        if(j=0){

          for(int i=0; i<2; i++) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+32]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
          for(int i=2; i<10; i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+2+32]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //Pause for a moment
          }
          for(int i=10; i<pixels.numPixels(); i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+4+32]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=pixels.numPixels(); i>9; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+1+32]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=9; i>=2; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+3+32]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=1; i>=0; i--) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+5+32]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
        
        }
      
        if(j=1){

          for(int i=0; i<2; i++) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+2+32]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
          for(int i=2; i<10; i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+6+32]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=10; i<pixels.numPixels(); i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+32]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=pixels.numPixels(); i>9; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+3+32]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=9; i>=2; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+5+32]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=1; i>=0; i--) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+7+32]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
        
        }
      
      }
   
    }

    if(q==5) {
      
      for(int j=0; j<1; j++) {

        if(j=0){

          for(int i=0; i<2; i++) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+40]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
          for(int i=2; i<10; i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+2+40]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //Pause for a moment
          }
          for(int i=10; i<pixels.numPixels(); i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+4+40]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=pixels.numPixels(); i>9; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+1+40]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=9; i>=2; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+3+40]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=1; i>=0; i--) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+5+40]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }

        }

        if(j=1){

          for(int i=0; i<2; i++) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+2+40]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
          for(int i=2; i<10; i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+6+40]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=10; i<pixels.numPixels(); i++) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+40]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=pixels.numPixels(); i>9; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+3+40]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=9; i>=2; i--) { // For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+5+40]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait); 
          //  Pause for a moment
          }
          for(int i=1; i>=0; i--) {// For each pixel in pixels...
          pixels.setPixelColor(i, pixels.gamma32(neoColorArrayTwo[j+7+40]));         //  Set pixel's color (in RAM)
          pixels.show();                          //  Update pixels to match
          delay(wait);
          //  Pause for a moment
          }
        
        }
      
      }
   
    }
  }
   
}












//shows 3 different colors at the time and cicles thru
void firstlist(int wait){
  pixels.fill(pixels.gamma32(color5), 0, 2);
  pixels.fill(pixels.gamma32(color7), 2, 8);
  pixels.fill(pixels.gamma32(color1), 10, 16);
  pixels.show();
  delay(wait);
  pixels.fill(pixels.gamma32(color6), 0, 2);
  pixels.fill(pixels.gamma32(color8), 2, 8);
  pixels.fill(pixels.gamma32(color2), 10, 16);
  pixels.show();
  delay(wait);
  pixels.fill(pixels.gamma32(color7), 0, 2);
  pixels.fill(pixels.gamma32(color1), 2, 8);
  pixels.fill(pixels.gamma32(color4), 10, 16);
  pixels.show();
 delay(wait);
 pixels.fill(pixels.gamma32(color8), 0, 2);
  pixels.fill(pixels.gamma32(color2), 2, 8);
  pixels.fill(pixels.gamma32(color4), 10, 16);
  pixels.show();
 delay(wait);
 pixels.fill(pixels.gamma32(color1), 0, 2);
  pixels.fill(pixels.gamma32(color4), 2, 8);
  pixels.fill(pixels.gamma32(color8), 10, 16);
  pixels.show();
 delay(wait);
 pixels.fill(pixels.gamma32(color2), 0, 2);
  pixels.fill(pixels.gamma32(color5), 2, 8);
  pixels.fill(pixels.gamma32(color1), 10, 16);
  pixels.show();
 delay(wait);
 pixels.fill(pixels.gamma32(color7), 0, 2);
  pixels.fill(pixels.gamma32(color6), 2, 8);
  pixels.fill(pixels.gamma32(color2), 10, 16);
  pixels.show();
 delay(wait);
}


void firstlistTwo(int wait){

  for(int b=0; b<=255; b++){
    pixels.fill(pixels.gamma32(pixels.ColorHSV(24000, 130, b)), 0, 2);
    pixels.fill(pixels.gamma32(pixels.ColorHSV(59000, 130, b)), 2, 8);
    pixels.fill(pixels.gamma32(pixels.ColorHSV(44000, 130, b)), 10, 16);
    pixels.show();
    delay(wait);
  }
  for(int b=255; b>=0; b--){
    pixels.fill(pixels.gamma32(pixels.ColorHSV(24000, 130, b)), 0, 2);
    pixels.fill(pixels.gamma32(pixels.ColorHSV(59000, 130, b)), 2, 8);
    pixels.fill(pixels.gamma32(pixels.ColorHSV(44000, 130, b)), 10, 16);
    pixels.show();
    delay(wait);
  }
  for(int b=0; b<=255; b++){
    pixels.fill(pixels.gamma32(pixels.ColorHSV(71000, 130, b)), 0, 2);
    pixels.fill(pixels.gamma32(pixels.ColorHSV(33000, 130, b)), 2, 8);
    pixels.fill(pixels.gamma32(pixels.ColorHSV(24000, 130, b)), 10, 16);
    pixels.show();
    delay(wait);
  }
  for(int b=255; b>=0; b--){
    pixels.fill(pixels.gamma32(pixels.ColorHSV(71000, 130, b)), 0, 2);
    pixels.fill(pixels.gamma32(pixels.ColorHSV(33000, 130, b)), 2, 8);
    pixels.fill(pixels.gamma32(pixels.ColorHSV(24000, 130, b)), 10, 16);
    pixels.show();
    delay(wait);
  }
  for(int b=0; b<=255; b++){
    pixels.fill(pixels.gamma32(pixels.ColorHSV(59000, 130, b)), 0, 2);
    pixels.fill(pixels.gamma32(pixels.ColorHSV(44000, 130, b)), 2, 8);
    pixels.fill(pixels.gamma32(pixels.ColorHSV(71000, 130, b)), 10, 16);
    pixels.show();
    delay(wait);
  }
  for(int b=255; b>=0; b--){
    pixels.fill(pixels.gamma32(pixels.ColorHSV(59000, 130, b)), 0, 2);
    pixels.fill(pixels.gamma32(pixels.ColorHSV(44000, 130, b)), 2, 8);
    pixels.fill(pixels.gamma32(pixels.ColorHSV(71000, 130, b)), 10, 16);
    pixels.show();
    delay(wait);
  }
  for(int b=0; b<=255; b++){
    pixels.fill(pixels.gamma32(pixels.ColorHSV(71000, 130, b)), 0, 2);
    pixels.fill(pixels.gamma32(pixels.ColorHSV(33000, 130, b)), 2, 8);
    pixels.fill(pixels.gamma32(pixels.ColorHSV(24000, 130, b)), 10, 16);
    pixels.show();
    delay(wait);
  }
  for(int b=255; b>=0; b--){
    pixels.fill(pixels.gamma32(pixels.ColorHSV(71000, 130, b)), 0, 2);
    pixels.fill(pixels.gamma32(pixels.ColorHSV(33000, 130, b)), 2, 8);
    pixels.fill(pixels.gamma32(pixels.ColorHSV(24000, 130, b)), 10, 16);
    pixels.show();
    delay(wait);
  }
}
