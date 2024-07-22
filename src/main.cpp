#include <iostream>
#include <string>
#include <map>

void get_weights(double weights[]);
void print_weights(const std::map<std::string, double> &weights);

int main() {

    double weights[5]{};
    get_weights(weights);
    std::map<std::string, double> named_weights{};

    named_weights.emplace("GG", weights[0]);
    named_weights.emplace("G", weights[1]);
    named_weights.emplace("MG", weights[2]);
    named_weights.emplace("M", weights[3]);
    named_weights.emplace("B", weights[4]);

    
    print_weights(named_weights);

    return 0;
}

void get_weights(double weights[]) {
    for(int i = 1; i <= 5; i++) {
        std::cout << "Enter weight " << i << std::endl;
        std::cin >> weights[i-1];
    }
} 

void print_weights(const std::map<std::string, double> &weights) {
    for(const auto &el : weights) {
        std::cout << el.first << " : " << el.second << std::endl;
    }   
}