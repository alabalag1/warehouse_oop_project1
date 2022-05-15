#include"product.hpp"
#include"date.hpp"
#include"warehouse.hpp"
#include"place.hpp"


#include<iostream>
#include<cstring>

Product::Product() : 
m_name{nullptr}, m_expire{}, m_entry{}, m_manufacter{nullptr}, m_amount{0}, m_location{}, m_comment{nullptr}
{}

Product::Product(char* name, date expire, date entry, char *manufacter, unsigned amount, place location, char* comment):
    m_amount{amount}, m_location{location}
{
    m_name = new char[MAX_NAME_LENGTH];
    strcpy(m_name, name);
    m_manufacter = new char[MAX_NAME_LENGTH];
    strcpy(m_manufacter, manufacter);
    m_comment = new char[MAX_COMMENT_LENGTH];
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
    if(this != &other)
    {
        m_amount = other.m_amount;
        m_location = other.m_location;
        m_entry = other.m_entry;
        m_expire = other.m_expire;
        setName(other.m_name);
        setManufacter(other.m_manufacter);
        setComment(other.m_comment);
    }
    return *this;
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

std::istream &operator>>(std::istream &in, Product &p)
{
    char c{' '};
    return in >> p.m_name >> c >> p.m_expire >> c >> p.m_entry >> c >> p.m_manufacter >> c >> p.m_amount >> p.m_location >> c >> p.m_comment;
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


