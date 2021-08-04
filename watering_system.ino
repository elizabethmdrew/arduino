#define VALVE 2
#define M_PIN A0
#define H_PIN A1
#define MS_S 3
#define MS_TX 1
#define MS_RX 0

 int interval = 5000; //interval is 5 seconds
 int sensorNum = 1;  
 int threshold = 300; //this is temporary 
 float moisture; 
 float humidity; 
 int runs = 0; 
 
void setup() 
{
  Serial.begin(9600); //unsure of speed of these bits
  pinMode(VALVE, OUTPUT);
}

void loop() 
{
  mh_sensor(interval, threshold, threshold); 
}

void open_valve(int interval) 
{
  digitalWrite(VALVE, HIGH); 
  delay(interval); 
  digitalWrite(VALVE, LOW);
}

void mh_sensor(int sensorNum, int thresh_moisture, int thresh_humidity)
{
     moisture = analogRead(M_PIN);  //read moisture level    
     Serial.print(" moisture: ");  
     Serial.println(moisture);     

     humidity = analogRead(H_PIN); //read humidity level
     Serial.print(" humidity: "); 
     Serial.println(humidity);  

     //digitalWrite(VALVE, LOW);
     
     if(moisture <= thresh_moisture && runs > 50) //if its getting too dry open valve
     {
        open_valve(interval);
        Serial.println("valve opened");  
        runs = 0; 
     }
        
     delay(500);
     runs++; 
     Serial.println(runs);  
}
