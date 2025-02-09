/***************************************************
 ZE07 CO Sensor
  
 ***************************************************
 This example reads the concentration of CO in air by DAC mode.
 
 Created 2018-01-03
 By Valentin
 
 GNU Lesser General Public License.
 See <http://www.gnu.org/licenses/> for details.
 All above must be included in any redistribution
 ****************************************************/
 
 /***********Notice and Trouble shooting***************
 1. This code is tested on Arduino Uno with Arduino IDE 1.0.5 r2.
 2. In order to protect the sensor, do not touch the white sensor film on the sensor module, 
 and high concentration of Hydrogen sulfide, hydrogen, methanol, ethanol should be avoided. 
 3. Please do not use the modules in systems which related to human being’s safety.
 ****************************************************/

#include <SoftwareSerial.h>
#include <ZE07CO_Sensor.h>

#define SensorAnalogPin 37		//this pin read the analog voltage from the CO sensor
#define VREF	2.1				//voltage on AREF pin

ZE07CO_Sensor ZE07CO(SensorAnalogPin,VREF);

void setup()
{
    Serial.begin(9600);
}
void loop()
{  
    Serial.print(ZE07CO.dacReadPPM());
    Serial.println("ppm");
    delay(1000);
}
