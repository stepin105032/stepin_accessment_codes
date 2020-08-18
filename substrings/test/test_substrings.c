#include "unity.h"
///@file test_substring.c
///@note test source file
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_own_ex(void)
{
  TEST_ASSERT_EQUAL_STRING("akash shetty",substrings("akash_shetty"));//@note test for custom input

}
void test_given_ex(void)
{
    TEST_ASSERT_EQUAL_STRING("my name is edcast future skills",substrings("my_name_is_edcast_future_skills"));//@note test for given input in course


}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_own_ex);
  RUN_TEST(test_given_ex);




  /* Close the Unity Test Framework */
  return UNITY_END();
}

