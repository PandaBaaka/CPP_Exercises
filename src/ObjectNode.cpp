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

std::unique_ptr<ObjectNode> ObjectNode::make_ptr(std::map<std::string, NodePtr> data)
{
    auto ptr   = std::make_unique<ObjectNode>();
    ptr->_data = std::move(data);
    return ptr;
}