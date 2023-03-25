#include <GSheet32.h>
GSheet32 Sheet("your GAS_ID");

const char* ssid = "your WiFi ssid";
const char* password = "your WiFi password";

int sensorpin = 12;
int valSen;
void setup() {
  Serial.begin(115200);
  pinMode(sensorpin, INPUT);
  Sheet.connectWiFi(ssid, password);
}

void loop() {
  valSen = digitalRead(sensorpin);

  if(valSen == 1){
    Sheet.sendData("value1=Hallo");
  }else {
    
  }
  
}
