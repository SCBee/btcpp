#ifndef __CORE_H__
#define __CORE_H__

#include <chrono>
#include <map>
#include <string>
#include <vector>

namespace CONSTANTS
{
    constexpr double PAR = 100.0;
    constexpr double TOL = 1e-16;
}  // namespace CONSTANTS

namespace core
{

    bool is_zero(const double& x);

    class Node
    {
    private:
        double _capital;
        double _price;
        double _value;
        double _not1_value;
        double _weight;
        double _issec;
        double _has_strat_children;
        double _fixed_income;
        double _bidoffer_set;
        double _bidoffer_paid;

    private:
        std::string name;
        Node* parent;
        Node* root;
        std::map<std::string, Node> children;
        std::chrono::system_clock now;
        bool stale;
        double price;
        double value;
        double notational_value;
        double weight;
        std::string full_name;
        std::vector<Node> members;
        bool fixed_income;

    private:
        std::vector<std::string> _universe_tickers;

    public:
        Node(const std::string& name,
             const Node& parent,
             const std::map<std::string, Node>& children)
        {
        }
    };

}  // namespace core

#endif  // __CORE_H__
