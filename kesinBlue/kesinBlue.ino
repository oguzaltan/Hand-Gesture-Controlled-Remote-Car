#include "I2Cdev.h"
#include "MPU6050.h" //Mpu6050 kütüphanesi
#include "Wire.h"

MPU6050 accelgyro; // Mpu6050 sensör tanımlama
int16_t ax, ay, az; //ivme tanımlama
int16_t gx, gy, gz; //gyro tanımlama

int default_x = 250;
int default_y = 50;

int data_x;
int data_y;

void setup()
{
  Wire.begin();
  Serial.begin(9600);
  Serial.println("I2C cihazlar başlatılıyor...");
  accelgyro.initialize();
  Serial.println("Test cihazı bağlantıları...");
  Serial.println(accelgyro.testConnection() ? "MPU6050 bağlantı başarılı" : "MPU6050 bağlantısı başarısız");
}

void loop()
{
  accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz); // read data
  delay(100);
  
  data_x = map(ax, -17000, 17000, 200, 300 ); //Send X axis data
  data_y = map(ay, -17000, 17000, 0, 100);  //Send Y axis data

  if(abs(default_x - data_x) >= abs(default_y - data_y)){
    Serial.println(data_x);
  }
  else{
    Serial.println(data_y);
  }
  delay(100);
}
