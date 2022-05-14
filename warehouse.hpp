#ifndef __WAREHOUSE_HPP
#define __WAREHOUSE_HPP

#include"date.hpp"

#include<iostream>
#include<cstring>


class Product
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
    Product();

    //Constructor with all parameters
    Product(char *name, date expire, date entry, char *manufacter, unsigned amount, place location, char *comment);
    
    //Destructor
    ~Product();

    // Print all available products
    void print();

    //Input, operator>>
    friend std::istream& operator>>(std::istream& is, Product&);
};


#endif