int Sensormosture =A0;
int lamputaman=13;
int Speaker =12;;
char val;
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(lamputaman,OUTPUT);
  Serial.begin(9600);
  Serial.begin(9600);
  pinMode(Speaker,OUTPUT);
    
}

void loop() {
  // put your main code here, to run repeatedly:

if( Serial.available() >0 ) {
    val = Serial.read();
    Serial.println(val);
 if( val == '1' ) {
    digitalWrite(11,HIGH); }
}
}
void sensor() {
int sensorldr = analogRead(A1);
if (sensorldr>500) {
    digitalWrite(lamputaman,HIGH);
  }else if(sensorldr<500) {
    digitalWrite(lamputaman,LOW);                       

int dataSensor=analogRead(Sensormosture);
  Serial.println(dataSensor);
  //lcd.println(dataSensor);
  delay(100);
  if (dataSensor<=300){
  digitalWrite(Speaker,LOW);
  //  lcd.clear();
    //lcd.setCursor(1,0);
//lcd.print(" saya haus   ");
///lcd.setCursor(0,1);
//lcd.print(" kondisi aman ");
//servoKiri.write(180);
  }else{
    digitalWrite(Speaker,HIGH);
 //   lcd.clear();
 // lcd.setCursor(1,0);
//lcd.print(" saya tdk haus  ");
//lcd.setCursor(0,1);
//lcd.print("AUS");
//servoKiri.write(0);
  }
}
}
