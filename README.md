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

Sie sollen ein Programm schreiben, welches den ermittelten Abstand vom Ultraschallsensor erfasst und diesen über den seriellen Monitor ausgibt. Verwenden Sie für das Programm die entsprechende Programmvorlage im Repository. Des Weiteren soll eine LED in Abhängigkeit des Abstandes angesteuert werden. Die LED soll dabei mit sinkendem Abstand immer schneller blinken und bei einem sehr kurzen Abstand dauerhaft leuchten. Die genauen Blinkfrequenzen in Abhängigkeit des Abstandes entnehmen Sie den nachfolgenden Bedingungen:

> Distanz > 300 cm &rarr; 0,5 Hz, <br>
> 200 cm < Distanz &le; 300 cm &rarr; 1 Hz, <br>
> 150 cm < Distanz &le; 200 cm &rarr; 2 Hz, <br>
> 100 cm < Distanz &le; 150 cm &rarr; 5 Hz, <br>
> 50 cm < Distanz &le; 100 cm &rarr; 10 Hz, <br>
> 30 cm < Distanz &le; 50 cm &rarr; 25 Hz, <br>
> 10 cm < Distanz &le; 30 cm &rarr; 50 Hz, <br>
> Distanz &le; 10 cm &rarr; LED leuchtet dauerhaft.

Des Weiteren sollen Sie sich mit der Erstellung einer eigenen Unterfunktion beschäftigen. Diese Unterfunktion soll Ihnen einen Delay-Wert für die Blinkfrequenz der LED in Abhängigkeit des gemessenen Abstandes zurückgeben. Zusammenfassend ergeben sich folgende Aufgaben:

- nutzen Sie die Programmvorlage `V2.Abstandsmessung.ino` für die Erstellung des Programms,
- erfassen Sie die ermittelte Distanz vom Ultraschallsensor `Grove Ultrasonic Ranger`,
- geben Sie den erfassten Abstand über den serielle Monitor aus,
- lassen die eine LED in Abhängigkeit der erfassten Distanz blinken (beachten Sie dabei die Bedingungen für die Blickfrequenzen),
- legen Sie eine eigene Unterfunktion an, die Ihnen einen Delay-Wert in Abhängigkeit der gemessenen Distanz für die Blinkfrequenz zurück gibt (Übergabeparameter: Distanz, Rückgabewert: Delay),
- Übergabe des fertigen Programms an den Praktikumsleiter.

**Hinweis zur Datenerfassung:** Damit Sie die Daten vom Ultraschallsensor abrufen können, benötigen Sie die `Grove-Ultrasonic-Ranger-Library`, die Sie hier im Repository finden. Diese Bibliothek muss der Arduino IDE hinzugefügt werden. Eine Anleitung Dazu finden Sie im Repository „[Praktikumsunterlagen und Praktikumsinformationen](http://es-lab.de:60085/Maschinenprogrammierung)“ in der Präsentation „[Einführung in Arduino](http://es-lab.de:60085/Maschinenprogrammierung/Praktikumsunterlagen_und_Praktikumsinformationen/src/master/2.%20Einf%c3%bchrung%20in%20Arduino.pdf)“.  Die Bibliothek enthält auch ein Beispiel, welches Ihnen die benötigte Klasse „Ultrasonic“ und deren Funktionen erläutert. Schauen Sie sich dieses Beispiel an und übernehmen Sie die benötigten Funktionen in Ihr Programm.  

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