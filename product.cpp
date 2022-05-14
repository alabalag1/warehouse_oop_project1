#include"warehouse.hpp"

#include<iostream>
#include<cstring>

Product::Product() : 
m_name{nullptr}, m_expire{}, m_entry{}, m_manufacter{nullptr}, m_amount{0}, m_location{}, m_comment{nullptr}
{}

Product::Product(char* name, date expire, date entry, char *manufacter, unsigned amount, place location, char* comment):
    m_amount{amount}, m_location{location}
{
    strcpy(m_name, name);
    strcpy(m_manufacter, manufacter);
    strcpy(m_comment, comment);
    m_expire = expire;
    m_entry = entry;
}

Product::~Product()
{
    delete[] m_name;
    delete[] m_manufacter;
    delete[] m_comment;
}


Product& Product::operator=(const Product &other)
{
    m_amount = other.m_amount;
    m_location = other.m_location;
    m_entry = other.m_entry;
    m_expire = other.m_expire;
    strcpy(m_name, other.m_name);
    strcpy(m_comment, other.m_comment);
    strcpy(m_manufacter, other.m_manufacter);
}

void Product::print()
{
    std::cout << m_name << m_expire << m_entry << m_manufacter << m_amount << m_location << m_comment;
}

std::ostream &operator<<(std ::ostream &out, const Product &p)
{
    char c{' '};
    return out << p.m_name << c << p.m_expire << c << p.m_entry << c << p.m_manufacter << c << p.m_amount << c << p.m_location << c << p.m_comment;
    //return out << p.m_name;
}
