#include <stdlib.h>
#include "lib.h"
#include <check.h>

#define DATA_SIZE 10

START_TEST(test_calculate_fibonacci)
{
    int input_data_n = 10;
    int expected_values[DATA_SIZE] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int actual_values[DATA_SIZE];

    calculate_fibonacci(actual_values, input_data_n);

    for (int i = 0; i < DATA_SIZE; i++) {
        ck_assert_int_eq(expected_values[i], actual_values[i]);
    }
}
END_TEST

int main(void)
{
    Suite *s = suite_create("Programing");
    TCase *tc_core = tcase_create("lab09");

    tcase_add_test(tc_core, test_calculate_fibonacci);
    suite_add_tcase(s, tc_core);

    SRunner *sr = srunner_create(s);
    srunner_run_all(sr, CK_VERBOSE);
    int number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
