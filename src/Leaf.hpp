#pragma once

#include "Node.hpp"

class Leaf : public Node
{
protected:
    Leaf(NodeKind kind)
        : Node(kind)
    {}

public:
    virtual ~Leaf() {}
    int height() const override { return 0; }
    int node_count() const override { return 1; }
};