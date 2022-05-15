#ifndef __PLACE_HPP
#define __PLACE_HPP

#include<iostream>

const unsigned MAX_SPACE{25};

class place
{
private:
    unsigned m_section;
    unsigned m_shelf;
    unsigned m_number;

public:
    ///Default constructor
    place();

    ///constructor with 3 parameters
    place(unsigned section, unsigned shelf, unsigned number);


    /// selector
    unsigned section() const { return m_section; };
    /// selector
    unsigned shelf() const { return m_shelf; };
    /// selector
    unsigned number() const { return m_number; };

    ///mutator
    void setSection(unsigned section) { m_section = section; };
    ///mutator
    void setShelf(unsigned shelf) { m_shelf = shelf; };
    ///mutator
    void setNumber(unsigned number) { m_number = number; };

    ///operator=
    place &operator=(const place &);

    ///operator>>
    friend std::istream &operator>>(std::istream &, place&);

};

///operator<<
std::ostream &operator<<(std::ostream &, const place&);

///operator!=
bool operator!=(const place &,const place &);

///operator==
bool operator==(const place &, const place &);

#endif
