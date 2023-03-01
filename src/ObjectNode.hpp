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

    int  child_count() const { return _data.size(); }
    void insert(std::string key, NodePtr node);

private:
    std::map<std::string, NodePtr> _data;
};