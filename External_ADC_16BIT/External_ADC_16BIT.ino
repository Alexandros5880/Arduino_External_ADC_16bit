#include <Wire.h>
#include <Adafruit_ADS1015.h>



//Adafruit_ADS1115 ads;
//const float multiplier = 0.1875F;





void setup() {
  Serial.begin(115200);
  // Setup external ADC 16 bit
  //ads.setGain(GAIN_SIXTEEN);
  //ads.begin();
}

void loop() {
  
  //int16_t adc0 = map( ads.readADC_SingleEnded(0), 10, 26000, 0 , 100);
  //int16_t adc0 = ads.readADC_SingleEnded(0);
  int16_t adc0 = analogRead(A0);
  Serial.println(adc0);
  
  delay(10);
  
}
