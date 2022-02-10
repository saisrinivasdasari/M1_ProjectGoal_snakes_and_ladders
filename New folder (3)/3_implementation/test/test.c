#include "unity.h"
#include "function.c"

void setUp(void){};

void tearDown(void){};
void test_diceoutput(void)
{
    TEST_ASSERT_GREATER_THAN_INT(0,dice_output());
}
void test_diceoutput1(void)
{
    TEST_ASSERT_LESS_OR_EQUAL_INT(6,dice_output());
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_diceoutput);
    RUN_TEST(test_diceoutput1);
    return UNITY_END();
}