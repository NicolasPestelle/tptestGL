#include "Fibo.hpp"
#include <CppUTest/CommandLineTestRunner.h>
TEST_GROUP(GroupFibo) { };
TEST(GroupFibo, test_Fibo_0) { // verif des 5eres valeures
  

    int result = fibo(0);
    CHECK_EQUAL(0, result);
}

TEST(GroupFibo, test_Fibo_1) { // verif des 5eres valeures
  

    int result = fibo(1);
    CHECK_EQUAL(1, result);
}

TEST(GroupFibo, test_Fibo_2) { // verif des 5eres valeures
  

    int result = fibo(2);
    CHECK_EQUAL(1, result);
}

TEST(GroupFibo, test_Fibo_3) { // verif des 5eres valeures
  

    int result = fibo(3);
    CHECK_EQUAL(2, result);
}

TEST(GroupFibo, test_Fibo_4) { // verif des 5eres valeures
  

    int result = fibo(4);
    CHECK_EQUAL(3, result);
}
