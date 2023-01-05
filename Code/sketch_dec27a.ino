#define start 13
#define clk 11
#define ALE 10


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(start,OUTPUT);
  pinMode(clk,OUTPUT);
  pinMode(ALE,OUTPUT);

  tone(clk,640000);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  delayMicroseconds(0.05);
  digitalWrite(ALE,HIGH);
  delayMicroseconds(0.05);
  digitalWrite(start,HIGH);
  delayMicroseconds(0.2);
  digitalWrite(ALE,LOW);
  digitalWrite(start,LOW);
  delay(3000);
  


}
