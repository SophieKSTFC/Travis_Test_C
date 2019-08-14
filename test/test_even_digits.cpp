#define BOOST_TEST_MODULE test_even_digits
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN  // in only one cpp file
#include <boost/test/unit_test.hpp>

#include "../include/even_digit_calculator.hpp"

BOOST_AUTO_TEST_SUITE(even_digits_test_suite);

//EvenDigitCalculator calculator(5);

BOOST_AUTO_TEST_CASE(my_test){

    BOOST_CHECK(1 + 1 == 2);
}

BOOST_AUTO_TEST_SUITE_END();

class CalculatorFixture{
    public: 
        CalculatorFixture() : calculator(5){
            BOOST_TEST_MESSAGE( "setup fixture" );
        };
        
        ~CalculatorFixture(){ 
            BOOST_TEST_MESSAGE( "tear down fixture" );
        };

        EvenDigitCalculator calculator;
};

BOOST_FIXTURE_TEST_SUITE(CalculatorUnitTests, CalculatorFixture);

BOOST_AUTO_TEST_CASE(GIVEN_even_char_WHEN_is_even_called_THEN_1_returned){

    char even_char = '4';
    BOOST_CHECK(calculator.is_even(even_char) == 1);

}

BOOST_AUTO_TEST_CASE(GIVEN_odd_char_WHEN_is_even_called_THEN_0_returned){

    char even_char = '5';
    BOOST_CHECK(calculator.is_even(even_char) == 0);

}

BOOST_AUTO_TEST_SUITE_END();