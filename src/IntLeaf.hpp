#pragma once

#include "Leaf.hpp"
#include "Node.hpp"
#include "NodeKind.hpp"

#include <memory>
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

    static std::unique_ptr<IntLeaf> make_ptr(int data);

private:
    int _data = 0;
};