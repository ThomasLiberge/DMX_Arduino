const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 7;
// defines variables
long duration;
int distance1;
int distance2;
int diff;
int distance;
bool i = false;
void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(ledPin, OUTPUT);
Serial.begin(9600); // Starts the serial communication
}
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
distance1 = distance;
distance2 = distance;
diff = distance1-distance2;
if(distance<20){
  if(i==true){
    i=false;
    return i;
  }
  if(i==false){
    i=true;
    return i;
  }
}
if(i==true){
  digitalWrite(ledPin, HIGH);
}
if(i==false){
  digitalWrite(ledPin, LOW);
}
Serial.print(distance1);
}
