#include"date.hpp"

#include<iostream>

date::date() :
m_year{0}, m_month{0}, m_day{0}
{}

date::date(int year, int month, int day) :
m_year{year}, m_month(month), m_day{day}
{}


std::ostream& operator<<(std::ostream& out, const date& dt)
{
    return out << dt.year() << "-" << dt.month() << "-" << dt.day();
}

std::istream& operator>>(std::istream& in, date& dt)
{
    char c{'-'};
    in >> dt.m_year >> c >> dt.m_month >> c >> dt.m_day;
    return in;
}

date& date::operator=(const date &other)
{
    m_year = other.m_year;
    m_month = other.m_month;
    m_day = other.m_day;
}
