#pragma once

#include "Node.hpp"
#include "NodeKind.hpp"

#include <map>
#include <memory>
#include <string>

class ObjectNode : public Node
{
public:
    ObjectNode()
        : Node(NodeKind::OBJECT)
    {}

    std::string print() const override;

    static std::unique_ptr<ObjectNode> make_ptr(std::map<std::string, NodePtr> data = {});

private:
    std::map<std::string, NodePtr> _data;
};