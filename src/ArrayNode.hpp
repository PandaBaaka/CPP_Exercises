#pragma once

#include "Node.hpp"
#include "NodeKind.hpp"

#include <string>
#include <vector>

class ArrayNode : public Node
{
public:
    ArrayNode()
        : Node(NodeKind::ARRAY)
    {}

    std::string print() const override;

private:
    std::vector<NodePtr> _data;
};