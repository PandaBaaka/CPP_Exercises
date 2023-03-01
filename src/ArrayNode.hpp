#pragma once

#include "Node.hpp"
#include "NodeKind.hpp"

#include <memory>
#include <string>
#include <vector>

class ArrayNode : public Node
{
public:
    ArrayNode()
        : Node(NodeKind::ARRAY)
    {}

    std::string print() const override;

    static std::unique_ptr<ArrayNode> make_ptr(std::vector<NodePtr> data = {});

private:
    std::vector<NodePtr> _data;
};