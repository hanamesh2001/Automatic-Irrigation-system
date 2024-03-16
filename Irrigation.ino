int soilMoistureValue = 0; 
int percentage=0;
void setup() 
{ 
pinMode(3,OUTPUT);  
Serial.begin(9600); 
}
void loop() { 
soilMoistureValue = analogRead(A0); 
percentage = map(soilMoistureValue, 490, 1023, 0, 100); 
Serial.println(percentage);
void setup() { 
Serial.begin(9600); 
} 
void loop() { 
int sensorValue = analogRead(A0); 
Serial.println(sensorValue); 
delay(1);
If (percentage < 10)  
{ 
Serial.println(" pump on"); 
digitalWrite(3,LOW); 
}
if(percentage >80)  
{ 
Serial.println("pump off"); 
digitalWrite(3,HIGH);  
} 
} 