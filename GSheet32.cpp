#include "GSheet32.h"
#include <WiFi.h>
#include <HTTPClient.h>

HTTPClient http;
WiFiClient client;
GSheet32::GSheet32(String GAS_ID){
    _GAS_ID = GAS_ID;
}

void GSheet32::connectWiFi(const char* ssid, const char* pass){
    _ssid = ssid;
    _pass = pass;

    WiFi.begin(_ssid, _pass);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }
    Serial.println();
    Serial.print("Succes!! Connect to : "+WiFi.SSID());
}

void GSheet32::sendData(String colC){
    String url = "https://script.google.com/macros/s/" + _GAS_ID + "/exec?value1="+colC;
    http.begin(url.c_str()); //Specify the URL and certificate
    http.setFollowRedirects(HTTPC_STRICT_FOLLOW_REDIRECTS);
    int httpCode = http.GET();
    String payload;
    if (httpCode > 0){
      payload = http.getString();
     Serial.println(httpCode);
     Serial.println(payload);
     }else {
     Serial.println("Failed");
    }
        
     http.end();
}

void GSheet32::sendData(String colC, String colD){
    String url = "https://script.google.com/macros/s/" + _GAS_ID + "/exec?value1="+colC+"&value2="+colD;
    http.begin(url.c_str()); //Specify the URL and certificate
    http.setFollowRedirects(HTTPC_STRICT_FOLLOW_REDIRECTS);
    int httpCode = http.GET();
    String payload;
    if (httpCode > 0){
      payload = http.getString();
     Serial.println(httpCode);
     Serial.println(payload);
     }else {
     Serial.println("Failed");
    }
        
     http.end();
}

void GSheet32::sendData(String colC, String colD,String colE){
    String url = "https://script.google.com/macros/s/" + _GAS_ID + "/exec?value1="+colC+"&value2="+colD+"&value3="+colE;
    http.begin(url.c_str()); //Specify the URL and certificate
    http.setFollowRedirects(HTTPC_STRICT_FOLLOW_REDIRECTS);
    int httpCode = http.GET();
    String payload;
    if (httpCode > 0){
      payload = http.getString();
     Serial.println(httpCode);
     Serial.println(payload);
     }else {
     Serial.println("Failed");
    }
        
     http.end();
}

void GSheet32::sendData(String colC, String colD,String colE, String colF){
    String url = "https://script.google.com/macros/s/" + _GAS_ID + "/exec?value1="+colC+"&value2="+colD+"&value3="+colE+"&value4="+colF;
    http.begin(url.c_str()); //Specify the URL and certificate
    http.setFollowRedirects(HTTPC_STRICT_FOLLOW_REDIRECTS);
    int httpCode = http.GET();
    String payload;
    if (httpCode > 0){
      payload = http.getString();
     Serial.println(httpCode);
     Serial.println(payload);
     }else {
     Serial.println("Failed");
    }
        
     http.end();
}

void GSheet32::sendData(String colC, String colD,String colE, String colF, String colG){
    String url = "https://script.google.com/macros/s/" + _GAS_ID + "/exec?value1="+colC+"&value2="+colD+"&value3="+colE+"&value4="+colF+"&value5="+colG;
    http.begin(url.c_str()); //Specify the URL and certificate
    http.setFollowRedirects(HTTPC_STRICT_FOLLOW_REDIRECTS);
    int httpCode = http.GET();
    String payload;
    if (httpCode > 0){
      payload = http.getString();
     Serial.println(httpCode);
     Serial.println(payload);
     }else {
     Serial.println("Failed");
    }
        
     http.end();
}