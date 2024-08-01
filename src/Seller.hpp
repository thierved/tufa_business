#pragma once
#include <string>
#include <vector>
#include "Tufa.hpp"

class Seller
{
private:
    std::string m_name{};
    std::vector<Tufa> m_products{};
    double m_payment{};

public:
    Seller(std::string name);
    void set_name(std::string name);
    void add_product(Tufa &tufa);
    void calculate_payment();
    std::string get_name() const;
    std::vector<Tufa> get_produts() const;
    double get_payment() const;
};