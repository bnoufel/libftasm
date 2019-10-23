#include "tests.h"

int 		test_global_strnchr(t_test *test)
{
	void	*ress;
	void	*resm;
	int		ret = 0;

	resm = ft_strnchr("hello", 'a', 6);
	ress = memchr("hello", 'a', 6);
	if (resm != ress)
	{
		if (test->debug)
			printf("ret 1 strnchr:sys %p != mine %p\n", "hello", resm);
		++ret;
	}
	resm = ft_strnchr("hello", 'o', 4);
	ress = memchr("hello", 'o', 4);
	if (resm != ress)
	{
		if (test->debug)
			printf("ret 2 strnchr:sys %p != mine %p\n", ress, resm);
		++ret;
	}
	resm = ft_strnchr("hello", 'o', 5);
	ress = memchr("hello", 'o', 5);
	if (resm != ress)
	{
		if (test->debug)
			printf("ret 3 strnchr:sys %p != mine %p\n", ress, resm);
		++ret;
	}
	resm = ft_strnchr("hello", 'o', 6);
	ress = memchr("hello", 'o', 6);
	if (resm != ress)
	{
		if (test->debug)
			printf("ret 4 strnchr:sys %p != mine %p\n", ress, resm);
		++ret;
	}
	resm = ft_strnchr("hello", 'o', 7);
	ress = memchr("hello", 'o', 6);
	if (resm != ress)
	{
		if (test->debug)
			printf("ret 5 strnchr:sys %p != mine %p\n", ress, resm);
		++ret;
	}
	resm = ft_strnchr("hello", 'l', 5);
	ress = memchr("hello", 'l', 5);
	if (resm != ress)
	{
		if (test->debug)
			printf("ret 6 strnchr:sys %p != mine %p\n", ress, resm);
		++ret;
	}
	resm = ft_strnchr("hello world", 'w', 10);
	ress = memchr("hello world", 'w', 10);
	if (resm != ress)
	{
		if (test->debug)
			printf("ret 7 strnchr:sys %p != mine %p\n", ress, resm);
		++ret;
	}
	resm = ft_strnchr("", '\0', 1);
	ress = memchr("", '\0', 1);
	if (resm != ress)
	{
		if (test->debug)
			printf("ret 8 strnchr:sys %p != mine %p\n", ress, resm);
		++ret;
	}
	resm = ft_strnchr("", '\0', 0);
	ress = memchr("", '\0', 0);
	if (resm != ress)
	{
		if (test->debug)
			printf("ret 9 strnchr:sys %p != mine %p\n", ress, resm);
		++ret;
	}
	resm = ft_strnchr(NULL, 'x', 10);
    if (resm)
	{
		if (test->debug)
			printf("ret 10 strnchr:address %p should be NULL\n", resm);
		++ret;
	}
	resm = ft_strnchr(NULL, 'x', 0);
    if (resm)
	{
		if (test->debug)
			printf("ret 11 strnchr:address %p should be NULL\n", resm);
		++ret;
	}
	return ret;
}

void test_strnchr(t_test *test) {
    int ret = 0;
    ret += test_global_strnchr(test);
    if (ret > 0)
        WRONG("strnchr");
    else
        GOOD("strnchr");
}