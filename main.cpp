#include "warehouse.hpp"

#include<ios>
#include<iostream>
#include<fstream>

Product readProduct(std::istream &in)
{
    Product temp;
    in.read(reinterpret_cast<char *>(&temp), sizeof(Product));
    return temp;
}

std::ostream& writeProduct(std::ostream &out,const Product & p)
{
    return out.write(reinterpret_cast<const char *>(&p), sizeof(Product));
}


int main(int argc, char const *argv[])
{

    warehouse ware(2);
    ware.add();
    ware.add();
    std::ofstream of("testy.txt");
    for (size_t i = 0; i < ware.size(); i++)
    {
        of << ware.products()[i] << '\n';
    }

    of.close();
    return 0;
    
}
