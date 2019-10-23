#include "tests.h"

int test_no_len(t_test *test) {
    char s1[150];
    char s2[150];
    char *str = ft_memset(s1, '*', 150);
    char *str2 = memset(s2, '*', 150);
	int ret = 0;
    if (strcmp(str, str2) != 0 || strcmp(s1, s2) != 0)
    {
		if (test->debug) {
			printf("%sft_memset: %s%s\n", RED, str, RESET);
			printf("   %smemset: %s%s\n", GREEN, str2, RESET);
		}
		ret += 1;
	}
	return ret;
}

int test_bzero_like(t_test *test) {
    char s1[150];
    char s2[150];
	int ret = 0;
    char *str = ft_memset(s1, 0, 150);
    char *str2 = memset(s2, 0, 150);
    
    if (strcmp(str, str2) != 0 || strcmp(s1, s2) != 0)
    {
		if (test->debug) {
			printf("%sft_memset: %s%s\n", RED, str, RESET);
			printf("   %smemset: %s%s\n", GREEN, str2, RESET);
		}
		ret += 1;
	}
    return ret;
}

void test_memset(t_test *test) {
    int ret = 0;
    ret += test_no_len(test);
    ret += test_bzero_like(test);
    if (ret > 0)
        WRONG("memset");
    else
        GOOD("memset");
}