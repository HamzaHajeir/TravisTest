#ifdef UNIT_TEST
#ifndef ARDUINO

#include "Calculator.h"
#include "unity.h"

Calculator calc;

void addFunction() {
    TEST_ASSERT_EQUAL(calc.add(2, 2), 4);
}
void subFunction() {
    TEST_ASSERT_EQUAL(calc.sub(2, 2), 0);
}
void mulFunction() {
    TEST_ASSERT_EQUAL(calc.mul(2, 2), 4);
}
void divFunction() {
    TEST_ASSERT_EQUAL(calc.div(2, 2), 1);
}

int main(int argc,char** argv) {
    
    UNITY_BEGIN();
    RUN_TEST(addFunction);
    RUN_TEST(subFunction);
    RUN_TEST(mulFunction);
    RUN_TEST(divFunction);
    UNITY_END();

    return 0;
}


#endif
#endif