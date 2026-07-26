#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define MIC_PIN 34
#define ULTRA_PIN 26
#define LED_PIN 2

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

int threshold = 2500;  // adjust based on mic readings

void setup() {
  Serial.begin(115200);
  pinMode(ULTRA_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  Wire.begin(21, 22);  // SDA, SCL

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED not found");
    while (true);
  }

  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  int micValue = analogRead(MIC_PIN);
  Serial.println(micValue);

  display.clearDisplay();

  if (micValue > threshold) {
    // Conversation detected
    digitalWrite(LED_PIN, HIGH);

    display.setCursor(0, 10);
    display.println("Conversation");
    display.setCursor(0, 35);
    display.println("Detected");

    // ultrasonic output (~40kHz)
    digitalWrite(ULTRA_PIN, HIGH);
    delayMicroseconds(12);
    digitalWrite(ULTRA_PIN, LOW);
    delayMicroseconds(12);

  } else {
    // Silent
    digitalWrite(LED_PIN, LOW);
    digitalWrite(ULTRA_PIN, LOW);

    display.setCursor(25, 20);
    display.println("Silent");
  }

  display.display();
}