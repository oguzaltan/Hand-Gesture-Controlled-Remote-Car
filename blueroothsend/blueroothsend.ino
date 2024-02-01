#include "I2Cdev.h"
#include "MPU6050.h" //Mpu6050 kütüphanesi
#include "Wire.h"

MPU6050 accelgyro; // Mpu6050 sensör tanımlama
int16_t ax, ay, az; //ivme tanımlama
int16_t gx, gy, gz; //gyro tanımlama

int default_x = 350;
int default_y = 150;

int data_x;
int data_y;
int data_s;
int data1;
void setup()
{
  Wire.begin();
  Serial.begin(9600);
  accelgyro.initialize();
}
void loop()
{
  accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz); // read data
  delay(100);
  
  data_x = map(ax, -17000, 17000, 300, 400 ); //Send X axis data
  data_y = map(ay, -17000, 17000, 100, 200);  //Send Y axis data
  
  data_s = 250;
  
  if(abs(default_x - data_x) >= 30){
    Serial.print(data_x,DEC);
    delay(800);
  }
  else if (abs(default_y - data_y) >= 30){
    Serial.print(data_y, DEC);
    delay(800);
  } else {
    Serial.print(data_s, DEC);
    delay(800);
  }
}
