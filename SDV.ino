void setup() 
{
  pinMode(3,OUTPUT);
  
  pinMode(4,OUTPUT);
  
  pinMode(5,OUTPUT);
  
  pinMode(6,OUTPUT);

}

void GO_STRAIGHT() 
{
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  
}
void GO_LEFT()
{
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(500);
  }
void GO_RIGHT()
{
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW); 
  delay(500);
  }
void loop()
{
  GO_STRAIGHT();
  delay(5000);
  GO_LEFT();
  GO_STRAIGHT();
  delay(5000);
  GO_RIGHT();
  GO_STRAIGHT();
  delay(5000);
  GO_RIGHT();
  GO_STRAIGHT();
  delay(10000);
  GO_LEFT();
  GO_STRAIGHT();
  delay(10000);
 
  
  
  }
