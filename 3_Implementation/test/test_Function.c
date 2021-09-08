#include "unity.h"
#include "Function.h"


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_C(void)
{
  TEST_ASSERT_EQUAL(25, C(10,15));
  TEST_ASSERT_EQUAL(775, C(25,750));
}

void test_D(void)
{
  TEST_ASSERT_EQUAL(14, D(20,6));
  TEST_ASSERT_EQUAL(90, D(150,60));
}

void test_E(void)
{
  TEST_ASSERT_EQUAL(60, E(10,6));
  TEST_ASSERT_EQUAL(200, E(10,20));
}

void test_E_zero(void)
{
  TEST_ASSERT_EQUAL(0, Mul1(16,0));
  TEST_ASSERT_EQUAL(0, Mul1(20,0));
}

void test_F(void)
{
  TEST_ASSERT_EQUAL(5, F(50,10));
  TEST_ASSERT_EQUAL(17, F(85,5));
}

void test_F_zero(void)
{
  TEST_ASSERT_EQUAL(0, F(57,0));
  TEST_ASSERT_EQUAL(0,F(39,0));
}


void test_H(void)
{
  TEST_ASSERT_EQUAL(25, H(5,2));
  TEST_ASSERT_EQUAL(225, H(15,2));
}


void test_G(void)
{
  TEST_ASSERT_EQUAL(1, G(26,5));
  TEST_ASSERT_EQUAL(2, G(127,5));
}


int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_C);
  RUN_TEST(test_D);
  RUN_TEST(test_E);
  RUN_TEST(test_E_zero);
  RUN_TEST(test_F);
  RUN_TEST(test_F_zero);
  RUN_TEST(test_H);
  RUN_TEST(test_G);
  
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}