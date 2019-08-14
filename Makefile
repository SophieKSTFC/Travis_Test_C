CC=g++

even_digits: src/even_digits.cpp 
	$(CC) -o even_digits src/even_digits.cpp \
	-I /Users/dbu19518/Develop/Travis_Test_C/include/ \

test: test/test_even_digits.cpp
	$(CC) -o test test/test_even_digits.cpp \
	-I /usr/local/include \
	-L /usr/local/lib \
	-lboost_unit_test_framework
