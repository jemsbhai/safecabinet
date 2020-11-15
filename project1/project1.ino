int c1=0,c2=0;
bool detect,detectt;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (9,INPUT);
  pinMode (13,OUTPUT);
  pinMode (8,INPUT);
}

 
void loop() {
  detect=digitalRead(9);    //near door 
  detectt=digitalRead(8);
//  Serial.println("first ir");
//  Serial.println(detect);
//  delay(1000);
//  Serial.println("second ir");
//  Serial.println(detectt);
//  delay(1000);
if( detect && c1==c2)
c1++;
else if(detect && c1>c2)
c1--;
else if(detectt && c2<c1)
c2++;
else if(detectt && c2==c1)
c2--;
if(c1)
digitalWrite(13,HIGH);
else
digitalWrite(13,LOW);
Serial.print("c1=");
Serial.print(c1);
Serial.print("\tc2=");
Serial.println(c2);
delay(300);
}
