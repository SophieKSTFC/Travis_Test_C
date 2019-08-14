#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

//#include "even_digits.h"

int is_even(char c_num){
    int num = c_num - '0';
    return (num % 2 == 0 ? 1 : 0);
}

bool process_number(int num){

    std::string up_string = std::to_string(num);
    bool is_even_flag = true;

    for(int i = 0; i < up_string.length(); i++){
        is_even_flag = is_even_flag && is_even(up_string.at(i)); 
    }

    return is_even_flag;

}


int find_even_number(int num){

    int index;

    for(index = 0; index <=num; ++index){
        
        int up_num = num + index;
        int down_num = num - index;

        if(process_number(up_num)){
            break;
        }
        else if (process_number(down_num)){
            break;
        }
    }
    return index;
}


int main(){

    int test_cases, display_number;
    std::cout << "Welcome to the even digits calculator!" << std::endl;
    std::cout << "Enter number of test cases: ";
    std::cin >> test_cases;

    for(int i = 0; i < test_cases; i++){

        printf("Enter the display number: ");
        std::cin >> display_number;
        int result = find_even_number(display_number);
        std::cout << "Case #" << i << ": " << result << std::endl;
    }
        
    return 1;
}
