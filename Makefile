CC=g++

even_digits: src/calculator_program.cpp src/even_digit_calculator.cpp 
	$(CC) -o even_digits src/calculator_program.cpp src/even_digit_calculator.cpp \
	-I /Users/dbu19518/Develop/Travis_Test_C/include/ \

test_even_digits: test/test_even_digits.cpp src/even_digit_calculator.cpp 
	$(CC) -o test_even_digits test/test_even_digits.cpp src/even_digit_calculator.cpp  \
	-I /usr/local/include \
	-I /Users/dbu19518/Develop/Travis_Test_C/include/ \
	-L /usr/local/lib \
	-lboost_unit_test_framework
