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

    int  child_count() const { return _data.size(); }
    void push_back(NodePtr node);

    int height() const override;
    int node_count() const override;

private:
    std::vector<NodePtr> _data;
};