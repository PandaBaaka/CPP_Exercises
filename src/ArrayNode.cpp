#include "ArrayNode.hpp"

void ArrayNode::push_back(NodePtr node)
{
    _data.push_back(std::move(node));
}

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

std::unique_ptr<ArrayNode> ArrayNode::make_ptr(std::vector<NodePtr> data)
{
    auto ptr   = std::make_unique<ArrayNode>();
    ptr->_data = std::move(data);
    return ptr;
}