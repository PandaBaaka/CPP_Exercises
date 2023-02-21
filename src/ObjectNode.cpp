#include "ObjectNode.hpp"

std::string ObjectNode::print() const
{
    std::string result = "{";
    for (const auto& key : _data)
    {
        // ...
    }
    result += '}';
    return result;
}