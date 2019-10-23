#include "tests.h"
int test_wrong_memchr(t_test *test) {
	int ret = 0;
	char *ft_memchr_res = ft_memchr("qwertyuiop", 's', 10);
	char *memchr_res = memchr("qwertyuiop", 's', 10);
	char *ft_strchr_res = ft_strchr("qwertyuiop", 's');
	char *strchr_res = strchr("qwertyuiop", 's');
	if (memchr_res)
	{
		if (test->debug) {
			printf("ft_memchr %s\n", ft_memchr_res);
			printf("   memchr %s\n", memchr_res);
		}
		ret++;
	}
	if (strchr_res)
	{
		if (test->debug) {
			printf("ft_strchr %s\n", ft_strchr_res);
			printf("   strchr %s\n", strchr_res);
		}
		ret++;
	}
	return (ret);
}

int test_good_memchr(t_test *test) {
	int ret = 0;
	char *ft_memchr_res = ft_memchr("qwerstyuiop", 's', 10);
	char *memchr_res = memchr("qwerstyuiop", 's', 10);
	char *ft_strchr_res = ft_strchr("qwerstyuiop", 's');
	char *strchr_res = strchr("qwerstyuiop", 's');
	if (strcmp(memchr_res, ft_memchr_res) != 0)
	{
		if (test->debug) {
			printf("ft_memchr %s\n", ft_memchr_res);
			printf("   memchr %s\n", memchr_res);
		}
		ret++;
	}
	if (strcmp(strchr_res, ft_strchr_res) != 0)
	{
		if (test->debug) {
			printf("ft_strchr %s\n", ft_strchr_res);
			printf("   strchr %s\n", strchr_res);
		}
		ret++;
	}
	return (ret);
}

int test_no_len_memchr(t_test *test) {
	int ret = 0;
	char *ft_memchr_res = ft_memchr("qwerstyuiop", 's', 0);
	char *memchr_res = memchr("qwerstyuiop", 's', 0);
	char *ft_strchr_res = ft_strchr("qwertyuiop", 's');
	char *strchr_res = strchr("qwertyuiop", 's');
	if (memchr_res)
	{
		if (test->debug) {
			printf("ft_memchr %s\n", ft_memchr_res);
			printf("   memchr %s\n", memchr_res);
		}
		ret++;
	}
	if (strchr_res)
	{
		if (test->debug) {
			printf("ft_strchr %s\n", ft_strchr_res);
			printf("   strchr %s\n", strchr_res);
		}
		ret++;
	}
	return (ret);
}

int test_big_len_memchr(t_test *test) {
	int ret = 0;
	char *ft_memchr_res = ft_memchr("qwerstyuiop", 's', 90);
	char *memchr_res = memchr("qwerstyuiop", 's', 90);
	char *ft_strchr_res = ft_strchr("qwerstyuiop", 's');
	char *strchr_res = strchr("qwerstyuiop", 's');
	if (strcmp(memchr_res, ft_memchr_res) != 0)
	{
		if (test->debug) {
			printf("ft_memchr %s\n", ft_memchr_res);
			printf("   memchr %s\n", memchr_res);
		}
		ret++;
	}
	if (strcmp(strchr_res, ft_strchr_res) != 0)
	{
		if (test->debug) {
			printf("ft_strchr %s\n", ft_strchr_res);
			printf("   strchr %s\n", strchr_res);
		}
		ret++;
	}
	return (ret);
}


void test_memchr(t_test *test) {
    int ret = 0;
    ret += test_wrong_memchr(test);
    ret += test_good_memchr(test);
    ret += test_no_len_memchr(test);
    ret += test_big_len_memchr(test);
    if (ret > 0)
        WRONG("memchr and strchr");
    else
        GOOD("memchr and strchr");
}



