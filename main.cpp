//
//
// // Dieses Beispiel zeigt den Aufbau der Fabrikmethode zur
//   Objektgenerierung mit C++ \\
//
// Version: v0.1
//
// Author : Stefan Eickholz
// Datum:   23.06.2018
// Ort:     01010000 01101111 01110100 01110011 01100100 01100001 01101101
//
//  dBBBBBb     dBBBBP  dBBBBBBP  .dBBBBP     dBBBBb  dBBBBBb     dBBBBBBb
//      dB'    dBP.BP             BP             dBP       BB          dBP
//  dBBBP'    dBP.BP     dBP      `BBBBb    dBP dBP    dBP BB   dBPdBPdBP
// dBP       dBP.BP     dBP          dBP   dBP dBP    dBP  BB  dBPdBPdBP
//dBP       dBBBBP     dBP      dBBBBP'   dBBBBBP    dBBBBBBB dBPdBPdBP

// Sprache: C++
// Version: GNU GCC C++11
// Editor: Code::Blocks

// Import Bibliotheken
#include <iostream>

// Import Header Dateien
#include "Kraftfahrzeug.h"
#include "Kleinwagen.h"
#include "Kombi.h"
#include "Autofabrik.h"

// Namespace festlegen
using namespace std;

// Setze den ID Zaehler auf Null
int Kraftfahrzeug::idGen_ = 0;

int main()
{
    cout << "####################################################################\n\n";
    cout << "/ / / Die Fabrikmethode in C++ / / /  \n" << endl;

    cout << "Autor: Stefan Eickholz\n";
    cout << "Datum: 23.06.2018\n";
    cout << "Ort: Potsdam\n";

    cout << "\nBeschreibung:\n";
    cout << "\nDieses Programmbeispiel zeigt, wie mittels der Fabrikmethode\n";
    cout << "Objekte generiert werden koennen. Jedes Objekt wird mit einem\n";
    cout << "Zaehler versehen, damit die Anzahl der Objekt bekannt ist. Ausserdem\n";
    cout << "schreibt jede abgeleitete Klasse den Aufruf ihres Konstruktors\n";
    cout << "in die Ausgabe, damit klar ist, dass das Objekt erzeugt worden ist.\n\n";
    cout << "####################################################################\n\n";


    cout << "// Programmstart\n\n";

    // Erzeuge Fabrikobjekt
    Autofabrik autoFab_Potsdam;

    // Erzeuge Objekt der abgeleiteten Klasse Kombi
    Kraftfahrzeug* Dingo = autoFab_Potsdam.erzeugeKraftfahrzeug(autoFab_Potsdam.koi);
    cout << "Die Fahrzeug ID von Kombi Dingo lautet: " << Dingo -> getId() <<"\n"<<endl;

    // Erzeuge Objekt der abgeleiteten Klasse Kleinwagen
    Kraftfahrzeug* Speedy = autoFab_Potsdam.erzeugeKraftfahrzeug(autoFab_Potsdam.klw);
    cout << "Die Fahrzeug ID von Kleinwagen Speedy lautet: " << Speedy -> getId() << endl;

    cout << "\n// Programmende\n";

    // Beendet Programm
    return 0;
}
