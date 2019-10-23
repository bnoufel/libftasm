#include "tests.h"
int test_wrong_memrchr(t_test *test) {
	int ret = 0;
	char *ft_memrchr_res = ft_memrchr("qwertyuiop", 's', 10);
	char *ft_strrchr_res = ft_strrchr("qwertyuiop", 's');
	char *strrchr_res = strrchr("qwertyuiop", 's');
	if (ft_memrchr_res != NULL)
	{
		if (test->debug) {
			printf("ft_memrchr %s\n", ft_memrchr_res);
		}
		ret++;
	}
	if (strrchr_res)
	{
		if (test->debug) {
			printf("ft_strrchr %s\n", ft_strrchr_res);
			printf("   strrchr %s\n", strrchr_res);
		}
		ret++;
	}
	return (ret);
}

int test_good_memrchr(t_test *test) {
	int ret = 0;
	char *ft_memrchr_res = ft_memrchr("qwerstyuiop", 's', 10);
	char *ft_strrchr_res = ft_strrchr("qwerstyuiop", 's');
	char *strrchr_res = strrchr("qwerstyuiop", 's');
	if (ft_memrchr_res == NULL)
	{
		if (test->debug) {
			printf("ft_memrchr %s\n", ft_memrchr_res);
		}
		ret++;
	}
	if (strcmp(strrchr_res, ft_strrchr_res) != 0)
	{
		if (test->debug) {
			printf("ft_strrchr %s\n", ft_strrchr_res);
			printf("   strrchr %s\n", strrchr_res);
		}
		ret++;
	}
	return (ret);
}

int test_no_len_memrchr(t_test *test) {
	int ret = 0;
	char *ft_memrchr_res = ft_memrchr("qwerstyuiop", 's', 0);
	char *ft_strrchr_res = ft_strrchr("qwertyuiop", 's');
	char *strrchr_res = strrchr("qwertyuiop", 's');
	if (ft_memrchr_res != NULL)
	{
		if (test->debug) {
			printf("ft_memrchr %s\n", ft_memrchr_res);
		}
		ret++;
	}
	if (strrchr_res)
	{
		if (test->debug) {
			printf("ft_strrchr %s\n", ft_strrchr_res);
			printf("   strrchr %s\n", strrchr_res);
		}
		ret++;
	}
	return (ret);
}

int test_big_len_memrchr(t_test *test) {
	int ret = 0;
	char *ft_memrchr_res = ft_memrchr("qwerstyuiop", 's', 90);
	char *ft_strrchr_res = ft_strrchr("qwerstyuiop", 's');
	char *strrchr_res = strrchr("qwerstyuiop", 's');
	if (ft_memrchr_res == NULL)
	{
		if (test->debug) {
			printf("ft_memrchr %s\n", ft_memrchr_res);
		}
		ret++;
	}
	if (strcmp(strrchr_res, ft_strrchr_res) != 0)
	{
		if (test->debug) {
			printf("ft_strrchr %s\n", ft_strrchr_res);
			printf("   strrchr %s\n", strrchr_res);
		}
		ret++;
	}
	return (ret);
}


void test_memrchr(t_test *test) {
    int ret = 0;
    ret += test_wrong_memrchr(test);
    ret += test_good_memrchr(test);
    ret += test_no_len_memrchr(test);
    ret += test_big_len_memrchr(test);
    if (ret > 0)
        WRONG("memrchr and strrchr");
    else
        GOOD("memrchr and strrchr");
}



