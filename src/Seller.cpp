#include "Seller.hpp"

Seller::Seller(std::string name) : m_name(name) {}

void Seller::set_name(std::string name) {
    m_name = name;
}

void Seller::add_product(Tufa &tufa) {
    m_products.push_back(tufa);
}

void Seller::calculate_payment() {
    for(Tufa &t: m_products) {
        m_payment += t.get_price_per_kilo() * t.get_weight();
    }
}

std::string Seller::get_name() const {
    return m_name;
}

std::vector<Tufa> Seller::get_produts() const {
    return m_products;
}

double Seller::get_payment() const {
    return m_payment;
}