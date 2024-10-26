#include <Ps3Controller.h>

void notify()
{
    Serial.print(Ps3.data.sensor.accelerometer.x);
    Serial.print(" ");
    Serial.print(Ps3.data.sensor.accelerometer.y);
    Serial.print(" ");
    Serial.print(Ps3.data.sensor.accelerometer.z);

    /* Uncomment the following if you also want
       to display the gryoscope data: */
    // Serial.print(" ");
    // Serial.print(Ps3.data.sensor.gyroscope.z);

    Serial.println();
}


void setup()
{
    Serial.begin(115200);
    Ps3.attach(notify);
    Ps3.begin("20:00:00:00:20:20");
}


void loop()
{

}
