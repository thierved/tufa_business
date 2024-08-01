#pragma once
#include <string>

class Tufa
{
private:
    std::string m_category;
    double m_weight{};
    double m_price_per_kilo{};

public:
    Tufa(std::string category, double weight, double price);
    void set_category(std::string category);
    void set_weight(double weight);
    void set_price_per_kilo(double price);
    std::string get_category() const;
    double get_weight() const;
    double get_price_per_kilo() const;
};