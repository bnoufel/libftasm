#include "tests.h"
int		ft_strncmp_c(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
int		ft_strnequ_c(char const *s1, char const *s2, size_t n)
{
	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	if (ft_strncmp_c(s1, s2, n))
		return (0);
	return (1);
}
int		ft_strequ_c(char const *s1, char const *s2)
{
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

int test_memcmp_zero(t_test *test) {
	int ret = 0;
	int memcmp_res1 = memcmp("", "", 0);
	int ft_memcmp_res1 = ft_memcmp("", "", 0);
	int strcmp_res1 = strcmp("", "");
	int ft_strcmp_res1 = ft_strcmp("", "");
	int strncmp_res1 = strncmp("", "", 0);
	int ft_strncmp_res1 = ft_strncmp("", "", 0);
	int strequ_res1 = ft_strequ_c("", "");
	int ft_strequ_res1 = ft_strequ("", "");
	int strnequ_res1 = ft_strnequ_c("", "", 0);
	int ft_strnequ_res1 = ft_strnequ("", "", 0);
    if (memcmp_res1 != ft_memcmp_res1)
    {
		if (test->debug) {
			printf("%sft_memcmp test 1 : %d%s\n", RED, ft_memcmp_res1, RESET);
			printf("   %smemcmp test 1 : %d%s\n", GREEN, memcmp_res1, RESET);
		}
		ret += 1;
	}
	if (strncmp_res1 != ft_strncmp_res1)
    {
		if (test->debug) {
			printf("%sft_strncmp test 1 : %d%s\n", RED, ft_strncmp_res1, RESET);
			printf("   %sstrncmp test 1 : %d%s\n", GREEN, strncmp_res1, RESET);
		}
		ret += 1;
	}
	if (strcmp_res1 != ft_strcmp_res1)
    {
		if (test->debug) {
			printf("%sft_strcmp test 1 : %d%s\n", RED, ft_strcmp_res1, RESET);
			printf("   %sstrcmp test 1 : %d%s\n", GREEN, strcmp_res1, RESET);
		}
		ret += 1;
	}
	if (strequ_res1 != ft_strequ_res1)
    {
		if (test->debug) {
			printf("%sft_strcmp test 1 : %d%s\n", RED, ft_strequ_res1, RESET);
			printf("   %sstrcmp test 1 : %d%s\n", GREEN, strequ_res1, RESET);
		}
		ret += 1;
	}
	if (strnequ_res1 != ft_strnequ_res1)
    {
		if (test->debug) {
			printf("%sft_strnequ test 1 : %d%s\n", RED, ft_strnequ_res1, RESET);
			printf("   %sstrnequ test 1 : %d%s\n", GREEN, strnequ_res1, RESET);
		}
		ret += 1;
	}
    return (ret);
}
int test_memcmp_sup(t_test *test) {
    size_t len = 0;
	int ret = 0;
	int memcmp_res2 = memcmp("dqwdwq", "dw", 6);
	int ft_memcmp_res2 = ft_memcmp("dqwdwq", "dw", 6);
	int strncmp_res2 = strncmp("dqwdwq", "dw", 6);
	int ft_strncmp_res2 = ft_strncmp("dqwdwq", "dw", 6);
	int strcmp_res2 = strcmp("dqwdwq", "dw");
	int ft_strcmp_res2 = ft_strcmp("dqwdwq", "dw");
	int strequ_res2 = ft_strequ_c("dqwdwq", "dw");
	int ft_strequ_res2 = ft_strequ("dqwdwq", "dw");
	int strnequ_res2 = ft_strnequ_c("dqwdwq", "dw", 6);
	int ft_strnequ_res2 = ft_strnequ("dqwdwq", "dw", 6);
    if (memcmp_res2 != ft_memcmp_res2)
    {
		if (test->debug) {
			printf("%sft_memcmp test 2 : %d%s\n", RED, ft_memcmp_res2, RESET);
			printf("   %smemcmp test 2 : %d%s\n", GREEN, memcmp_res2, RESET);
		}
		ret += 1;
	}
	if (strcmp_res2 != ft_strcmp_res2)
    {
		if (test->debug) {
			printf("%sft_strcmp test 2 : %d%s\n", RED, ft_strcmp_res2, RESET);
			printf("   %sstrcmp test 2 : %d%s\n", GREEN, strcmp_res2, RESET);
		}
		ret += 1;
	}
	if (strncmp_res2 != ft_strncmp_res2)
    {
		if (test->debug) {
			printf("%sft_strncmp test 2 : %d%s\n", RED, ft_strncmp_res2, RESET);
			printf("   %sstrncmp test 2 : %d%s\n", GREEN, strncmp_res2, RESET);
		}
		ret += 1;
	}
	if (strequ_res2 != ft_strequ_res2)
    {
		if (test->debug) {
			printf("%sft_strequ test 2 : %d%s\n", RED, ft_strequ_res2, RESET);
			printf("   %sstrequ test 2 : %d%s\n", GREEN, strequ_res2, RESET);
		}
		ret += 1;
	}
	if (strnequ_res2 != ft_strnequ_res2)
    {
		if (test->debug) {
			printf("%sft_strnequ test 2 : %d%s\n", RED, ft_strnequ_res2, RESET);
			printf("   %sstrnequ test 2 : %d%s\n", GREEN, strnequ_res2, RESET);
		}
		ret += 1;
	}
    return (ret);
}

int test_memcmp_neg(t_test *test) {
    size_t len = 0;
	int ret = 0;
	int memcmp_res3 = memcmp("dw", "dqwdwdwq", 5);
	int ft_memcmp_res3 = ft_memcmp("dw", "dqwdwdwq", 5);
	int strcmp_res3 = strcmp("dw", "dqwdwdwq");
	int ft_strcmp_res3 = ft_strcmp("dw", "dqwdwdwq");
	int strncmp_res3 = strncmp("dw", "dqwdwdwq", 5);
	int ft_strncmp_res3 = ft_strncmp("dw", "dqwdwdwq", 5);
	int strequ_res3 = ft_strequ_c("dw", "dqwdwdwq");
	int ft_strequ_res3 = ft_strequ("dw", "dqwdwdwq");
	int strnequ_res3 = ft_strnequ_c("dw", "dqwdwdwq", 5);
	int ft_strnequ_res3 = ft_strnequ("dw", "dqwdwdwq", 5);
    if (memcmp_res3 != ft_memcmp_res3)
    {
		if (test->debug) {
			printf("%sft_memcmp test 3 : %d%s\n", RED, ft_memcmp_res3, RESET);
			printf("   %smemcmp test 3 : %d%s\n", GREEN, memcmp_res3, RESET);
		}
		ret += 1;
	}
	if (strcmp_res3 != ft_strcmp_res3)
    {
		if (test->debug) {
			printf("%sft_strcmp test 3 : %d%s\n", RED, ft_strcmp_res3, RESET);
			printf("   %sstrcmp test 3 : %d%s\n", GREEN, strcmp_res3, RESET);
		}
		ret += 1;
	}
	if (strncmp_res3 != ft_strncmp_res3)
    {
		if (test->debug) {
			printf("%sft_strncmp test 3 : %d%s\n", RED, ft_strncmp_res3, RESET);
			printf("   %sstrncmp test 3 : %d%s\n", GREEN, strncmp_res3, RESET);
		}
		ret += 1;
	}
	if (strequ_res3 != ft_strequ_res3)
    {
		if (test->debug) {
			printf("%sft_strcmp test 1 : %d%s\n", RED, ft_strequ_res3, RESET);
			printf("   %sstrcmp test 1 : %d%s\n", GREEN, strequ_res3, RESET);
		}
		ret += 1;
	}
	if (strnequ_res3 != ft_strnequ_res3)
    {
		if (test->debug) {
			printf("%sft_strnequ test 3 : %d%s\n", RED, ft_strnequ_res3, RESET);
			printf("   %sstrnequ test 3 : %d%s\n", GREEN, strnequ_res3, RESET);
		}
		ret += 1;
	}
    return (ret);
}

void test_memcmp(t_test *test) {
    int ret = 0;
    ret += test_memcmp_zero(test);
    ret += test_memcmp_sup(test);
    ret += test_memcmp_neg(test);
    if (ret > 0)
        WRONG("memcmp / strcmp / strequ");
    else
        GOOD("memcmp / strcmp / strequ");
}



