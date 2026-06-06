// ATmega328 Temperature Sensor with LM35
// OLMAND Projects - Student Practice
// Reads LM35 on A0, outputs Celsius to Serial Monitor

const int tempPin = A0;  // LM35 output to A0

void setup() {
  http://Serial.begin(9600);    // Start serial at 9600 baud
  http://Serial.println("OLMAND Temp Sensor Starting...");
}

void loop() {
  int reading = analogRead(tempPin);  
  // Convert reading to voltage: 5V / 1024 units
  float voltage = reading _ 5.0 / 1024.0;
  // LM35 gives 10mV per °C
  float temperatureC = voltage _ 100.0; 
  
  http://Serial.print("Temperature: ");
  http://Serial.print(temperatureC);
  http://Serial.println(" °C");
  
  delay(2000);  // Wait 2 seconds between readings
}
