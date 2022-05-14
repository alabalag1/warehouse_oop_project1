#ifndef __PLACE_HPP
#define __PLACE_HPP

#include<iostream>

class place
{
private:
    unsigned m_section;
    unsigned m_shelf;
    unsigned m_number;

public:
    //Default constructor
    place();

    //constructor with 3 parameters
    place(unsigned section, unsigned shelf, unsigned number);

    //destructor
    ~place();

    // selectors
    unsigned section() const { return m_section; };
    unsigned shelf() const { return m_shelf; };
    unsigned number() const { return m_number; };

    //operator=
    place &operator=(const place &);

    //operator>>
    std::istream &operator>>(std::istream &);
};

//operator<<
std::ostream &operator<<(std::ostream &, const place&);

#endif
