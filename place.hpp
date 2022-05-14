#ifndef __PLACE_HPP
#define __PLACE_HPP

#include<iostream>

struct place
{
    unsigned section;
    unsigned shelf;
    unsigned number;
};
std::ostream &operator<<(std::ostream &, const place);

#endif
