#include"product.hpp"
#include"date.hpp"
#include"warehouse.hpp"
#include"place.hpp"


#include<iostream>
#include<cstring>
#include<fstream>

Product::Product() : 
m_name{""}, m_expire{}, m_entry{}, m_manufacter{""}, m_amount{0}, m_location{}, m_comment{""}
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
    char c{' '};
    std::cout << m_name << c << m_expire << c << m_entry << c << m_manufacter << c << m_amount << c << m_location << c << m_comment;
}

std::ostream &operator<<(std ::ostream &out, const Product &p)
{
    char c{' '};
    return out << p.m_name << c << p.m_expire << c << p.m_entry << c << p.m_manufacter << c << p.m_amount << c << p.m_location << c << p.m_comment;
    //return out << p.m_name;
}

/* std::istream &operator>>(std::istream &in, Product &p)
{
    char c{'\n'};
    //return (in >> p.m_name >> c >> p.m_expire >> c >> p.m_entry >> c >> p.m_manufacter >> c >> p.m_amount >> p.m_location >> c).ignore().getline(p.m_comment,MAX_COMMENT_LENGTH);
    in.clear();
    in.ignore();
    in.getline(p.m_name, MAX_NAME_LENGTH,'\n');
    in >> c >> p.m_expire >> c >> p.m_entry;
    in.ignore(10000,c);
    in.getline(p.m_manufacter, MAX_NAME_LENGTH);
    in >> c >> p.m_amount;
    in.ignore(10000, c);
    in.getline(p.m_comment, MAX_COMMENT_LENGTH);
    return in;
}
 */
void Product::setName(char const* name)
{
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

void Product::setManufacter(char const* manufacter)
{

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

void Product::setComment(char const* comment)
{
    strcpy(m_comment, comment);
}

void Product::write(std::fstream& fs) const 
{
    fs.write((char const*)this, sizeof(Product));
}

void Product::read(std::fstream& fs)
{
    fs.read((char*)this, sizeof(Product));
}

void SwapProducts(Product &lhs, Product &rhs)
{
    using std::swap;
    swap(lhs.m_name, rhs.m_name);
    swap(lhs.m_entry, rhs.m_entry);
    swap(lhs.m_expire, rhs.m_expire);
    swap(lhs.m_manufacter,rhs.m_manufacter);
    swap(lhs.m_location, rhs.m_location);
    swap(lhs.m_amount, rhs.m_amount);
    swap(lhs.m_comment, rhs.m_comment);
}

Product readProduct(std::istream& in)
{
    Product temp;
    in.read(reinterpret_cast<char *>(&temp), sizeof(Product));
    return temp;
}
