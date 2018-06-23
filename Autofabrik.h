#ifndef AUTOFABRIK_H
#define AUTOFABRIK_H

#include <string>

#include <iostream>

#include "Kraftfahrzeug.h"
#include "Kleinwagen.h"
#include "Kombi.h"
#include "Autofabrik.h"

class Autofabrik
{
    public:
        enum Produktart {
              klw,
              koi,
        };

        static Kraftfahrzeug* erzeugeKraftfahrzeug(Produktart type) {
            switch (type) {
                case klw:
                    return new Kleinwagen();
                case koi:
                    return new Kombi();
            }
            throw "Ungueltiger Produkttyp.";
        }
};

#endif // AUTOFABRIK_H
