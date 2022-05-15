#ifndef __WAREHOUSE_HPP
#define __WAREHOUSE_HPP

#include "product.hpp"

#include<iostream>

class warehouse
{
private:
    Product* m_products{nullptr};
    size_t m_size{0};
    size_t m_capacity{0};
    void expand(size_t);

public:
    //Default Constructor
    warehouse() = default;

    //Constructor
    explicit warehouse(size_t);

    //Copy Constructor
    warehouse(const warehouse&);

    //operator=
    warehouse &operator=(const warehouse &);

    //Destructor
    ~warehouse();

    //Print
    void print() const;

    //Push to back
    void push_back(Product);

    //Swap
    void swap(warehouse&);

    //Add product in dialogue mode
    void add();

    //Eject product in dialogue mode
    void eject();
};

#endif