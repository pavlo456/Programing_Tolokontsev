#include <stdlib.h>
#include <check.h>
#include "lib.h"

START_TEST(test_pascalTriangleIterative)
{
    int n = 5;

    char expected_output[] = "Трикутник Паскаля (ітеративний метод):\n"
                             "1 \n"
                             "1 1 \n"
                             "1 2 1 \n"
                             "1 3 3 1 \n"
                             "1 4 6 4 1 \n";

    // Перенаправлення stdout до буфера
    FILE* stdout_buffer = freopen("stdout.txt", "w", stdout);

    // Виклик функції, яку необхідно протестувати
    pascalTriangleIterative(n);

    // Закриття stdout буфера
    fclose(stdout_buffer);

    // Відкриття stdout буфера для зчитування
    stdout_buffer = fopen("stdout.txt", "r");

    // Перевірка очікуваного виведення
    char output[100];
    fgets(output, sizeof(output), stdout_buffer);
    ck_assert_str_eq(expected_output, output);

    // Закриття stdout буфера
    fclose(stdout_buffer);
}

START_TEST(test_pascalTriangleRecursive)
{
    int n = 5;

    char expected_output[] = "Трикутник Паскаля (рекурсивний метод):\n"
                             "1 \n"
                             "1 1 \n"
                             "1 2 1 \n"
                             "1 3 3 1 \n"
                             "1 4 6 4 1 \n";

    // Перенаправлення stdout до буфера
    FILE* stdout_buffer = freopen("stdout.txt", "w", stdout);

    // Виклик функції, яку необхідно протестувати
    pascalTriangleRecursive(n);

    // Закриття stdout буфера
    fclose(stdout_buffer);

    // Відкриття stdout буфера для зчитування
    stdout_buffer = fopen("stdout.txt", "r");

    // Перевірка очікуваного виведення
    char output[100];
    fgets(output, sizeof(output), stdout_buffer);
    ck_assert_str_eq(expected_output, output);

    // Закриття stdout буфера
    fclose(stdout_buffer);
}

Suite* test_suite()
{
    Suite* suite = suite_create("Pascal Triangle Test Suite");

    TCase* tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_pascalTriangleIterative);
    tcase_add_test(tc_core, test_pascalTriangleRecursive);
    suite_add_tcase(suite, tc_core);

    return suite;
}

int main()
{
    Suite* suite = test_suite();
    SRunner* runner = srunner_create(suite);
    srunner_run_all(runner, CK_VERBOSE);
    int number_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return number_failed == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}

