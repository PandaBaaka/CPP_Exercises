#include "IntLeaf.hpp"

int IntLeaf::data() const
{
    return _data;
}

std::string IntLeaf::print() const
{
    return std::to_string(_data);
}

std::unique_ptr<IntLeaf> IntLeaf::make_ptr(int data)
{
    return std::make_unique<IntLeaf>(data);
}