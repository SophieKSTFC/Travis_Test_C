#include <iostream>
#include "../include/even_digit_calculator.hpp"

int main(){

    EvenDigitCalculator calculator;

    int test_cases, display_number;
    std::cout << "Welcome to the even digits calculator!" << std::endl;
    std::cout << "Enter number of test cases: ";
    std::cin >> test_cases;

    for(int i = 0; i < test_cases; i++){

        printf("Enter the display number: ");
        std::cin >> display_number;
        int result = calculator.find_even_number(display_number);
        std::cout << "Case #" << i << ": " << result << std::endl;
    }
        
    return 1;
}
