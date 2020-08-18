#include "unity.h"
#include "primeornot.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_primeornot(void)
{
  TEST_ASSERT_EQUAL(1, check_prime(7));
  TEST_ASSERT_EQUAL(0, check_prime(2));
}

void test_more(void)
{
  TEST_ASSERT_EQUAL_INT(1, check_prime(11));
  TEST_ASSERT_EQUAL_INT(0, check_prime(9));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_primeornot);
   RUN_TEST(test_more);


  /* Close the Unity Test Framework */
  return UNITY_END();
}
