#include <ESP8266WiFi.h>
#include <DHT.h>
#include <VL53L0X.h>
#include <WiFiClient.h>
#include "Adafruit_VL53L0X.h"

Adafruit_VL53L0X lox = Adafruit_VL53L0X();

const char* ssid = "ii";
const char* password = "........";
const char* THINGSPEAK_SERVER = "api.thingspeak.com";
const int THINGSPEAK_PORT = 80;
const char* API_KEY = "MLQFPDWU6ZI3Y1FO";

WiFiClient client;

// VL53L0X Sensor

WiFiServer server(80);

// DHT11 Sensor
#define DHTTYPE DHT11
// DHT Sensor pada pin 5 di NodeMCU
const int DHTPin = D7;
//inisialisasi library DHTpin
DHT dht(DHTPin, DHTTYPE);

void setup() {
  Serial.begin(9600);
  delay(20);

  // Initialize DHT11 sensor
  dht.begin();

  // Initialize VL53L0X sensor

  Serial.println();
  // Mengkonesikan ke wifi
  Serial.print("Menghubungkan ke jaringan... ");
  Serial.println(ssid);

  //Mulai koneksikan dengan via wifi
  WiFi.begin(ssid, password);
  Serial.println("inisialisasi");

  //syarat kondisi pengkoneksian
  while (WiFi.status() != WL_CONNECTED) {
    delay(300);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("Jaringan WiFi terkoneksi");
  Serial.println("Adafruit VL53L0X test");
  if (!lox.begin()) {
    Serial.println(F("Failed to boot VL53L0X"));
    while (1)
      ;
  }
  // power
  Serial.println(F("VL53L0X API Simple Ranging example\n\n"));
}

void loop() {
  VL53L0X_RangingMeasurementData_t measure;
  // Measure temperature and humidity from DHT11 sensor
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  lox.rangingTest(&measure, false);

  delay(100);

  // Measure distance from VL53L0X sensor
  float distance = measure.RangeMilliMeter;

  // Print data to serial monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("°C, Humidity: ");
  Serial.print(humidity);
  Serial.print("%, Distance: ");
  Serial.print(distance);
  Serial.println("mm");

  // Send data to server
  // sendData(1, 1, 1);
  sendData(temperature, humidity, distance);

  delay(1000);
}

void sendData(float temperature, float humidity, float distance) {
  if (client.connect(THINGSPEAK_SERVER, THINGSPEAK_PORT)) {
    String postStr = API_KEY;
    postStr += "&field4=";
    postStr += String(temperature);
    postStr += "&field5=";
    postStr += String(humidity);
    postStr += "&field6=";
    postStr += String(distance);

    client.print("POST /update HTTP/1.1\n");
    client.print("Host: api.thingspeak.com\n");
    client.print("Connection: close\n");
    client.print("X-THINGSPEAKAPIKEY: " + String(API_KEY) + "\n");
    client.print("Content-Type: application/x-www-form-urlencoded\n");
    client.print("Content-Length: ");
    client.print(postStr.length());
    client.print("\n\n");
    client.print(postStr);

    Serial.println("Data sent to ThingSpeak");
  } else {
    Serial.println("Connection to ThingSpeak failed");
  }
}