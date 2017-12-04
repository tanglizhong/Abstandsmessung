# Versuch 2: Abstandsmessung

[![](https://img.shields.io/badge/Arduino-UNO-00BFFF.svg?style=plastic)](https://store.arduino.cc/usa/arduino-uno-rev3) [![](https://img.shields.io/badge/Arduino-IDE-01DF74.svg?style=plastic)](https://www.arduino.cc/en/main/software) [![](https://img.shields.io/badge/Version%20Control%20System-Git-FF8000.svg?style=plastic)](https://git-scm.com/) [![](https://img.shields.io/badge/Microsoft-VSC-7401DF.svg?style=plastic)](https://code.visualstudio.com/) [![](https://img.shields.io/badge/Adobe-PDF-red.svg?style=plastic)](https://get.adobe.com/de/reader/) [![](https://img.shields.io/badge/Download-zip-yellow.svg?style=plastic)](http://es-lab.de:60085/Maschinenprogrammierung/V2.Abstandsmessung/archive/master.zip)

## <p>&#x1F4DC; Inhaltsverzeichnis</p>
1. **[Wie funktioniert der Ultraschallsensor](#Sensor)**
2. **[Versuchsaufbau](#Versuchsaufbau)**
3. **[Aufgabenstellung](#Aufgabenstellung)**
4. **[Literaturverzeichnis](#Literaturverzeichnis)**

>**Hinweis:** Wenn Sie dieses Repository downloaden möchten, können Sie es direkt als [ZIP](http://es-lab.de:60085/Maschinenprogrammierung/V2.Abstandsmessung/archive/master.zip)-Datei herunterladen, oder mit Hilfe des Git-Repository-Links auf Ihren Rechner klonen. 
>**<p>&#x2601; Git-Repository-Link:<br> http://es-lab.de:60085/Maschinenprogrammierung/V2.Abstandsmessung</p>**

---

<div id='Sensor'/>

##  <p>&#x1F50A; 1. Wie funktioniert der Ultraschallsensor</p>



<div id='Versuchsaufbau'/>

##  <p>&#x1F6E0; 2. Versuchsaufbau</p>

Im Praktikum bekommen Sie ein Base Shield, Breadboard und Verbindungskabel, sowie die Bauelemente: Widerstand und LED, ausgehändigt. Das Base Shield ist eine Adapterplatine und wird auf den Arduino UNO gesteckt. Die Adapterplatine verknüpft die GPIO-Pins des Arduino UNO zu entsprechenden Sensor-Anschlussterminals. Über diese können später Sensoren, wie der Ultraschallsensor, angeschlossen werden.

![](http://es-lab.de:60085/attachments/fd90931f-dd5f-48ea-bafe-916ea6e8b4a3)

Stecken Sie das Base Shield auf den Arduino. Die ausgehändigten Bauteile sind wie im unten stehenden Bild aufzubauen bzw. anzuordnen. Der Ultraschallsensor wird mit dem Port `D2` und die LED mit dem GPIO-Pin `3` verbunden.

![](http://es-lab.de:60085/attachments/32676c50-72e8-4cae-a99a-8e87ce3955ac)

Der unten stehende Schaltplan verdeutlicht den Versuchsaufbau. 

![](http://es-lab.de:60085/attachments/b741bebf-1464-4e1a-8950-f658fbf63f64)

Beachten Sie beim Aufbau die Polarität der LED. Anderenfalls wird die LED nicht leuchten. Die unten stehende Abbildung verdeutlicht den Aufbau der LED sowie dessen Polarität bzw. Stromrichtung.

[![](http://es-lab.de:60085/attachments/16e5c297-ab46-4f6a-8032-0ab0dc5ddcab)](http://letsgoingwiki.reutlingen-university.de/mediawiki/images/thumb/8/88/Sensor_CH13_LED_aufbau.jpg/800px-Sensor_CH13_LED_aufbau.jpg)

**Bildquelle:** [http://letsgoingwiki.reutlingen-university.de/mediawiki/images/thumb/8/88/Sensor_CH13_LED_aufbau.jpg/800px-Sensor_CH13_LED_aufbau.jpg](http://letsgoingwiki.reutlingen-university.de/mediawiki/images/thumb/8/88/Sensor_CH13_LED_aufbau.jpg/800px-Sensor_CH13_LED_aufbau.jpg)

<div id='Aufgabenstellung'/>

##  <p>&#x26A0; 3. Aufgabenstellung</p>



<div id='Literaturverzeichnis'/>

## <p>&#x1F4DA; 4. Literaturverzeichnis</p>
&nbsp;&nbsp;&nbsp; **[1]**&nbsp; Atmel <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; *ATmega328 (Mikrocontroller) Datenblatt* <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; [http://www.atmel.com/images/Atmel-8271-8-bit-AVR-Microcontroller-ATmega48A-48PA-88A-88PA-<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;168A-168PA-328-328P_datasheet_Complete.pdf](http://www.atmel.com/images/Atmel-8271-8-bit-AVR-Microcontroller-ATmega48A-48PA-88A-88PA-168A-168PA-328-328P_datasheet_Complete.pdf)<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Abfragedatum: 23.10.2017

&nbsp;&nbsp;&nbsp; **[2]**&nbsp; Arduino <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; *Language Reference* <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; [https://www.arduino.cc/en/Reference/HomePage](https://www.arduino.cc/en/Reference/HomePage)<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Abfragedatum: 23.10.2017

&nbsp;&nbsp;&nbsp; **[3]**&nbsp; Seeed <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; *Grove - Ultrasonic Ranger* <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; [http://wiki.seeed.cc/Grove-Ultrasonic_Ranger/](http://wiki.seeed.cc/Grove-Ultrasonic_Ranger/)<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Abfragedatum: 04.12.2017

&nbsp;&nbsp;&nbsp; **[4]**&nbsp; Nongnu <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; *Standard C Library for AVR-GCC* <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; [http://www.nongnu.org/avr-libc/user-manual/modules.html](http://www.nongnu.org/avr-libc/user-manual/modules.html)<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Abfragedatum: 23.10.2017

---

**Hochschule Anhalt | Anhalt University of Applied Sciences | Fachbereich 6 EMW <br> Praktikum Maschinenprogrammierung EIT, MT und BMT 3. Semester**

<p>Prof. Dr. Ingo Chmielewski<br> 
<a href="mailto:Ingo.Chmielewski@HS-Anhalt.de">&#x1F4E7; Ingo.Chmielewski@HS-Anhalt.de</a></p>

<p>Tobias Müller, B. Eng.<br>
<a href="mailto:Tobias.Mueller@Student.HS-Anhalt.de">&#x1F4E7; Tobias.Mueller@Student.HS-Anhalt.de</a></p>

<p>&#x00A9; es-lab.de, 04.12.2017</p>