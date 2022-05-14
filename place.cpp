#include "place.hpp"

#include<iostream>

std::ostream& operator<<(std::ostream &out, const place& loc)
{
    char c{'-'};
    return out << loc.section() << c << loc.shelf() << c << loc.number();
}

place& place::operator=(const place &other)
{
    m_number = other.m_number;
    m_shelf = other.m_shelf;
    m_section = other.m_section;
}
