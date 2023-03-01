#include "StringLeaf.hpp"

const std::string& StringLeaf::data() const
{
    return _data;
}

std::string StringLeaf::print() const
{
    return '"' + _data + '"';
}

std::unique_ptr<StringLeaf> StringLeaf::make_ptr(const std::string& data)
{
    return std::make_unique<StringLeaf>(data);
}