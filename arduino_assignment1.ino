int time_slot;
int s1r=13;//signal 1 red
int s1y=12;//signal 1 yellow
int s1g=11;//signal 1 green
int s2r=10;//signal 2 red
int s2y=9;//signal 2 yellow
int s2g=8;//signal 2 green
int s3r=7;//signal 3 red
int s3y=6;//signal 3 yellow
int s3g=5;//signal 3 green
int s4r=4;//signal 4 red
int s4y=3;//signal 4 yellow
int s4g=2;//signal 4 green
int d3=6000;
int d1=2000;
int i;
String m1="please enter the time slot";

void setup()
{
  pinMode(s1r, OUTPUT);
  pinMode(s1y, OUTPUT);
  pinMode(s1g, OUTPUT);
  pinMode(s2r, OUTPUT);
  pinMode(s2y, OUTPUT);
  pinMode(s2g, OUTPUT);
  pinMode(s3r, OUTPUT);
  pinMode(s3y, OUTPUT);
  pinMode(s3g, OUTPUT);
  pinMode(s4r, OUTPUT);
  pinMode(s4y, OUTPUT);
  pinMode(s4g, OUTPUT);
  Serial.begin(9600);
}


void loop()
{
  digitalWrite(s1r, LOW);//for after every cycle to turn off all leds.
  digitalWrite(s1y, LOW);
  digitalWrite(s1g, LOW);
  digitalWrite(s2r, LOW);
  digitalWrite(s2y, LOW);
  digitalWrite(s2g, LOW);
  digitalWrite(s3r, LOW);
  digitalWrite(s3y, LOW);
  digitalWrite(s3g, LOW);
  digitalWrite(s4r, LOW);
  digitalWrite(s4y, LOW); 
  digitalWrite(s4g, LOW);
  Serial.println(m1);
  while(Serial.available()==0){};
  time_slot=Serial.parseInt();
  if(time_slot==1)
  {
    digitalWrite(s1y,HIGH);
    digitalWrite(s2y,HIGH);
    digitalWrite(s3y,HIGH);
    digitalWrite(s4y,HIGH);
    delay(d3);
    return;
  }
  if(time_slot==2||time_slot==4)
  {
    digitalWrite(s1g,HIGH);
    digitalWrite(s2r,HIGH);
    digitalWrite(s3r,HIGH);
    digitalWrite(s4r,HIGH);
    delay(d3);
    digitalWrite(s1g,LOW);
    digitalWrite(s1y,HIGH);
    delay(d1);
    digitalWrite(s1y,LOW);
    digitalWrite(s2r,LOW);
    digitalWrite(s1r,HIGH);
    digitalWrite(s2g,HIGH);
    delay(d3);
    digitalWrite(s2g,LOW);
    digitalWrite(s2y,HIGH);
    delay(d1);
    digitalWrite(s2y,LOW);
    digitalWrite(s3r,LOW);
    digitalWrite(s2r,HIGH);
    digitalWrite(s3g,HIGH);
    delay(d3);
    digitalWrite(s3g,LOW);
    digitalWrite(s3y,HIGH);
    delay(d1);
    digitalWrite(s3y,LOW);
    digitalWrite(s4r,LOW);
    digitalWrite(s3r,HIGH);
    digitalWrite(s4g,HIGH);
    delay(d3);
    digitalWrite(s4g,LOW);
    digitalWrite(s4y,HIGH);
    delay(d1);
    return;
  }
  if(time_slot==3)
  {
    digitalWrite(s1r,HIGH);
    digitalWrite(s2g,HIGH);
    digitalWrite(s3r,HIGH);
    digitalWrite(s4g,HIGH);
    delay(d3);
    digitalWrite(s2g,LOW);
    digitalWrite(s4g,LOW);
    digitalWrite(s2y,HIGH);
    digitalWrite(s4y,HIGH);
    delay(d1);
    digitalWrite(s1r,LOW);
    digitalWrite(s2y,LOW);
    digitalWrite(s3r,LOW);
    digitalWrite(s4y,LOW);
    digitalWrite(s1g,HIGH);
    digitalWrite(s2r,HIGH);
    digitalWrite(s3g,HIGH);
    digitalWrite(s4r,HIGH);
    delay(d3);
    digitalWrite(s1g,LOW);
    digitalWrite(s3g,LOW);
    digitalWrite(s1y,HIGH);
    digitalWrite(s3y,HIGH);
    delay(d1);
  }
}