# C-Einführung Eingebettete Systeme 2020/2021

Ziel dieser Übungen ist es, Ihnen den Umgang mit der Programmiersprache C zu vermitteln. Dazu sind von Ihnen selbstständig kleinere Aufgaben zu lösen.

## Programmierumgebung

[Hier](https://gitpod.io/#github.com/martin31821/es-c-intro-tasks) klicken, um die Web-Programmierumgebung zu öffnen.
Danach können sie mit dem Befehl `make taskN` die Aufgabe N kompilieren und mit `make taskN-run` die Aufgabe ausführen.

## Aufgabe 1 - Grundlagen

In `task1.c` finden Sie eine Vorlage mit einem Codeskelett. Vervollständigen Sie diese, sodass die folgenden Anforderungen erfüllt sind:

- Definieren Sie einen Datentypen `room_t` mit den Eigenschaften:
    - Name (`char* / string`)
    - Gebäude (`char* / string`)
    - Nummer (`int`)
    - Kapazität (`int`)
    - Auslastung (`int`)
- Erstellen Sie eine Prozedur `print_room`, die einen Parameter vom Typ `room_t` strukturiert ausgibt.
    - Die Ausgabe könnte beispielsweise so aussehen:
    ``` 
    Raum "${NAME}"
    |-> ID: "${Gebäude}-${Nummer}"
    --> Auslastung: ${Auslastung} / ${Kapazität}
    ``` 
- Erstellen Sie eine weitere Prozedur, die für ein gegebenes Raum-Objekt eine gegebene Anzahl an Personen ausbucht (`Auslastung + Parameter`)
- Geben Sie den Raumzustand vor und nach den Ausbuch-Operationen aus.

## Aufgabe 2 - Dreiecksausgabe

In dieser Aufgabe soll ein parametrierbares Dreieck auf einer viereckigen Fläche ausgegeben werden. Das Skelett für diese Aufgabe finden Sie in `task2.c`

- Definieren Sie eine Struktur, die einen Punkt im 2D-Raum abbildet (x, y)
    - Die X und Y Koordinaten sollten als Gleitkommazahl (`float/double`)
- Erstellen Sie eine Funktion, die für vier gegebenen Punkte ermittelt, ob der vierte Punkt innerhalb des durch die ersten drei Punkte aufgespannten Dreiecks liegt.
    - z.B. `int check_point(point_t *triangle, point_t point_to_check)`
- Erstellen Sie eine Funktion, die für ein gegebenes Dreieck sowie eine gegebene Auflösung das Dreieck ausgibt.
  - Für jeden Bildpunkt in x/y-Richtung ist jeweils ein ASCII-Zeichen auszugeben, und zwar ein `.` für 'außerhalb des Dreiecks' und ein `=` für 'innerhalb des Dreiecks'
- Testen Sie Ihre Implementierung mit verschiedenen Eingabedaten.
- Eine beispielhafte Ausgabe ist im folgenden Bild zu sehen.

## Aufgabe 3 - Bitmanipulation

In eingebetteten Systemen kommt es oft vor, dass einzelne Werte durch Bitbreiten kleiner als ein Byte repräsentiert werden, z.B. durch einzelne Bits. Daher ist es wichtig, auf einzelne Bits zugreifen und diese manipulieren zu können. Die Vorlage dazu ist in `task3.c` zu finden.

- Erstellen Sie eine Funktion, die für eine Zahl die Nummer der führenden 0en (binär) ausgibt.
- Erstellen Sie eine Funktion, die überprüft, ob das Bit 6 in einer Zahl gesetzt ist
    - Falls das Bit gesetzt ist, invertieren sie die Zahl und löschen anschließend bit 12
    - Andernfalls setzen Sie bit 3-8
