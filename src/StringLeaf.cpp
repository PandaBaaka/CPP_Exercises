#include "StringLeaf.hpp"

const std::string& StringLeaf::data() const
{
    return _data;
}

std::string StringLeaf::print() const
{
    return '"' + _data + '"';
}