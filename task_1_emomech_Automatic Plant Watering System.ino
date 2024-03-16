// Author: ZR Emon
//Project: Automatic Plant Watering System.

// Define analog pin for soil moisture sensor, pump control pin, and variables
int soil = A1;
int pump = 7;
int moisturevalue;
int red = 12, green = 4; // Pins for LED indicators

void setup() {
  Serial.begin(9600);  // Initialize serial communication for debugging
  pinMode(soil, INPUT);
  pinMode(pump, OUTPUT);
}

void loop() {
  moisturevalue = analogRead(soil); // Read analog value from soil moisture sensor
  Serial.print("Moisture: ");
  Serial.println(moisturevalue);

  // Check moisture level and control pump and LEDs accordingly
  if (moisturevalue < 150) {
    digitalWrite(pump, HIGH); 
    digitalWrite(red, HIGH);  
    digitalWrite(green, LOW); 
  } else {
    digitalWrite(pump, LOW);  
    digitalWrite(red, LOW);   
    digitalWrite(green, HIGH); 
  }

  delay(600); // Wait for a second before repeating the loop
}
