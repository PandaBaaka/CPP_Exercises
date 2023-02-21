#pragma once

#include "Node.hpp"
#include "NodeKind.hpp"

#include <map>
#include <string>

class ObjectNode : public Node
{
public:
    ObjectNode()
        : Node(NodeKind::OBJECT)
    {}

    std::string print() const override;

private:
    std::map<std::string, NodePtr> _data;
};