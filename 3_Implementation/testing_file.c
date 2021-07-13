#include "number.h"

// Provide input as string and only integer values are accepted
//If any other characters are given -1 will be returned
char *s0 ="1011";\
char *s1 = "11";
char *s2= "f";
char *s3= "22";
char *s4 ="-h110,";
/* Write all the test functions */ 
void test_bin_to_dec(void) {
  TEST_ASSERT_EQUAL_INT((11), bin_to_dec(s0));
  TEST_ASSERT_EQUAL_INT((3), bin_to_dec(s1));

}
void test_hex_to_dec(void) {
  TEST_ASSERT_EQUAL_INT((15), hex_to_dec(s2));
  TEST_ASSERT_EQUAL_INT((34), hex_to_dec(s3));
  
}
void test_oct_to_dec(void) {
  TEST_ASSERT_EQUAL_INT((8), oct_to_dec(10));
  TEST_ASSERT_EQUAL_INT((356), oct_to_dec(544));
  
}

void test_invalid_input(void) {
  TEST_ASSERT_EQUAL_INT((-1), bin_to_dec(s4));
   TEST_ASSERT_EQUAL_INT((-1), hex_to_dec(s4));
    TEST_ASSERT_EQUAL_INT((-1), oct_to_dec(89));
}

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_bin_to_dec);
  RUN_TEST(test_hex_to_dec);
  RUN_TEST(test_oct_to_dec);
  RUN_TEST(test_invalid_input);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
