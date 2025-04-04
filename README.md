## TASK-1
# PROJECT-1
A simple but smart system that monitors soil moisture and temperature, triggering a buzzer alarm when your plant needs attention—either because the soil is too dry or the environment is too hot. Perfect for keeping houseplants healthy!
How It Works
Sensors:
Soil Moisture Sensor: Measures how dry/wet the soil is (0–1023, where higher values = drier).
TMP36 Temperature Sensor: Detects ambient temperature in °C.
Logic:
Too Dry? → Buzzer sounds if soil moisture exceeds 700 (adjustable).
Too Hot? → Buzzer also sounds if temperature rises above 30°C.
Output:
Buzzer: Alerts you with a 1kHz tone when conditions are poor.
Serial Monitor: Displays real-time sensor values for calibration.
Why It’s Useful::
Prevents over/underwatering.

Protects plants from extreme temperatures.

# PROJECT 2
A smart parking aid that helps drivers gauge distance to obstacles, with automatic light-based alerts for low-visibility conditions.
How It Works
Ultrasonic Sensor (HC-SR04)
Measures distance (2cm–400cm) to obstacles behind/in front of a vehicle.
Triggers visual feedback via 3 colored LEDs:
Green (Safe): >100 cm
Yellow (Caution): 50–100 cm
Red (Stop!): <50 cm
Light Sensor (LDR)
Detects ambient light levels.
Automatically dims LEDs in bright daylight to save power.
Fully brightens LEDs in darkness for better visibility.
Real-Time Feedback
LEDs update instantly as the vehicle moves closer/farther from obstacles.
No buzzer (quiet operation, but one can be added for audio alerts).
Use Cases:
Garage Parking – Avoid hitting walls or other cars.
Parallel Parking – Know when you’re close to the curb.

# PROJECT 3:
Motion-Activated Alarm System 
This project is a security alarm system that detects motion and nearby objects using a PIR motion sensor and an ultrasonic sensor (HC-SR04). When motion is detected or an object comes too close (less than 10 cm), the system triggers a buzzer and LED as an alert.
How It Works:
PIR Sensor detects human movement and activates the alarm.
Ultrasonic Sensor continuously measures distance. If an object is too close, the alarm is triggered.
Buzzer & LED turn on when motion or proximity is detected.
The Arduino Serial Monitor displays real-time distance readings.
Applications:
Home security systems
Motion-triggered door alarms
Object detection in robotics

