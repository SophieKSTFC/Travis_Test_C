#define BOOST_TEST_MODULE test_even_digits
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN  // in only one cpp file
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(my_test){

    BOOST_CHECK(1 + 3 == 2);
}