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
    //selectors
    unsigned section() const { return m_section; };
    unsigned shelf() const { return m_shelf; };
    unsigned number() const { return m_number; };

    //operator=
    place &operator=(const place &);
};

//operator<<
std::ostream &operator<<(std::ostream &, const place&);

#endif
