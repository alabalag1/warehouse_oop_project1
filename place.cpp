#include "place.hpp"

#include<iostream>


place::place() :
m_section{0}, m_shelf{0}, m_number{0}
{
}

place::place(unsigned section, unsigned shelf, unsigned number) :
m_section{section}, m_shelf{shelf}, m_number{number}
{
}

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

std::istream& place::operator>>(std::istream &in)
{
    char c{'-'};
    return in >> m_section >> c >> m_shelf >> c >> m_number;
}
