#include <cmath>

#include "core.h"

namespace core
{
    bool isZero(const double& x)
    {
        return std::abs(x) < CONSTANTS::TOL;
    }

    Node::Node(const std::string& name,
               Node* parent,
               const std::map<std::string, Node>& children)
    {
        this->name = name;

        // strategy children helpers
        this->_has_strat_children = false;

        if (parent == nullptr) {
            this->parent = this;
            this->root   = this;

            // default: all positions are integers
            this->integer_positions = true;
        }
        else {
            this->parent = parent;
        }
    }
    Node* Node::get_child(std::string key)
    {
        if (this->children.count(key)) {
            return &this->children[key];
        }
        else {
            return nullptr;
        }
    }
}  // namespace core
