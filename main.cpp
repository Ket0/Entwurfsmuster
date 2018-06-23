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
//

#include <iostream>
#include "Kraftfahrzeug.h"
#include "Kleinwagen.h"
#include "Kombi.h"
#include "Autofabrik.h"

using namespace std;

int Kraftfahrzeug::idGen_ = 0;

int main()
{
    cout << "Fabrikmethode C++" << endl;

    // Erzeuge Fabrikobjekt
    Autofabrik autoFab_Potsdam;

    // Erzeuge Objektklasse mit Fabrik
    Kraftfahrzeug* Dingo = autoFab_Potsdam.erzeugeKraftfahrzeug(autoFab_Potsdam.koi);

    return 0;
}
