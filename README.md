[![](https://gogs.es-lab.de/attachments/f038091f-58a3-4626-8d4c-7c56954ee430)](https://www.hs-anhalt.de)

# Abstandsmessung

[![](https://img.shields.io/badge/Arduino-UNO-00BFFF.svg?style=plain)](https://store.arduino.cc/usa/arduino-uno-rev3) [![](https://img.shields.io/badge/Arduino-IDE-01DF74.svg?style=plain)](https://www.arduino.cc/en/main/software) [![](https://img.shields.io/badge/Version%20Control%20System-Git-FF8000.svg?style=plain)](https://git-scm.com/) [![](https://img.shields.io/badge/Microsoft-VSC-7401DF.svg?style=plain)](https://code.visualstudio.com/) [![](https://img.shields.io/badge/Adobe-PDF-red.svg?style=plain)](https://get.adobe.com/de/reader/) [![](https://img.shields.io/badge/Download-zip-yellow.svg?style=plain)](https://gogs.es-lab.de/Mikrocomputertechnik/Abstandsmessung/archive/master.zip)

## Inhaltsverzeichnis
1. **[Wie funktioniert der Ultraschallsensor](#1.-Wie-funktioniert-der-Ultraschallsensor)**
2. **[Versuchsaufbau](#2.-Versuchsaufbau)**
3. **[Aufgabenstellung](#3.-Aufgabenstellung)**
4. **[Literaturverzeichnis](#4.-Literaturverzeichnis)**

---

<div id='1.-Wie-funktioniert-der-Ultraschallsensor'/>

## 1. Wie funktioniert der Ultraschallsensor

Ultraschallsensoren als Abstandssensoren erkennen berührungslos Objekte in ihrem Empfangsbereich und sind in der Lage, die Entfernung vom Sensor zu diesen Objekten zu messen. Die Abstandsmessung funktioniert nach dem Prinzip der Laufzeitmessung von hochfrequenten Impulsen. Die ausgesendeten Impulse breiten sich mit Schallgeschwindigkeit im Raum aus. Treffen diese auf ein Objekt, werden die Schallimpulse reflektiert. Das so entstehende Echo wird vom Sensor wieder aufgenommen und aus der Zeitspanne zwischen Senden und Empfangen des Schallimpulses wird der Abstand zum Objekt berechnet. Das unten gezeigte Bild verdeutlicht die Funktionsweise. 

[![](https://gogs.es-lab.de/attachments/ee99df42-306e-4a8b-a38f-b42cedc72091)](https://www.microsonic.de/de/Medien/Medien/Relaunch-2015/Service/ultraschallprinzip.png)

**Bildquelle (vgl.):** [https://www.microsonic.de/de/Medien/Medien/Relaunch-2015/Service/ultraschallprinzip.png](https://www.microsonic.de/de/Medien/Medien/Relaunch-2015/Service/ultraschallprinzip.png)

Nachfolgend soll die Berechnung der Distanz (Abstand Sensor zum Objekt) genauer betrachtet werden. Als Grundlage dient die Formel für die Berechnung der Geschwindigkeit, die nach der Strecke `s` umgestellt wird. Die Geschwindigkeit `v` ist hierbei die Schallgeschwindigkeit und `t` ist die Zeit vom Sensor zum Objekt. Des Weiteren muss man beachten, dass der Schallimpuls zweimal die Distanz überwinden muss und somit die gemessene Zeit <code>&tau;</code> doppelt so groß ist wie die Zeit `t`, die der Schall vom Sensor zum Objekt benötigt. Somit ist <code>t=&tau;/2</code>.

![](https://gogs.es-lab.de/attachments/411216a5-2403-4cf8-be16-3fe394152e94)

Die Schallgeschwindigkeit `v` im idealen Gas wird mit

![](https://gogs.es-lab.de/attachments/4eb46826-8ebc-4b1a-8403-b65799f93317)

berechnet. Kappa <code>&kappa;</code> ist der Isentropenexponent (oder auch Adiabatenexponent genannt). Dieser beträgt bei trockener Luft bzw. für zweiatomige Gase (z. B. Stickstoff <code>N<sub>2</sub></code>, Wasserstoff <code>H<sub>2</sub></code> oder Sauerstoff <code>O<sub>2</sub></code>) bei Normaldruck 

![](https://gogs.es-lab.de/attachments/cf216497-6440-4cb9-b323-c327524a5195)

`R` ist die Gaskonstante mit

![](https://gogs.es-lab.de/attachments/cec44a17-b1af-4c50-b93e-01f08891ec86)

`T` ist die Lufttemperatur in Kelvin und `M` die mittlere Molmasse. Somit ergibt sich bei einer mittleren Molmasse von `M = 0,02896 kg/mol` für Stickstoff <code>N<sub>2</sub></code> und Sauerstoff <code>O<sub>2</sub></code> bei Normaltemperatur `T = 293,15 K` (20°C) eine Schallgeschwindigkeit von

![](https://gogs.es-lab.de/attachments/078955f7-25a2-410c-80d9-bc630f5114e9)

Abschließend erhält man für die Berechnung der Distanz `s` die Formel

![](https://gogs.es-lab.de/attachments/d17300b7-0fea-4ff4-bd17-00feb50bc42e)

<div class="page"/>
<div id='2.-Versuchsaufbau'/>

## 2. Versuchsaufbau

Für den Versuchsaufbau benötigen Sie folgende Module:

![](https://gogs.es-lab.de/attachments/e1b1a032-f37a-4b62-bb98-961d7f8ce812)

* Arduino Uno, 
* Base-Shield,
* Ultraschallsensor
* LED/Button

Stecken Sie das Base-Shield auf den Arduino Uno. Den Ultraschallsensor verbinden Sie mit dem Port `D2` und den LED/Button mit dem Port `D3`. 

![](https://gogs.es-lab.de/attachments/d59724fd-dcbc-4148-8316-2b9b7e9305b2)

Der Ultraschallsensor besitzt folgende Merkmale:

> Schnittstelle: Digital (1-Wire) <br>
> Versorgungsspannung: 3,2 V - 5,2 V <br>
> Versorgungsstrom: 8 mA <br>
> Ultraschallfrequenz: 40 kHz <br>
> Reichweite: 2 cm - 350 cm <br
> Auflösung: 1 cm <br>

> **Hinweis zur Datenerfassung:** Damit Sie die Daten vom Ultraschallsensor abrufen können, benötigen Sie die `Grove-Ultrasonic-Ranger-Library`, die Sie hier im Repository finden. Diese Bibliothek muss der Arduino IDE hinzugefügt werden. Eine Anleitung dazu finden Sie auf Moodle in der Anleitung „[Einführung in Arduino](https://moodle.hs-anhalt.de/pluginfile.php/137923/mod_resource/content/1/2.Einführung_in_Arduino.pdf)“. Die Bibliothek enthält auch ein Beispiel, welches Ihnen die benötigte Klasse „Ultrasonic“ und deren Funktionen erläutert. Schauen Sie sich dieses Beispiel an und übernehmen Sie die benötigten Funktionen in Ihr Programm.  

<div class="page"/>
<div id='3.-Aufgabenstellung'/>

## 3. Aufgabenstellung

In diesem Praktikum sollen Sie ein Programm schreiben, welches den ermittelten Abstand vom Ultraschallsensor erfasst, diesen über den seriellen Monitor ausgibt und in Abhängigkeit des erfassten Abstandes eine LED mit unterschiedlichen Frequenzen ansteuert. Verwenden Sie für das Programm die entsprechende Vorlage im Repository. Die LED soll mit sinkendem Abstand immer schneller blinken und bei einem sehr kurzen Abstand dauerhaft leuchten. Die genauen Blinkfrequenzen in Abhängigkeit des Abstandes entnehmen Sie den nachfolgenden Bedingungen:

> Distanz > 300 cm &rarr; 0,5 Hz,  
> 200 cm < Distanz &le; 300 cm &rarr; 1 Hz,  
> 150 cm < Distanz &le; 200 cm &rarr; 2 Hz,  
> 100 cm < Distanz &le; 150 cm &rarr; 5 Hz,  
> 50 cm < Distanz &le; 100 cm &rarr; 10 Hz,  
> 30 cm < Distanz &le; 50 cm &rarr; 25 Hz,  
> 10 cm < Distanz &le; 30 cm &rarr; 50 Hz,  
> Distanz &le; 10 cm &rarr; LED leuchtet dauerhaft.

Des Weiteren sollen Sie sich mit der Erstellung einer eigenen Unterfunktion beschäftigen. Diese Unterfunktion soll Ihnen einen Delay-Wert für die Blinkfrequenz der LED in Abhängigkeit des gemessenen Abstandes zurückgeben. Zusammenfassend ergeben sich folgende Aufgaben:

- nutzen Sie die Programmvorlage `Abstandsmessung.ino` für die Erstellung des Programms,
- erfassen Sie die ermittelte Distanz vom Ultraschallsensor `Grove Ultrasonic Ranger`,
- geben Sie den erfassten Abstand über den serielle Monitor aus,
- lassen die eine LED in Abhängigkeit der erfassten Distanz blinken (beachten Sie dabei die Bedingungen für die Blinkfrequenzen),
- legen Sie eine eigene Unterfunktion an, die Ihnen einen Delay-Wert in Abhängigkeit der gemessenen Distanz für die Blinkfrequenz zurück gibt (Übergabeparameter: Distanz, Rückgabewert: Delay),
- laden Sie zum Schluss Ihr Programm auf Git hoch und schalten Sie das entsprechende Repository dem Praktikumsleiter frei.

<div class="page"/>
<div id='4.-Literaturverzeichnis'/>

## 4. Literaturverzeichnis
&nbsp;&nbsp;&nbsp; **[1]**&nbsp; Microchip <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; *ATmega328 (Mikrocontroller) Datenblatt* <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; [http://ww1.microchip.com/downloads/en/DeviceDoc/ATmega328PB-<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Automotive-Data-Sheet-40001980B.pdf](http://ww1.microchip.com/downloads/en/DeviceDoc/ATmega328PB-Automotive-Data-Sheet-40001980B.pdf)<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Abfragedatum: 15.04.2019

&nbsp;&nbsp;&nbsp; **[2]**&nbsp; Arduino <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; *Language Reference* <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; [https://www.arduino.cc/en/Reference/HomePage](https://www.arduino.cc/en/Reference/HomePage)<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Abfragedatum: 23.10.2017

&nbsp;&nbsp;&nbsp; **[3]**&nbsp; Seeed <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; *Grove - Ultrasonic Ranger* <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; [http://wiki.seeed.cc/Grove-Ultrasonic_Ranger/](http://wiki.seeed.cc/Grove-Ultrasonic_Ranger/)<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Abfragedatum: 04.12.2017

&nbsp;&nbsp;&nbsp; **[4]**&nbsp; Nongnu <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; *Standard C Library for AVR-GCC* <br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; [http://www.nongnu.org/avr-libc/user-manual/modules.html](http://www.nongnu.org/avr-libc/user-manual/modules.html)<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Abfragedatum: 23.10.2017

---

**Hochschule Anhalt | Anhalt University of Applied Sciences | Fachbereich 6 EMW**  
**Praktikum Mikrocomputertechnik für EIT, MT und BMT des 3. & 4. Semesters**

Prof. Dr.-Ing. Ingo Chmielewski  
:e-mail: [Ingo.Chmielewski@HS-Anhalt.de ](mailto:Ingo.Chmielewski@HS-Anhalt.de)

Tobias Müller, M. Eng.  
:e-mail: [Tobias.Mueller@HS-Anhalt.de](mailto:Tobias.Mueller@HS-Anhalt.de)

Dipl. Ing. Harald Prütting  
:e-mail: [Harald.Pruetting@HS-Anhalt.de](mailto:Harald.Pruetting@HS-Anhalt.de)

 :copyright: es-lab.de, 08.10.2019