#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

#include "../include/even_digit_calculator.hpp"


EvenDigitCalculator::EvenDigitCalculator(int current_number){
    this->current_number = current_number;
}

int EvenDigitCalculator::is_even(char c_num) {
    int num = c_num - '0';
    return (num % 2 == 0 ? 1 : 0);
}

bool EvenDigitCalculator::process_number(int num) {

    std::string up_string = std::to_string(num);
    bool is_even_flag = true;

    for(int i = 0; i < up_string.length(); i++){
        is_even_flag = is_even_flag && is_even(up_string.at(i)); 
    }
    return is_even_flag;
}


int EvenDigitCalculator::find_even_number(int num) {

    int index;

    for(index = 0; index <=num; ++index){
        
        int up_num = num + index;
        int down_num = num - index;

        if(this->process_number(up_num)){
            break;
        }
        else if (this->process_number(down_num)){
            break;
        }
    }
    return index;
}

