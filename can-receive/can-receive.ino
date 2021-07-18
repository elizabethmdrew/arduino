#include <SPI.h>
#include "mcp_can.h"
#define SERIAL Serial

const int SPI_CS_PIN = 9; 
MCP_CAN CAN(SPI_CS_PIN); 

void setup() 
{
  
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  SERIAL.begin(115200); 
  while(CAN_OK != CAN.begin(CAN_500KBPS))
  {
    SERIAL.println("CAN Failed");
  }
  SERIAL.println("CAN Successful"); 
}

void loop() 
{
  bool message_sent = false; 
  unsigned char buff[8];
  unsigned char leng = 0; 
  
    if(CAN_MSGAVAIL == CAN.checkReceive())
    {
      
      CAN.readMsgBuf(&leng, buff); //recieve the message buffer
      SERIAL.println("received"); 
      
      unsigned long canId = CAN.getCanId(); //receive the CAN ID
      digitalWrite(9, HIGH);//yellow light, waiting 
      
      //for(int i = 0; i<8; i++)
      //{
        //if(buff[i];
      //}
  
      SERIAL.println(""); 
      SERIAL.println("ID Data:"); 
      SERIAL.println(leng); 
      SERIAL.println(canId, HEX); //print the CAN ID 
      digitalWrite(9,LOW); //turn other lights off
  
      for(int i = 0; i< leng;i++)
      {
        SERIAL.print(buff[i]);
        SERIAL.print("\t"); //tab between the buffer digits (2# at a time) 
      } 

       digitalWrite(8, HIGH);
       delay(2000); 
       digitalWrite(8, LOW);
       delay(2000);//red light, no message
       
       
       message_sent = false;
    } 
 }
  
