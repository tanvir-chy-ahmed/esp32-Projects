#define DO_D2 4
#define ExternelLed 5

void setup(){
  Serial.begin(115200);
  pinMode(DO_D2,INPUT);
  pinMode(ExternelLed, OUTPUT);

}

void loop(){
  int lightVoltStatus = digitalRead(DO_D2);
  if(lightVoltStatus == 0)
  {
    Serial.print("Light Detected: ");
    digitalWrite(ExternelLed, HIGH); 
    Serial.println(lightVoltStatus);
  }else{
    Serial.print("Darkness Detected: ");
    digitalWrite(ExternelLed, LOW); 
    Serial.println(lightVoltStatus);
  }
  delay(1000);
}

