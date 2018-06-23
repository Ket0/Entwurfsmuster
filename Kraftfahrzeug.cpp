#include <string>
#include <iostream>

#include "Kraftfahrzeug.h"

Kraftfahrzeug::Kraftfahrzeug() : Produktname_("Polo")
{
    Kraftfahrzeug::id_ = Kraftfahrzeug::idGen_++;
    std::cout << "ctor Kraftfahrzeug\n";
}

int Kraftfahrzeug::getId()
{
	 return id_;
}
