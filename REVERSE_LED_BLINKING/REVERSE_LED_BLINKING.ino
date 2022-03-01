int LED_1=9;
int LED_2=10;
int LED_3=11;
int LED_4=12;

void setup()
{
  pinMode(LED_1,OUTPUT);  
  pinMode(LED_2,OUTPUT);  
  pinMode(LED_3,OUTPUT);  
  pinMode(LED_4,OUTPUT);  
}
void loop()
{
  digitalWrite(LED_4,HIGH);  
  delay(1000);  
  digitalWrite(LED_4,LOW); 
  digitalWrite(LED_3,HIGH); 
  delay(1000);  
  digitalWrite(LED_3,LOW); 
  digitalWrite(LED_2,HIGH); 
  delay(1000);  
  digitalWrite(LED_2,LOW); 
  digitalWrite(LED_1,HIGH); 
  delay(1000);  
  digitalWrite(LED_1,LOW); 
  delay(1000);  
}
