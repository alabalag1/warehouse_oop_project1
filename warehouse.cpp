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

void warehouse::push_back(Product& other)
{
    if(m_size == m_capacity)
    {
        expand(m_capacity * 2);
    }
    m_products[m_size++] = other;
}

void warehouse::print() const
{
    if(m_size == 0)
    {
        std::cout << "Empty\n";
        return;
    }

    for (size_t i{0}; i < m_size; i++)
    {
        std::cout << m_products[i] << '\n';
    }
    std::cout << '\n';
}

void warehouse::add()
{
    char *name = new char[MAX_NAME_LENGTH];
    date expire;
    date entry;
    char *manufacter = new char[MAX_NAME_LENGTH];
    unsigned amount;
    place location;
    char *comment = new char[MAX_COMMENT_LENGTH];
    std::cout << "Enter name of product: ";
    std::cin.getline(name, MAX_NAME_LENGTH);
    std::cout << "Enter expiry date in YYYY-MM-DD format: ";
    std::cin >> expire;
    std::cout << "Enter entry date in YYYY-MM-DD format: ";
    std::cin >> entry;
    std::cout << "Enter manufacter name: ";
    std::cin.clear();
    std::cin.ignore(10000,'\n');
    std::cin.getline(manufacter, MAX_NAME_LENGTH);
    std::cout << "Enter amount: ";
    std::cin >> amount;
    std::cout << "Enter comment: ";
    std::cin.clear();
    std::cin.ignore(10000,'\n');
    std::cin.getline(comment, MAX_COMMENT_LENGTH);
    
    for (size_t i = 0; i < m_size; i++)
    {
        if(((strcmp(m_products[i].name(),name) == 0)) && (m_products[i].expire() == expire))
        {
            if(m_products[i].location().number() >= MAX_SPACE)
            {
                location.setNumber(1);
                if(m_products[i].location().shelf() >= MAX_SPACE)
                {
                    location.setShelf(1);
                    location.setSection(m_products[i].location().section() + 1);
                }
                else
                {    
                    location.setShelf(m_products[i].location().shelf() + 1);
                    location.setSection(m_products[i].location().section());
                }
            }
            else
            {
                location.setNumber(m_products[i].location().number() + 1);
                location.setSection(m_products[i].location().section());
                location.setShelf(m_products[i].location().shelf());
            }
        }
    }

    if(location.number() == 0)
    {
        if(m_products[m_size].location().number() >= MAX_SPACE)
            {
                location.setNumber(1);
                if(m_products[m_size].location().shelf() >= MAX_SPACE)
                {
                    location.setShelf(1);
                    location.setSection(m_products[m_size].location().section() + 1);
                }
                else
                {    
                    location.setShelf(m_products[m_size].location().shelf() + 1);
                    location.setSection(m_products[m_size].location().section());
                }
            }
            else
            {
                location.setNumber(m_products[m_size].location().number() + 1);
                location.setSection(m_products[m_size].location().section());
                location.setShelf(m_products[m_size].location().shelf());
            }
    }

    Product temp(name, expire, entry, manufacter, amount, location, comment);
    push_back(temp);
    delete[] name;
    delete[] comment;
    delete[] manufacter;
}

void warehouse::eject()
{
    unsigned count{0};
    char *name = new char[MAX_NAME_LENGTH];
    unsigned amount;
    date min_expire(m_products[0].expire());
    date nullDate;
    place nullPlace;
    std::cout << "Enter name of product to eject: ";
    std::cin.getline(name, MAX_NAME_LENGTH);
    std::cout << "Enter amount to eject: ";
    std::cin >> amount;
    for (size_t i = 0; i < m_size; i++)
    {
        if(strcmp(m_products[i].name(), name) == 0)
        {
            count++;
        }
    }
    int indexes[count];
    int j{0};
    for (size_t i = 0; i < m_size; i++)
    {
        if(strcmp(m_products[i].name(), name) == 0)
        {
            indexes[j++] = i;
        }
    }
    for (size_t i = 1; i < count; i++)
    {
        if(m_products[indexes[i]].expire() <= min_expire)
            min_expire = m_products[indexes[i]].expire();
    }
    char c;
    for (size_t i = 0; i < m_size; i++)
    {
        if((strcmp(m_products[i].name(), name) == 0) && min_expire == m_products[i].expire())
            {
                if(amount>m_products[i].amount())
                {
                    std::cout << "Amount of product: " << m_products[i].amount();
                    std::cout << "\nDo you want to continue ejecting? (y for yes or n for no)";
                    std::cin >> c;
                    if(c=='y')
                    {
                        m_products[i].~Product();
                        m_products[i].setExpire(nullDate);
                        m_products[i].setEntry(nullDate);
                        m_products[i].setLocation(nullPlace);
                        m_products[i].setAmount(0);
                    }
                    else
                        m_products[i].setAmount(m_products[i].amount() - amount);
                }
            }
    }
    
}

/* std::ostream& writeWarehouse(std::ostream &out,const warehouse &w)
{
    return out.write(reinterpret_cast<const char *>(&w), sizeof(warehouse));
} */

/* void Write(std::ostream& out)
{
    for (size_t i = 0; i < m_size; i++)
    {
        m_products[i].writeProduct(out, m_products[i]);
    }
} */