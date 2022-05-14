#include"warehouse.hpp"

#include<iostream>

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

/* std::istream& operator>>(std::istream& is, Product& product) {
    return (is >> product.m_amount >> product.m_expire >> product.m_entry >> product.m_location
} */

void Product::print()
{
    std::cout << m_name << m_expire << m_entry << m_manufacter << m_amount << m_location << m_comment;
}