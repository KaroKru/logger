#include <iostream>
#include "Calculator.hpp"

int main()
{
    std::cout << "provide two values " << std::endl;
    float first;
    float second;
    std::cin >> first;
    std::cin >> second;

    Calculator calc{first, second};
    std::cout << "add " << calc.addNumbers() << std::endl;
    std::cout << "minus " << calc.subtractionNumbers() << std::endl;
    std::cout << "multiple " << calc.multiplicationNumbers() << std::endl;
    std::cout << "divider " << calc.dividerNumbers() << std::endl;

    return 0;
}