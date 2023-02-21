#pragma once

#include "Leaf.hpp"
#include "NodeKind.hpp"

#include <string>

class StringLeaf : public Leaf
{
public:
    StringLeaf(std::string data)
        : Leaf(NodeKind::STRING)
        , _data { data }
    {}

    const std::string& data() const;

    std::string print() const override;

private:
    std::string _data;
};