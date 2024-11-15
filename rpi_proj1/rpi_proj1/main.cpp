#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    double a, b;
    char op;

    std::cout << "Enter calculation (e.g., 5 + 3): ";
    std::cin >> a >> op >> b;

    try {
        switch (op) {
        case '+': std::cout << "Result: modification 14 nov 1: " << calc.add(a, b) << std::endl; 
            break;
        case '-': std::cout << "Result: " << calc.subtract(a, b) << std::endl; 
            break;
        case '*': std::cout << "Result: " << calc.multiply(a, b) << std::endl; 
            break;
        case '/': std::cout << "Result: " << calc.divide(a, b) << std::endl; 
            break;
        default: std::cerr << "Unknown operation!" << std::endl;
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
