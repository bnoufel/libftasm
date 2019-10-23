#include "tests.h"

#include <string.h>
#include <stdlib.h>

int test_len_inf_src(t_test *test)
{
	int ret = 0;
	char dst[150] = "wooaaa trop bien ";
	char dst1[150] = "wooaaa trop bien ";
	char src[150] = "strlcat ..... nope.";
	char src1[150] = "strlcat ..... nope.";
	int i = ft_strlcat(dst, src, 8);
	int j = strlcat(dst1, src1, 8);
	if (strcmp(dst, dst1) != 0 || i != j)
    {
		ret += 1;
		if (test->debug) {
			printf("%sft_strlcat test 1: %s n val : %d%s\n", RED, dst, i, RESET);
			printf("   %sstrlcat test 1: %s n val : %d%s\n", GREEN, dst1, j, RESET);
		}
	}
    return ret;
}

int test_len_exact_src(t_test *test)
{
	int ret = 0;
	char dst[150] = "wooaaa trop bien ";
	char dst1[150] = "wooaaa trop bien ";
	char src[150] = "strlcat ..... nope.";
	char src1[150] = "strlcat ..... nope.";
	int i = ft_strlcat(dst, src, 36);
	int j = strlcat(dst1, src1, 36);
	if (strcmp(dst, dst1) != 0 || i != j)
    {
		ret += 1;
		if (test->debug) {
			printf("%sft_strlcat test 2: %s n val : %d%s\n", "", dst, i, "");
			printf("   %sstrlcat test 2: %s n val : %d%s\n", "", dst1, j, "");
		}
	}
    return ret;
}

int test_len_too_big_src(t_test *test)
{
	int ret = 0;
	char dst[150] = "";
	char dst1[150] = "";
	char src[150] = "strlcat ..... nope.";
	char src1[150] = "strlcat ..... nope.";
	int i = ft_strlcat(dst, src, 136);
	int j = strlcat(dst1, src1, 136);
	if (strcmp(dst, dst1) != 0 || i != j)
    {
		ret += 1;
		if (test->debug) {
			printf("%sft_strlcat test 3: %s n val : %d%s\n", "", dst, i, "");
			printf("   %sstrlcat test 3: %s n val : %d%s\n", "", dst1, j, "");
		}
	}
    return ret;
}


void test_strlcat(t_test *test) {
    int ret = 0;
    ret += test_len_inf_src(test);
    ret += test_len_exact_src(test);
    ret += test_len_too_big_src(test);
    if (ret > 0)
        WRONG("strlcat");
    else
        GOOD("strlcat");
}