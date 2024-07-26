#include "Client.hpp"
#include <iostream>

Client::Client(std::string name) : m_name(name) {
    Client::set_weights(m_weights);
}


void Client::set_weights(std::vector<Tufa> &m_weights)
{
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter weight" << i + 1 << std::endl;
        Tufa tufa;
        std::cout << "Category ?:";
        std::cin >> tufa.category;
        std::cout << "Weight ?:";
        std::cin >> tufa.weight;
        std::cout << "Price per kilo ?:";
        std::cin >> tufa.price_per_kilo;

        m_weights.push_back(tufa);
    }
}

