#include"date.hpp"

#include<iostream>

date::date() :
m_year{0}, m_month{0}, m_day{0}
{
}

date::date(unsigned year, unsigned month, unsigned day) :
m_year{year}, m_month(month), m_day{day}
{
}

date::date(const date &other):
m_year{other.m_year}, m_month{other.m_month},m_day{other.m_day}
{
}


std::ostream& operator<<(std::ostream& out, const date& dt)
{
    char c{'-'};
    return out << dt.year() << c << dt.month() << c << dt.day();
}

std::istream& operator>>(std::istream& in, date& dt)
{
    char c{'-'};
    in >> dt.m_year >> c >> dt.m_month >> c >> dt.m_day;
    return in;
}

date& date::operator=(const date &other)
{
    if(*this != other)
    {
        m_year = other.m_year;
        m_month = other.m_month;
        m_day = other.m_day;
    }
    return *this;
}
bool operator!=(const date &lhs, const date &rhs)
{
    return ((lhs.year() != rhs.year()) || (lhs.month() != rhs.month()) || (lhs.day() != rhs.day()));
}

bool operator==(const date &lhs, const date &rhs)
{
    return !(lhs != rhs);
}

bool operator<(const date &lhs, const date &rhs)
{
    if(lhs.year() < rhs.year())
        return true;
        else if(lhs.year() == rhs.year())
        {
            if(lhs.month() < rhs.month())
                return true;
            else if(lhs.month() == rhs.month())
            {
                if(lhs.day() < rhs.day())
                    return true;
            }
        }
        return false;
}

bool operator<=(const date &lhs, const date &rhs)
{
    if(lhs.year() == rhs.year() && lhs.month() == rhs.month() && lhs.day() == rhs.day())
        return true;
    if (lhs.year() < rhs.year())
        return true;
        else if(lhs.year() == rhs.year())
        {
            if(lhs.month() < rhs.month())
                return true;
            else if(lhs.month() == rhs.month())
            {
                if(lhs.day() < rhs.day())
                    return true;
            }
        }
    return false;
}
