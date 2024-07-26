#include <string>
#include <vector>

class Client {
    struct Tufa
    {
        std::string category;
        double weight{};
        double price_per_kilo{};
    };

private:
    std::string m_name;
    std::vector<Tufa> m_weights{};
    int m_prices[5]{};
    void set_weights(std::vector<Tufa> &m_weights); 

public:
    Client(std::string name);
    
    void set_prices(int m_prices[]);
};