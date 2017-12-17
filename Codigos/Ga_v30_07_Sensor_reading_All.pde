/*
 *  ------ [Ga_v30_7] CH4 Sensor reading for v30  --------
 *
 *  Explanation: Turn on the Gases Board v30 and read the CH4
 *  sensor every five seconds, printing the result through the USB
 *
 *  Copyright (C) 2016 Libelium Comunicaciones Distribuidas S.L.
 *  http://www.libelium.com
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Version:           3.0
 *  Design:            David GascÃ³n
 *  Implementation:    Ahmad Saad
 */

// Se incluyen las librerías que se van a utlizar
#include <WaspSensorGas_v30.h>
#include <WaspFrame.h>

const int numPoints = 3; //Puntos para calibrar el sensor de NO2

///////////////////////SENSOR CH4//////////////////////////////////////////////
// CH4 Sensor can be connected in SOCKET_6 or SOCKET_7
CH4SensorClass CH4Sensor(SOCKET_6);

/////////////////////////////SENSOR NO2//////////////////////////////////////

// NO2 Sensor must be connected physically in SOCKET_3
NO2SensorClass NO2Sensor;

// Concentrations used in calibration process
#define POINT1_PPM_NO2 10.0   // <-- Normal concentration in air
#define POINT2_PPM_NO2 50.0
#define POINT3_PPM_NO2 100.0

// Calibration voltages obtained during calibration process (in KOHMs)
#define POINT1_RES_NO2 45.25  // <-- Rs at normal concentration in air
#define POINT2_RES_NO2 25.50
#define POINT3_RES_NO2 3.55

// Define the number of calibration points (3)

float concentrations[] = {POINT1_PPM_NO2, POINT2_PPM_NO2, POINT3_PPM_NO2};
float voltages[] =       {POINT1_RES_NO2, POINT2_RES_NO2, POINT3_RES_NO2};

///////////////////////////////CO2//////////////////////////////////////////////
// CO2 Sensor must be connected physically in SOCKET_2
CO2SensorClass CO2Sensor;

// Concentratios used in calibration process (PPM Values)
//Estas calibraciones han sido modificadas ya que el sensor no medía correctamente,
//asi que con los nuevas concentraciones calculadas se calculan nuevos vectores.
#define POINT1_PPM_CO2 350.0  //   <-- Normal concentration in air
#define POINT2_PPM_CO2 350.0
#define POINT3_PPM_CO2 1000.0
#define POINT4_PPM_CO2 3000.0

// Calibration vVoltages obtained during calibration process (Volts)
//Cada valor de voltaje corresponde a un valor de voltaje correspondiente.
#define POINT1_VOLT_CO2 0.250
#define POINT2_VOLT_CO2 0.490
#define POINT3_VOLT_CO2 0.800
#define POINT4_VOLT_CO2 1.000

// Define the number of calibration points
const int numPoints2 = 4;

float concentrations2[] = { POINT1_PPM_CO2, POINT2_PPM_CO2, POINT3_PPM_CO2, POINT4_PPM_CO2 };
float voltages2[] =       { POINT1_VOLT_CO2, POINT2_VOLT_CO2, POINT3_VOLT_CO2, POINT4_VOLT_CO2 };

/////////////////////////Temperatura ,humedad ,presión/////////////////
float temperature; // Stores the temperature in ºC
float humidity;     // Stores the realitve humidity in %RH
float pressure;    // Stores the pressure in Pa
//Se creal un booleano a para que sea la señal de interrupcion del interruptor.
//Su valor inicial es low.
bool a=0;

/////////////////
char node_ID[] = "example";


void setup()
{
  RTC.ON();
  // Setting date and time [yy:mm:dd:dow:hh:mm:ss]
  //Se utiliza para medir la hora actuar y hacer el muestreo en funcion de si es de día o de noche.
  RTC.setTime("17:12:12:03:10:21:00");

  pinMode(19, OUTPUT);

  // Configure the USB port. Se enciende el puerto
  USB.ON();
  USB.println(F("Sensor reading for v30..."));

  /////////////////////SENSOR CH4////////////////////////////////
  // Concentratios used in calibration process (in PPM)
  CH4Sensor.concentrations[POINT_1] = 100.0;  // <--- Ro value at this concentration
  CH4Sensor.concentrations[POINT_2] = 300.0 ;
  CH4Sensor.concentrations[POINT_3] = 1000.0;

  // Calibration resistances obtained during calibration process (in Kohms)
  CH4Sensor.values[POINT_1] = 230.30; // <-- Ro Resistance at 100 ppm. Necessary value.
  CH4Sensor.values[POINT_2] = 40.665; //
  CH4Sensor.values[POINT_3] = 20.300; //
  // Define the number of calibration points
  CH4Sensor.numPoints = 3;
  // Calculate the slope and the intersection of the logarithmic function
  CH4Sensor.setCalibrationPoints();
  // Switch ON and configure the Gases Board
  Gases.ON();
  // Switch ON the sensor socket
  CH4Sensor.ON();

  //////////////////////////SENSOR NO2/////////////////////////////////////
  // Calculate the slope and the intersection of the logarithmic function
  NO2Sensor.setCalibrationPoints(voltages, concentrations, numPoints);
  // Switch ON the sensor socket
  NO2Sensor.ON();

  /////////////////////////////CO2///////////////////////////////////////
  CO2Sensor.setCalibrationPoints(voltages2, concentrations2, numPoints2);
  // Switch ON the CO2 Sensor SOCKET_2
  CO2Sensor.ON();

  /////////////////////////////Temp,hum,pres/////////////////



  // Set the Waspmote ID
  frame.setID(node_ID);

}

//Este programa se ejecuta en bucle continuamente.
void loop()
{
  //////////////////////////////////////////
  // 2. Read sensors
  /////////////////////////////////////////

  ///////////////////// CH4 ///////////////////
  //Lectura del sensor de CH4
  a=0;
  float CH4Vol = CH4Sensor.readVoltage();           // Voltage value of the sensor
  float CH4Res = CH4Sensor.readResistance();        // Resistance of the sensor
  float CH4PPM = CH4Sensor.readConcentration();  // PPM value of CH4

  // PPM value of NO2
  //Lectura del sensor de NO2
  float NO2Vol = NO2Sensor.readVoltage();       // Voltage value of the sensor
  float NO2Res = NO2Sensor.readResistance();    // Resistance of the sensor
  float NO2PPM = NO2Sensor.readConcentration(); // PPM value of NO2

  // Print of the results
  USB.print(F("CH4 Sensor Voltage: "));
  USB.print(CH4Vol);
  USB.print(F(" V |"));

  // Print of the results
  USB.print(F(" CH4 Sensor Resistance: "));
  USB.print(CH4Res);
  USB.print(F(" Ohms |"));

  USB.print(F(" CH4 concentration Estimated: "));
  USB.print(CH4PPM);
  USB.println(F(" ppm"));
  USB.println();

  //////////////////NO2//////////////////
  // Print of the results
  USB.print(F("NO2 Sensor Voltage: "));
  USB.print(NO2Vol);
  USB.print(F(" V |"));

  // Print of the results
  USB.print(F(" NO2 Sensor Resistance: "));
  USB.print(NO2Res);
  USB.print(F(" Ohms |"));

  // Print of the results
  USB.print(F(" NO2 concentration Estimated: "));
  USB.print(NO2PPM);
  USB.println(F(" PPM"));
  USB.println();

  ////////////CO2/////////////////
  //LEctura del sensor de CO2
   // Voltage value of the sensor
  float CO2Vol = CO2Sensor.readVoltage();
  // PPM value of CO2
  float CO2PPM = CO2Sensor.readConcentration();

  // Print of the results
  USB.print(F("CO2 Sensor Voltage: "));
  USB.print(CO2Vol);
  USB.print(F("volts |"));

  USB.print(F(" CO2 concentration estimated: "));
  USB.print(CO2PPM);
  USB.println(F(" ppm"));
  USB.println();

  ////////////////Temp...////////////////////
  //Lectura de la temperatura, humedad y presión.
  // Read enviromental variables
  temperature = Gases.getTemperature();
  humidity = Gases.getHumidity();
  pressure = Gases.getPressure();

  // Print of the results
  USB.print(F("Temperature: "));
  USB.print(temperature);
  USB.print(F(" Celsius Degrees |"));

  USB.print(F(" Humidity : "));
  USB.print(humidity);
  USB.print(F(" %RH"));

  USB.print(F(" Pressure : "));
  USB.print(pressure);
  USB.print(F(" Pa"));
  USB.println();

    //Coge el valor del reloj de la placa
  USB.println(RTC.getTime());

  ///////////////////////////////////////////
  // 3. Create ASCII frame
  ///////////////////////////////////////////

  // Create new frame (ASCII)
  frame.createFrame(ASCII, node_ID);
  // Add CH4 PPM value
  frame.addSensor(SENSOR_GASES_CH4, CH4PPM);
  // Add VOC PPM value
  frame.addSensor(SENSOR_GASES_NO2, NO2PPM);
  // Show the frame
  frame.showFrame();


    //Condiciones para que se encienda el led. Se ponen los límites superiores a los valores normales. Los
    //inferiores se han obviado.
    //La otra condicioón es que el valor del booleano que se activa con el led sea igual a 0, es decir, el botón no este pulsado.

  if (CH4PPM >244 || NO2PPM > 10 || CO2PPM > 500 || temperature > 35 || humidity > 70 || pressure > 200000 && a==0){
     digitalWrite(19, HIGH);
  }

  //Esta es la interrupción cuando se pulsa el botón. La variable booleana a se pone a 1, y el led se apaga.

  double val=analogRead(6);
  USB.print(val);
  if (val!=1023){
    digitalWrite(19,LOW);
    bool a=1;
  }

  double tiempo = RTC.hour;
  USB.print(tiempo);

    //Si es de noche o de dia.
  if (tiempo >= 7 && tiempo <21){
    delay(6000);
  }
    else{
      delay(300000);
    }



}

