# Smart-Environment-Monitor-ESP
This IoT-based system uses an ESP32 microcontroller to track temperature, humidity, and motion using a DHT22 sensor and PIR module. Data is displayed on an I2C LCD for real-time monitoring 🖥️. Ideal for smart homes, security, and climate control, ensuring a safer and more efficient environment 🚀🏠.



🛠️ Components Overview
📟 Display: I2C LCD (16x2)
- The LiquidCrystal_I2C library allows easy communication via I2C protocol.
- It shows temperature, humidity, and motion status in real time.
- Reduces the number of GPIO pins needed for LCD connection 🖥️.
🌡️ DHT22 Sensor (Temperature & Humidity)
- Measures temperature (°C) and humidity (%) with high accuracy.
- Uses the DHT library to extract data.
- Essential for climate control, greenhouses, and weather stations 🌍☁️.
🚨 PIR Motion Sensor
- Detects human movement based on infrared radiation.
- Used for home security, automation, and smart alarms 🏠🔒.
🎛️ Microcontroller: ESP32
- Powerful Wi-Fi & Bluetooth board with dual-core processing.
- Supports multiple sensors with GPIO, I2C, and PWM.
- Efficient for IoT applications due to its built-in connectivity 📶.



📚 Libraries Used
- Wire.h – Enables I2C communication for the LCD.
- LiquidCrystal_I2C.h – Controls the LCD display efficiently.
- DHT.h & Adafruit_Sensor.h – Extracts data from the DHT22 sensor.



🔄 Step-by-Step Approach
🏗️ Step 1: Hardware Setup
🔧 Connect LCD – Link SDA (GPIO21) & SCL (GPIO22) for I2C communication.
🔗 Attach DHT22 – Connect temperature/humidity sensor to GPIO15.
🔌 Set PIR Sensor – Wire PIR motion detector to GPIO4.
🖥️ Step 2: Software Configuration
📜 Include Libraries – Import Wire, LiquidCrystal_I2C, DHT libraries.
🛠️ Initialize LCD – Set up 16x2 LCD screen via I2C protocol.
⚙️ Configure Sensors – Define DHT22 & PIR pins for data acquisition.
📡 Step 3: Data Acquisition & Processing
🌡️ Read Temperature & Humidity – Extract sensor values using DHT.readTemperature() & DHT.readHumidity().
🚶 Detect Motion – Check PIR sensor output (HIGH/LOW) to detect movement.
🖥️ Step 4: Display & Monitoring
📊 Format Data – Convert readings into user-friendly display text 📟.
🔄 Update LCD – Show latest values every 2 seconds without flickering.
🚀 Step 5: Future Enhancements
📲 IoT Integration – Send data to cloud platforms like ThingSpeak for remote monitoring.
🔔 Smart Alerts – Use buzzer & LED notifications for movement detection.
⚡ Power Optimization – Implement low-power modes for better efficiency 🔋.



🔍 Final Thoughts
This Smart Environment Monitor is a cost-effective IoT solution for home automation, security, and climate tracking 🏠🌡️. It ensures real-time monitoring using sensors and an LCD display, making it perfect for industrial and residential use.
