#include "ObjectNode.hpp"

void ObjectNode::insert(std::string key, NodePtr node)
{
    _data.emplace(key, std::move(node));
}

std::string ObjectNode::print() const
{
    std::string del    = "";
    std::string result = "{";
    for (auto it = _data.begin(); it != _data.end(); ++it)
    {
        result += del;
        result += '"' + it->first + '"';
        result += ":";
        result += it->second->print();
        del = ",";
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