#define echoPin 2 
#define trigPin 3 
int LED=13;

long duration; 
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
  pinMode(LED ,OUTPUT);
  Serial.begin(9600); 
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); 
  Serial.println("with Arduino UNO R3");
}
void loop() {
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; 
  
  if(distance<=50 && distance>0)
     {
    
      digitalWrite(trigPin, HIGH);

      digitalWrite(trigPin, LOW);
      Serial.print("Something");
     } 
     else
     {
          digitalWrite(trigPin,LOW); 
    digitalWrite(LED,LOW);
     Serial.print("Clear");
     }
     Serial.print("\n");
 delay(100);
}
