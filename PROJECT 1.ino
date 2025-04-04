void setup() {
  pinMode(3, OUTPUT); // Buzzer
  Serial.begin(9600); // Debugging
}

void loop() {
  // Read soil moisture (0-1023)
  int soil = analogRead(A0);
  
  // Read TMP36 temperature (°C)
  float voltage = analogRead(A1) * (5.0 / 1023.0);
  float temp = (voltage - 0.5) * 100.0;

  // Print values to Serial Monitor (for calibration)
  Serial.print("Soil: ");
  Serial.print(soil);
  Serial.print(" | Temp: ");
  Serial.print(temp);
  Serial.println("°C");

  // Trigger buzzer if:
  // - Soil too dry (>700) OR
  // - Temperature too high (>30°C)
  if (soil > 700 || temp > 30) {
    tone(3, 1000); // 1kHz tone
  } else {
    noTone(3);     // Turn off buzzer
  }
  
  delay(500); // Short delay to stabilize readings
}