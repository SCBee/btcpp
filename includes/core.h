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
        bool _issec;
        bool _has_strat_children;
        bool _fixed_income;
        bool _bidoffer_set;
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
        bool integer_positions;

    private:
        std::vector<std::string> _universe_tickers;
        std::vector<Node> _strat_children;

    public:
        Node(const std::string& name,
             Node* parent,
             const std::map<std::string, Node>& children);

        Node* get_child(std::string key);
    };

}  // namespace core

#endif  // __CORE_H__
