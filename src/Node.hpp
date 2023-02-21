#pragma once

#include "InstanceCounter.hpp"
#include "NodeKind.hpp"

#include <string>

class Node : public InstanceCounter
{
protected:
    Node(NodeKind kind)
        : _kind { kind }
    {}

public:
    virtual ~Node() {}
    virtual std::string print() const = 0;
    NodeKind            kind() const { return _kind; }

private:
    NodeKind _kind;
};