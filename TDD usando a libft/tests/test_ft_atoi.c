#include "minunit.h"

int		ft_atoi(const char *c);

MU_TEST(test_atoi_convert_1_char_to_1_integer)
{
	// ARRANGE
	char *c = "1";
	int expected_result = 1;
	char actual_result;

	// ACT
	actual_result = ft_atoi(c);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_atoi_test_suite) 
{
	MU_RUN_TEST(test_atoi_convert_1_char_to_1_integer);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_atoi_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}