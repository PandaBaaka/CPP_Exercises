#pragma once

#include "InstanceCounter.hpp"
#include "NodeKind.hpp"

#include <string>

class Node;

using NodePtr = std::unique_ptr<Node>;

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
    virtual int         height() const     = 0;
    virtual int         node_count() const = 0;

private:
    NodeKind _kind;
};