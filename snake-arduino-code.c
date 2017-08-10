#include <Servo.h>

Servo servo1;         
Servo servo2;
Servo servo3;
Servo servo4;

void setup() { 
  servo1.attach(13);  
  servo2.attach(12);
  servo3.attach(11);
  servo4.attach(10);
} 

void loop() 
{            
  funcao_1();             
  delay(1000); 
  
  funcao_2();
  delay(1000);
  
  funcao_3();
  delay(1000);
  
  funcao_4();
  delay(1000);
  
  funcao_5();
  delay(1000);
}

void funcao_1() 
{
  servo1.write(160);
  servo2.write(16);
  servo3.write(160);
  servo4.write(16);
}

void funcao_2()
{
  servo1.write(16);
  servo2.write(160);
  servo3.write(16);
  servo4.write(160);
}

void funcao_3()
{
  servo1.write(160);
  servo2.write(16);
  servo3.write(160);
  servo4.write(16);
}
void funcao_4()
{
  servo1.write(16);
  servo2.write(160);
  servo3.write(16);
  servo4.write(160);
}

void funcao_5()
{
  servo1.write(160);
  servo2.write(16);
  servo3.write(160);
  servo4.write(16);
}
