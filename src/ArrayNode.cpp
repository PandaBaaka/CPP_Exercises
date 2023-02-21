#include "ArrayNode.hpp"

std::string ArrayNode::print() const
{
    std::string result = "[";
    for (unsigned int i = 0; i < _data.size(); i++)
    {
        if (i > 0)
            result += ",";
        result += _data[i]->print();
    }
    result += ']';
    return result;
}