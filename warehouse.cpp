#include"warehouse.hpp"

#include<iostream>

Warehouse::Warehouse() : 
m_name{nullptr}, m_expire{}, m_entry{}, m_manufacter{nullptr}, m_amount{0}, m_location{}, m_comment{nullptr}
{}

Warehouse::Warehouse(char* name, date expire, date entry, char *manufacter, unsigned amount, place location, char* comment):
    m_amount{amount}, m_location{location}
{
    strcpy(m_name, name);
    strcpy(m_manufacter, manufacter);
    strcpy(m_comment, comment);
    m_expire = expire;
    m_entry = entry;
}

Warehouse::~Warehouse()
{
    delete[] m_name;
    delete[] m_manufacter;
    delete[] m_comment;
}