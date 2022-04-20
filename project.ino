int su = 0;
int dc_motor= 4;
void setup()
{
  pinMode(dc_motor,OUTPUT);
  pinMode (A0, OUTPUT);
  pinMode (A1, INPUT);
  Serial.begin (9600);
  
  pinMode (8, OUTPUT); 
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
}
void loop()
{
  digitalWrite(A0,HIGH);
  delay(10);
  su = analogRead(A1);
  digitalWrite(A0, LOW);
  Serial.println(su);
  digitalWrite(8,LOW); 
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(dc_motor, LOW);

  if (su < 200){
    digitalWrite(12,HIGH);   digitalWrite(dc_motor,HIGH);

  } else {
    if (su < 400) {
    digitalWrite(11,HIGH);   digitalWrite(dc_motor,HIGH);

    } else {
      if (su < 600 ){ 
      digitalWrite(10,HIGH);     digitalWrite(dc_motor,HIGH);

      } else {
        if (su< 800) {
      digitalWrite(9,HIGH);
        } else {
      digitalWrite(8,HIGH); 
      }
    }
  }
}
delay(100); // wait for 100 millisecond(s)
}
