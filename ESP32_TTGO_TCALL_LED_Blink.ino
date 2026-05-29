#define LED_PIN 13

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_PIN, HIGH); // LED ON
    delay(1000);

    digitalWrite(LED_PIN, LOW);  // LED OFF
    delay(10000); // Wait 10 seconds
}
