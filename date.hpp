#ifndef __date_hpp
#define __date_hpp

#include<iostream>

class date
{
private:
    int m_year;
    int m_month;
    int m_day;

public:
    //default constructor
    date();
    //constructor with 3 parameters
    date(int year, int month, int day);
    //destructor
    ~date();
    
    //selectors
    int year() const { return m_year; };
    int month() const { return m_month; };
    int day() const { return m_day; };

    //input operator overload
    friend std::istream &operator>>(std::istream&, date&);

    //operator= overload
    date &operator=(const date &);
};

//output operator overload
std::ostream &operator<<(std::ostream&, const date&);

#endif