#include"warehouse.hpp"

#include<iostream>


warehouse::warehouse(size_t capacity):
    m_products{new Product[capacity]}, m_size{0}, m_capacity{capacity}
{ 
}


warehouse::~warehouse()
{
    delete[] m_products;
}

warehouse::warehouse(const warehouse& other):
m_products{new Product[other.m_capacity]}, m_size{other.m_size}, m_capacity{other.m_capacity}
{
    std::copy(other.m_products, other.m_products + other.m_size, m_products);
}

warehouse& warehouse::operator=(const warehouse& other)
{
    warehouse copy{other};
    swap(copy);
    return *this;
}

void warehouse::swap(warehouse& other)
{
    using std::swap;
    swap(m_products, other.m_products);
    swap(m_capacity, other.m_capacity);
    swap(m_size, other.m_size);
}

void warehouse::expand(size_t capacity)
{
    m_capacity = capacity;
    Product *temp{new Product[m_capacity]};
    std::copy(m_products, m_products + m_size, temp);
    delete[] m_products;
    m_products = temp;
}

void warehouse::push_back(Product other)
{
    if(m_size == m_capacity)
    {
        expand(m_capacity * 2);
    }
    m_products[m_size++] = other;
}
