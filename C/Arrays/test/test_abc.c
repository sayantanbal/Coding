#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "../practice.c"

void test_abc(void) {
    int arr[] = {2, 5, 8, 11, 14};
    // Call function and check results...
    // Use CU_ASSERT to verify conditions, e.g.:
    // CU_ASSERT(max_even == 14);
    // CU_ASSERT(max_odd == 11);
}

int main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("abc_suite", 0, 0);
    CU_add_test(suite, "test_abc", test_abc);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return 0;
}