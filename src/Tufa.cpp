#include "Tufa.hpp"

Tufa::Tufa(std::string category, double weight, double price) 
    : m_category{category}, m_weight{weight}, m_price_per_kilo{price} {}

std::string Tufa::get_category() const {
    return m_category;
}

double Tufa::get_weight() const {
    return m_weight;
}

double Tufa::get_price_per_kilo() const {
    return m_price_per_kilo;
}

void Tufa::set_category(std::string category) {
    m_category = category;
}

void Tufa::set_weight(double weight) {
    m_weight = weight;
}

void Tufa::set_price_per_kilo(double price) {
    m_price_per_kilo = price;
}