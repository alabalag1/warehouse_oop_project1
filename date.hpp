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
    //copy constructor
    date(const date &);
    // destructor
    ~date();
    
    //selectors
    unsigned year() const { return m_year; };
    unsigned month() const { return m_month; };
    unsigned day() const { return m_day; };

    //mutators
    unsigned setYear(unsigned year) { m_year = year; };
    unsigned setMonth(unsigned month) { m_month = month; };
    unsigned setDay(unsigned day) { m_day = day; };

    //input operator overload
    friend std::istream &operator>>(std::istream&, date&);

    //operator= overload
    date &operator=(const date &);
};

//output operator overload
std::ostream &operator<<(std::ostream&, const date&);

//operator<
bool operator<(const date &, const date &);

//operator<=
bool operator<=(const date &, const date &);

//operator!=
bool operator!=(const date &, const date &);

//operator ==
bool operator==(const date &, const date &);

#endif