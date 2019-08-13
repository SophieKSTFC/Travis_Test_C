#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

//#include "even_digits.h"

int is_even(char c_num){
    int num = c_num - '0';
    return (num % 2 == 0 ? 1 : 0);
}


int find_even_number(int num){

    int index;

    for(index = 0; index <=num; ++index){
        
        int up_num = num + index;
        std::string up_string = std::to_string(up_num);
       
        bool is_even_flag = true;

        for(int i = 0; i < up_string.length(); i++){
            is_even_flag = is_even_flag && is_even(up_string.at(i)); 
        }
        if(is_even_flag){
            break;
        }

    }

    return index;
}



int main(){

    int test_cases, display_number;
    std::cout << ("Welcome to the even digits calculator!\n") << std::endl;
    std::cout << ("Enter number of test cases: \n") << std::endl;
    std::cin >> test_cases;

    for(int i = 0; i < test_cases; i++){

        printf("Enter the display number: \n");
        std::cin >> display_number;



        int result = find_even_number(display_number);


        std::cout << ("Case #%d: %d", i, result) << std::endl;
    }
        
    return 1;
}
