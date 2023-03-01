#pragma once

#include "Leaf.hpp"
#include "Node.hpp"
#include "NodeKind.hpp"

#include <memory>
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

    static std::unique_ptr<StringLeaf> make_ptr(const std::string& data);

private:
    std::string _data;
};