#include "unity.h"
#include "Function.h"


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_C(void)
{
  TEST_ASSERT_EQUAL(25, Addition(10,15));
  TEST_ASSERT_EQUAL(775, Addition(25,750));
}

void test_D(void)
{
  TEST_ASSERT_EQUAL(14, Subtraction(20,6));
  TEST_ASSERT_EQUAL(90, Subtraction(150,60));
}

void test_Multiplication(void)
{
  TEST_ASSERT_EQUAL(60, Multiplication(10,6));
  TEST_ASSERT_EQUAL(200, Multiplication(10,20));
}

void test_Multiplication_zero(void)
{
  TEST_ASSERT_EQUAL(0, Multiplication(16,0));
  TEST_ASSERT_EQUAL(0,Multiplication(20,0));
}

void test_Division(void)
{
  TEST_ASSERT_EQUAL(5,Division(50,10));
  TEST_ASSERT_EQUAL(17, Division(85,5));
}

void test_Division_zero(void)
{
  TEST_ASSERT_EQUAL(0, Division(57,0));
  TEST_ASSERT_EQUAL(0,Division(39,0));
}


void test_Power(void)
{
  TEST_ASSERT_EQUAL(25, Power(5,2));
  TEST_ASSERT_EQUAL(225, Power(15,2));
}


void test_Modulus(void)
{
  TEST_ASSERT_EQUAL(1, Modulus(26,5));
  TEST_ASSERT_EQUAL(2, Modulus(127,5));
}


int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Addition);
  RUN_TEST(test_Subtraction);
  RUN_TEST(test_Multiplication);
  RUN_TEST(test_Multiplication_zero);
  RUN_TEST(test_Division);
  RUN_TEST(test_Division_zero);
  RUN_TEST(test_Power);
  RUN_TEST(test_Modulus);
  
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}
