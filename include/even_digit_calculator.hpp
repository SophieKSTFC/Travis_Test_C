#ifndef EVEN_DIGITS_HPP
#define EVEN_DIGITS_HPP

class EvenDigitCalculator{

    public:
        EvenDigitCalculator(int current_number);

        int current_number;

        int find_even_number(int num);
        bool process_number(int num);
        int is_even(char c_num);


};

#endif