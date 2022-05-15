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


void Product::setName(char* name)
{
    delete[] m_name;
    m_name = new char[strlen(name) + 1];
    strcpy(m_name, name);
}

void Product::setExpire(date expire)
{
    m_expire = expire;
}

void Product::setEntry(date entry)
{
    m_entry = entry;
}

void Product::setManufacter(char *manufacter)
{
    delete[] m_manufacter;
    m_manufacter = new char[strlen(manufacter) + 1];
    strcpy(m_manufacter, manufacter);
}

void Product::setAmount(unsigned amount)
{
    m_amount = amount;
}

void Product::setLocation(place location)
{
    m_location = location;
}

void Product::setComment(char* comment)
{
    delete[] m_comment;
    m_comment = new char[strlen(comment) + 1];
    strcpy(m_comment, comment);
}

Product readProduct(std::istream &in)
{
    Product temp;
    in.read(reinterpret_cast<char *>(&temp), sizeof(Product));
    return temp;
}
std::ostream& writeProduct(std::ostream &out,const Product & p)
{
    return out.write(reinterpret_cast<const char *>(&p), sizeof(Product));
}
