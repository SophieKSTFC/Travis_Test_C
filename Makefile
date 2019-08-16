CC=g++
SOURCES = src/

even_digits: src/calculator_program.cpp src/even_digit_calculator.cpp 
	$(CC) --std=c++11 -o even_digits src/calculator_program.cpp src/even_digit_calculator.cpp \
	-I /Users/dbu19518/Develop/Travis_Test_C/include/ \

test_even_digits: test/test_even_digits.cpp src/even_digit_calculator.cpp 
	$(CC) --std=c++11 -o test_even_digits test/test_even_digits.cpp src/even_digit_calculator.cpp  \
	-I /usr/local/include \
	-I /Users/dbu19518/Develop/Travis_Test_C/include/ \
	-L /usr/local/lib \
	-lboost_unit_test_framework

style:
	@for src in $(SOURCES) ; do \
		echo "Formatting $$src..." ; \
		clang-format -i "$(SRC_DIR)/$$src" ; \
		clang-tidy -checks='-*,readability-identifier-naming' \
		    -config="{CheckOptions: [ \
		    { key: readability-identifier-naming.NamespaceCase, value: lower_case },\
		    { key: readability-identifier-naming.ClassCase, value: CamelCase  },\
		    { key: readability-identifier-naming.StructCase, value: CamelCase  },\
		    { key: readability-identifier-naming.FunctionCase, value: camelBack },\
		    { key: readability-identifier-naming.VariableCase, value: lower_case },\
		    { key: readability-identifier-naming.GlobalConstantCase, value: UPPER_CASE }\
		    ]}" "$(SRC_DIR)/$$src" ; \
	done
	@echo "Done"