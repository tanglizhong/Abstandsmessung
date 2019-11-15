//////////////////////////////////////////////////////////////////////
//                                                                  //
// Programmname: Abstandsmessung                                    //
// Datum: 15.11.2019                                                //
// Beschreibung: In diesem Versuch soll ein Ultraschallsensor ange- //
//               steuert werden. Die gemessene Distanz in cm soll   //
//               über den seriellen Monitor ausgegeben werden. In   //
//               Abhängigkeit der Distanz wird eine LED zum Blinken //
//               gebracht. Je näher ein Objekt dem Ultraschallsen-  //
//               sor kommt, desto schneller blinkt die LED, bis sie //
//               dauerhaft leuchtet.                                //
//                                                                  //
// 1. Autor: Jing    Zhang,   4070426.                  //
// 2. Autor: Lizhong Tang , 4068443.
// 3. Autor: Yuqi Han,     4070443.
//                                                                  //
//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
//////////           Inkludierte Header-Dateien             //////////
//////////////////////////////////////////////////////////////////////

#include "Ultrasonic.h"

//////////////////////////////////////////////////////////////////////
//////////                Definierte Symbole                //////////
//////////////////////////////////////////////////////////////////////

#define LED_PIN 3       // Pin Festlegung für die LED
#define US_SENSOR 2     // Pin Festlegung für den Ultraschall-Sensor
#define BAUDRATE 9600   // Festlegung der Baudrate für UART-Verbindung

//////////////////////////////////////////////////////////////////////
//////////                Globale Variablen                 //////////
//////////////////////////////////////////////////////////////////////

// erstelle ein Objekt der Klasse "Ultrasonic" für den Zugriff auf den 
// Ultraschall-Sensor
Ultrasonic US_Sensor(US_SENSOR);

//////////////////////////////////////////////////////////////////////
//////////                  Setup-Funktion                  //////////
//////////////////////////////////////////////////////////////////////

void setup(void) {

  ////////////////////////////////////////////////////////////
  //////////               GPIO Setup               //////////
  ////////////////////////////////////////////////////////////
  Serial.begin(BAUDRATE);
  pinMode(LED_PIN,OUTPUT);
  pinMode(US_SENSOR,INPUT);
  

  return; // Beenden der Funktion
}

//////////////////////////////////////////////////////////////////////
//////////                  Loop-Funktion                   //////////
//////////////////////////////////////////////////////////////////////

void loop(void) {

  ////////////////////////////////////////////////////////////
  //////////            Lokale Variablen            //////////
  ////////////////////////////////////////////////////////////

  // erstellen Sie eine Variable für die Erfassung der Distanz
  // in Centimeter und eine Variable zur Speicherung des aktu-
  // ellen Delays für die Blinkfrequenz der LED
  long distanz;
  int zeit;

  ////////////////////////////////////////////////////////////
  //////////              Hauptprogramm             //////////
  ////////////////////////////////////////////////////////////

  // fügen Sie hier ihr Hauptprogramm ein

  distanz=US_Sensor.MeasureInCentimeters();
  Serial.print("Abstand:");
  Serial.print(distanz);
  Serial.println("cm");
  zeit=zeitwert(distanz);
  if(zeit==0) digitalWrite(LED_PIN,HIGH);
  else {
    digitalWrite(LED_PIN,LOW);

    


    digitalWrite(LED_PIN,HIGH);
    delay(zeit);
    digitalWrite(LED_PIN,LOW);
    delay(zeit);

  }
}

//////////////////////////////////////////////////////////////////////
//////////              Unterfunktionen / ISR               //////////
//////////////////////////////////////////////////////////////////////

// Erstellen Sie hier eine Unterfunktion, die ihnen einen Delay-Wert 
// zurück gibt in Abhängigkeit der gemessenen Distanz.
int zeitwert(long distanz){
  if(distanz <=10) return 0;
  if(distanz <=30) return 10;
  if(distanz <=50) return 20;
  if(distanz <=100) return 50;
  if(distanz <=150) return 100;
  if(distanz <=200) return 250;
  if(distanz <=300) return 500;
  else return 1000;



  }
