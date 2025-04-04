#define PIR_PIN 2
#define TRIG_PIN 3
#define ECHO_PIN 4
#define BUZZER 5
#define LED 6

void setup() {
    pinMode(PIR_PIN, INPUT);
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    pinMode(BUZZER, OUTPUT);
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

long getDistance() {
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);
    long duration = pulseIn(ECHO_PIN, HIGH);
    return duration * 0.034 / 2;  // Convert to cm
}

void loop() {
    int motionDetected = digitalRead(PIR_PIN);
    long distance = getDistance();

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    if (motionDetected == HIGH || distance < 10) { // Trigger alarm if motion or object too close
        digitalWrite(BUZZER, HIGH);
        digitalWrite(LED, HIGH);
        Serial.println("ALERT! Motion detected or object too close!");
        delay(1000);
    } else {
        digitalWrite(BUZZER, LOW);
        digitalWrite(LED, LOW);
    }

    delay(500);
}
