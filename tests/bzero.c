#include "tests.h"
int test_normal_bzero(t_test *test) {
    size_t len = 6;
	int ret = 0;
    char ft_bzero_str[] = { 45, 45, 78, 98, 13, 0};
    char bzero_str[] = { 45, 45, 78, 98, 13, 0};
    ft_bzero(ft_bzero_str, len);
    bzero(bzero_str, len);
    if (strcmp(ft_bzero_str, bzero_str) != 0)
    {
		if (test->debug) {
			printf("%sft_bzero : %s%s\n", RED, ft_bzero_str, RESET);
			printf("   %sbzero : %s%s\n", GREEN, bzero_str, RESET);
		}
		ret += 1;
	}
    return (ret);
}
int test_normal_n_no_len_bzero(t_test *test) {
    size_t len = 0;
	int ret = 0;
    char ft_bzero_str[] = { 45, 45, 78, 98, 42, 0};
    char bzero_str[] = { 45, 45, 78, 98, 42, 0};
    ft_bzero(ft_bzero_str, len);
    bzero(bzero_str, len);
    if (strcmp(ft_bzero_str, bzero_str) != 0)
	{
		if (test->debug) {
			printf("%sft_bzero : %s%s\n", RED, ft_bzero_str, RESET);
			printf("   %sbzero : %s%s\n", GREEN, bzero_str, RESET);
		}
		ret += 1;
	}
    return (ret);
}

int test_empty_len_bzero(t_test *test) {
    size_t len = 0;
	int ret = 0;
    char ft_bzero_str[] = {0};
    char bzero_str[] = {0};
    ft_bzero(ft_bzero_str, len);
    bzero(bzero_str, len);
    
    if (strcmp(ft_bzero_str, bzero_str) != 0)
    {
		if (test->debug) {
			printf("%sft_bzero : %s%s\n", RED, ft_bzero_str, RESET);
			printf("   %sbzero : %s%s\n", GREEN, bzero_str, RESET);
		}
		ret += 1;
	}
	return (ret);
}

void test_bzero(t_test *test) {
    int ret = 0;
    ret += test_normal_bzero(test);
    ret += test_empty_len_bzero(test);
    ret += test_normal_n_no_len_bzero(test);
    if (ret > 0)
        WRONG("bzero");
    else
        GOOD("bzero");
}



