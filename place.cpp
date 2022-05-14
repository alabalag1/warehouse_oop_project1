#include "place.hpp"

#include<iostream>

std::ostream& operator<<(std::ostream &out, const place loc)
{
    return out << loc.section << loc.shelf << loc.number;
}