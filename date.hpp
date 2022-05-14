#ifndef __date_hpp
#define __date_hpp

#include<iostream>

class date
{
private:
    unsigned m_year;
    unsigned m_month;
    unsigned m_day;

public:
    //default constructor
    date();
    //constructor with 3 parameters
    date(unsigned year, unsigned month, unsigned day);
    //destructor
    ~date();
    
    //selectors
    unsigned year() const { return m_year; };
    unsigned month() const { return m_month; };
    unsigned day() const { return m_day; };

    //input operator overload
    friend std::istream &operator>>(std::istream&, date&);

    //operator= overload
    date &operator=(const date &);
};

//output operator overload
std::ostream &operator<<(std::ostream&, const date&);

//bool operator!=
bool operator!=(const date &, const date &);

#endif