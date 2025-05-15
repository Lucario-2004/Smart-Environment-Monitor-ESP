#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#include <Adafruit_Sensor.h>

// Define I2C LCD (16x2)
#define LCD_ADDRESS 0x27
#define LCD_COLUMNS 16
#define LCD_ROWS 2
LiquidCrystal_I2C lcd(LCD_ADDRESS, LCD_COLUMNS, LCD_ROWS);

// Define DHT22
#define DHT_PIN 15
#define DHT_TYPE DHT22
DHT dht(DHT_PIN, DHT_TYPE);

// Define PIR Sensor
#define PIR_PIN 4

void setup() {
    // Initialize I2C LCD
    Wire.begin(21, 22); // SDA = GPIO21, SCL = GPIO22
    lcd.init();
    lcd.backlight();
    
    // Initialize sensors
    pinMode(PIR_PIN, INPUT);
    dht.begin();

    // Welcome message
    lcd.setCursor(0, 0);
    lcd.print("Initializing...");
    delay(2000);
    lcd.clear();
}

void loop() {
    // Read DHT22 sensor values
    float temperature = dht.readTemperature();
    float humidity = dht.readHumidity();

    // Read PIR motion sensor
    bool motionDetected = digitalRead(PIR_PIN);

    // Display on LCD
    lcd.clear();
    
    // Line 1: Temperature & Humidity
    lcd.setCursor(0, 0);
    lcd.print("T:");
    lcd.print(temperature, 1);
    lcd.print("C ");
    lcd.print("H:");
    lcd.print(humidity, 0);
    lcd.print("%");

    // Line 2: Motion status
    lcd.setCursor(0, 1);
    lcd.print("Obj: ");
    lcd.print(motionDetected ? "TRUE " : "FALSE");

    // Wait for 2 seconds before refreshing
    delay(2000);
}