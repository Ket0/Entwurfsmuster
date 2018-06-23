#ifndef KRAFTFAHRZEUG_H
#define KRAFTFAHRZEUG_H

#include <string>

class Kraftfahrzeug
{
    public:
        Kraftfahrzeug();
        virtual ~Kraftfahrzeug(){};

    // Methoden
        int getId();

    public:
        static int idGen_;
        int id_;
        std::string Produktname_;
};

#endif // KRAFTFAHRZEUG_H
