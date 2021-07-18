  //global vaiables
  int G = 2;
  int F = 3;
  int A = 4; 
  int B = 5; 
  int E = 6; 
  int D = 7; 
  int C = 8; 
  int DP = 9; 

void setup() {
  // put your setup code here, to run once:
  clearAll(); 
}

void loop() 
{
  for(int i = 2; i <= 9 ; i++){
    pinMode(i, OUTPUT);  
  }
  //count through all numbers
  display0(); 
  delay(1000); 
  clearAll(); 
   display1(); 
  delay(1000); 
  clearAll(); 
   display2(); 
  delay(1000); 
  clearAll(); 
   display3(); 
  delay(1000); 
  clearAll(); 
   display4(); 
  delay(1000); 
  clearAll(); 
   display5(); 
  delay(1000); 
  clearAll(); 
   display6(); 
  delay(1000); 
  clearAll(); 
   display7(); 
  delay(1000); 
  clearAll();
   display8(); 
  delay(1000); 
  clearAll();
   display9(); 
  delay(1000); 
  clearAll();
}

void display1()
{
  digitalWrite(B, OUTPUT); 
  digitalWrite(C, OUTPUT); 
}
void display2()
{
  digitalWrite(A, OUTPUT); 
  digitalWrite(B, OUTPUT); 
  digitalWrite(G, OUTPUT); 
  digitalWrite(E, OUTPUT); 
  digitalWrite(D, OUTPUT); 
}

void display3()
{
  digitalWrite(A, OUTPUT); 
  digitalWrite(B, OUTPUT); 
  digitalWrite(G, OUTPUT); 
  digitalWrite(C, OUTPUT); 
  digitalWrite(D, OUTPUT); 
}

void display4()
{
  digitalWrite(F, OUTPUT); 
  digitalWrite(B, OUTPUT); 
  digitalWrite(G, OUTPUT); 
  digitalWrite(C, OUTPUT); 
}

void display5()
{
  digitalWrite(A, OUTPUT); 
  digitalWrite(F, OUTPUT); 
  digitalWrite(G, OUTPUT); 
  digitalWrite(C, OUTPUT); 
  digitalWrite(D, OUTPUT); 
}

void display6()
{
  digitalWrite(A, OUTPUT); 
  digitalWrite(F, OUTPUT); 
  digitalWrite(G, OUTPUT); 
  digitalWrite(E, OUTPUT); 
  digitalWrite(C, OUTPUT);
  digitalWrite(D, OUTPUT); 
}

void display7()
{
  digitalWrite(A, OUTPUT); 
  digitalWrite(B, OUTPUT); 
  digitalWrite(C, OUTPUT); 
}

void display8()
{
  digitalWrite(A, OUTPUT); 
  digitalWrite(B, OUTPUT); 
  digitalWrite(G, OUTPUT); 
  digitalWrite(E, OUTPUT); 
  digitalWrite(C, OUTPUT);
  digitalWrite(D, OUTPUT); 
  digitalWrite(F, OUTPUT); 
}

void display9()
{
  digitalWrite(A, OUTPUT); 
  digitalWrite(F, OUTPUT); 
  digitalWrite(G, OUTPUT); 
  digitalWrite(B, OUTPUT); 
  digitalWrite(C, OUTPUT);
  digitalWrite(D, OUTPUT); 
}

void display0()
{
  digitalWrite(A, OUTPUT); 
  digitalWrite(B, OUTPUT); 
  digitalWrite(E, OUTPUT); 
  digitalWrite(C, OUTPUT);
  digitalWrite(D, OUTPUT); 
  digitalWrite(F, OUTPUT); 
}

void clearAll()
{
   for(int i = 2; i <= 9 ; i++){
      digitalWrite(i, LOW); 
   }
}
