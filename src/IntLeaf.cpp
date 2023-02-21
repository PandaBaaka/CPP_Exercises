#include "IntLeaf.hpp"

int IntLeaf::data() const
{
    return _data;
}

std::string IntLeaf::print() const
{
    return std::to_string(_data);
}