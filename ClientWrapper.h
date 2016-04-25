/**************************************************************************/
/*! 
  @file     ClientWrapper.h
  @author   Bradley Clayton (http://bradley.camera)
  @license  BSD (see license.txt) 

  This file wrappes the Adafruit_CC3000_Client, so that it's compatible
  with other libraries that support the standard Arduino client class.
  
*/
/**************************************************************************/
/*
#ifndef clientwrapper_h
#define clientwrapper_h
#include "Arduino.h"	
#include "Print.h"
#include "Client.h"
#include "IPAddress.h"

class ClientWrapper : public Client {

public:
  ClientWrapper();
  ClientWrapper(uint8_t sock);

  uint8_t status();
  virtual int connect(IPAddress ip, uint16_t port);
  virtual int connect(const char *host, uint16_t port);
  virtual size_t write(uint8_t);
  virtual size_t write(const uint8_t *buf, size_t size);
  virtual int available();
  virtual int read();
  virtual int read(uint8_t *buf, size_t size);
  virtual int peek();
  virtual void flush();
  virtual void stop();
  virtual uint8_t connected();
  virtual operator bool();
  virtual bool operator==(const bool value) { return bool() == value; }
  virtual bool operator!=(const bool value) { return bool() != value; }
  virtual bool operator==(const EthernetClient&);
  virtual bool operator!=(const EthernetClient& rhs) { return !this->operator==(rhs); };
  uint8_t getSocketNumber();

  friend class EthernetServer;
  
  using Print::write;

private:
  class Adafruit_CC3000* wido;
  class Adafruit_CC3000_Client* widoClient;
  static uint16_t _srcport;
  uint8_t _sock;
  
};

#endif
*/