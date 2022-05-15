#ifndef __PRODUCT_HPP
#define __PRODUCT_HPP

#include "date.hpp"
#include "place.hpp"

#include <iostream>
#include <cstring>

const unsigned MAX_NAME_LENGTH{100};
const unsigned MAX_COMMENT_LENGTH{250};

class Product
{
private:
    char m_name[MAX_NAME_LENGTH];
    date m_expire;
    date m_entry;
    char m_manufacter[MAX_NAME_LENGTH];
    unsigned m_amount;
    place m_location;
    char m_comment[MAX_COMMENT_LENGTH];

public:
    /// Default constructor
    Product();

    /// Constructor with all parameters
    Product(char *name, date expire, date entry, char *manufacter, unsigned amount, place location, char *comment);

    /// Destructor
    ~Product();

    /// opreator=
    Product &operator=(const Product &);

    /// Print all available products
    void print();

    ///Selector
    char const* name() const { return m_name; };
    ///Selector
    date expire() const { return m_expire; };
    ///Selector
    date entry() const { return m_entry; };
    ///Selector
    char const* manufacter() const { return m_manufacter; };
    ///Selector
    unsigned amount() const { return m_amount; };
    ///Selector
    place location() const { return m_location; };
    ///Selector
    char const* comment() const { return m_comment; };

    ///Mutator
    void setName(char const*);
    ///Mutator
    void setExpire(date);
    ///Mutator
    void setEntry(date);
    ///Mutator
    void setManufacter(char const*);
    ///Mutator
    void setAmount(unsigned);
    ///Mutator
    void setLocation(place);
    ///Mutator
    void setComment(char const*);
    
    ///swap
    friend void SwapProducts(Product &, Product &);

    ///operator<<
    friend std::ostream &operator<<(std ::ostream &, const Product &);
};

///Reading from file
Product readProduct(std::istream &);

#endif