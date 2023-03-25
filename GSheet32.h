#ifndef GSheet32_h
#define GSheet32_h

#include <Arduino.h>

class GSheet32
{
private:
    String _GAS_ID;
    String url;
    const char* _ssid;
    const char* _pass;
    String _param;

public:
   GSheet32(String GAS_ID);
   void connectWiFi(const char* ssid, const char* pass);

   void sendData(String param);

};
#endif
