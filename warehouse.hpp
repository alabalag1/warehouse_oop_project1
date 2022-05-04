#ifndef __WAREHOUSE_HPP
#define __WAREHOUSE_HPP

#include"date.hpp"

#include<iostream>
#include<cstring>


struct place
{
    unsigned section;
    unsigned shelf;
    unsigned number;
};

class Warehouse
{
private:
    char *m_name;
    date m_expire;
    date m_entry;
    char *m_manufacter;
    unsigned m_amount;
    place m_location;
    char *m_comment;

public:
    //Default constructor
    Warehouse();

    //Constructor with all parameters
    Warehouse(char *name, date expire, date entry, char *manufacter, unsigned amount, place location, char *comment);
    
    //Destructor
    ~Warehouse();
};


#endif