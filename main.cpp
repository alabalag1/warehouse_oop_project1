#include "warehouse.hpp"

#include<ios>
#include<iostream>
#include<fstream>

using std::ios;

std::ostream& writeProduct(std::fstream &out,const Product &p)
{
    return out.write((const char *)(&p), sizeof(Product));
}

void writeProductsInSafe(std::fstream& fs, Product* products, size_t count)
{
    for (size_t i = 0; i < count; i++)
    {
        products[i].write(fs);
    }
}

std::ostream& print(std::istream& in, std::ostream& out)
{
    Product p{readProduct(in)};
    char c{' '};
    while (in)
    {
        out << p.name() << c << p.expire() << c << p.entry() << c << p.manufacter() << c << p.amount() << c << p.location() << c << p.comment();

        p = readProduct(in);  
    }
    
    return out;
}

int main(int argc, char const *argv[])
{
    warehouse ware(1);
    unsigned a{1};
    date data;
    place location;
    Product test("asdf", data, data, "az", 20, location, "ne");
    std::fstream file("testy.bin", ios::in | ios::out | ios::binary);
    unsigned count{0};
    while (a != 0)
    {
    std::cout << "1. Print all products\n2. Add product\n3. Eject product\n4. Read products from file\n0. Exit\n";
    std::cin >> a;
        if(a==1)
            ware.print();
            else if(a==2)
            {
                ware.add();
                writeProduct(file, ware.products()[count]);
            }
                else if(a==3)
                    ware.eject();
                    else if(a==4)
                        ware.readProducts(file);
    }
    file.close();
    return 0;
}
