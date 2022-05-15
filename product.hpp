#ifndef __PRODUCT_HPP
#define __PRODUCT_HPP

#include "date.hpp"
#include "place.hpp"

#include <iostream>
#include <cstring>

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
    // Default constructor
    Product();

    // Constructor with all parameters
    Product(char *name, date expire, date entry, char *manufacter, unsigned amount, place location, char *comment);

    // Destructor
    ~Product();

    // opreator=
    Product &operator=(const Product &);

    // Print all available products
    void print();

    // operator>>
    //friend std::istream &operator>>(std::istream &is, Product &);

    //Selectors
    char* name() { return m_name; };
    date expire() { return m_expire; };
    date entry() { return m_entry; };
    char *manufacter() { return m_manufacter; };
    unsigned amount() { return m_amount; };
    place location() { return m_location; };
    char *comment() { return m_comment; };

    //Mutators
    void setName(char*);
    void setExpire(date);
    void setEntry(date);
    void setManufacter(char*);
    void setAmount(unsigned);
    void setLocation(place);
    void setComment(char*);
    
    //operator<<
    friend std::ostream &operator<<(std ::ostream &, const Product &);
};


#endif