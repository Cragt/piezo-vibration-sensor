const int PIEZO_PIN = A0;  // Piezo sensor connected to the A0 pin on the ESP8266

void setup() {
  Serial.begin(9600);  // Start serial communication for monitoring
}

void loop() {
  // Read the ADC value from the piezo sensor
  int piezoADC = analogRead(PIEZO_PIN);

  Serial.println(piezoADC);  // Print the voltage value to the serial monitor
  
  delay(10);  // Add a small delay for stability
}
