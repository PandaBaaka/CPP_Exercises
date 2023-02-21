#pragma once

#include "Leaf.hpp"
#include "NodeKind.hpp"

#include <string>

class IntLeaf : public Leaf
{
public:
    IntLeaf(int data)
        : Leaf(NodeKind::INT)
        , _data { data }
    {}

    int data() const;

    std::string print() const override;

private:
    int _data = 0;
};