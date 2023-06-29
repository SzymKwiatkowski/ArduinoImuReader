
#include <DFRobot_WT61PC.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11);
DFRobot_WT61PC sensor(&mySerial);

void setup() {
  //Use Serial as debugging serial port 
  Serial.begin(115200);
  //Use software serial port mySerial as communication seiral port 
  mySerial.begin(9600);
}

void loop() {
  if (sensor.available()) {
    Serial.print("Acc\t"); Serial.print(sensor.Acc.X); Serial.print("\t"); Serial.print(sensor.Acc.Y); Serial.print("\t"); Serial.println(sensor.Acc.Z); //acceleration information of X,Y,Z
    Serial.print("Gyro\t"); Serial.print(sensor.Gyro.X); Serial.print("\t"); Serial.print(sensor.Gyro.Y); Serial.print("\t"); Serial.println(sensor.Gyro.Z); //angular velocity information of X,Y,Z
    Serial.print("Angle\t"); Serial.print(sensor.Angle.X); Serial.print("\t"); Serial.print(sensor.Angle.Y); Serial.print("\t"); Serial.println(sensor.Angle.Z); //angle information of X, Y, Z 
    Serial.println(" ");
  }
}
