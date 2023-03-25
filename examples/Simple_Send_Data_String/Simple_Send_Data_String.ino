#include <GSheet32.h>
GSheet32 Sheet("your GAS_ID");

const char* ssid = "your WiFi ssid";
const char* password = "your WiFi password";

void setup() {
  Serial.begin(115200);
  Sheet.connectWiFi(ssid, password);
}

void loop() {
  // ===== 1 Data
  Sheet.sendData("value1=Hallo");
  //Sheet.sendData("value1=Hallo%20World");  Space = %20

  // ===== 2 Data
  Sheet.sendData("value1=Hallo%20World&value2=Hai"); // Space = %20, Add Parameters = &
  // According to your Parameter
}
