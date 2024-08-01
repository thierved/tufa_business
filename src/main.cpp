#include <iostream>
#include "Seller.hpp"

int main()
{

    Seller s{"Bocar Diao"};

    Tufa t("GG", 125.9, 3000);
    Tufa t1("G", 55.2, 2500);
    Tufa t2("MG", 51.9, 1500);
    Tufa t3("M", 36, 1200);
    Tufa t4("B", 25, 1000);

    s.add_product(t1);
    s.add_product(t2);
    s.add_product(t);
    s.add_product(t3);
    s.add_product(t4);

    s.calculate_payment();

    for (Tufa &t : s.get_produts())
    {
        std::cout << t.get_category() << std::endl;
        std::cout << t.get_weight() << std::endl;
        std::cout << t.get_price_per_kilo() << std::endl;
    }

    std::cout << "Amount : " << s.get_payment() << std::endl;

    return 0;
}