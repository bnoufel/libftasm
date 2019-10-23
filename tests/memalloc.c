#include "tests.h"

int test_null_memalloc(t_test *test) {
	char *memalloc;
	char *strnew;
	char res[10];
	int ret = 0;
	if (!(memalloc = ft_memalloc(0)))
		exit(1);
	if (!(strnew = ft_strnew(0)))
		exit(1);
	ft_memset(res, 0, 0);
	if (strcmp(memalloc, res) != 0 || strcmp(strnew, res) != 0)
		ret++;
	return ret;
}

int test_normal_memalloc(t_test *test) {
	char *memalloc;
	char *strnew;
	char res[10];
	int ret = 0;
	if (!(memalloc = ft_memalloc(10)))
		exit(1);
	if (!(strnew = ft_strnew(10)))
		exit(1);
	ft_memset(res, 0, 10);
	if (strcmp(memalloc, res) != 0 || strcmp(strnew, res) != 0)
		ret++;
	return ret;
}

void test_memalloc(t_test *test) {
    int ret = 0;
    ret += test_null_memalloc(test);
    ret += test_normal_memalloc(test);
    if (ret > 0)
        WRONG("memalloc");
    else
        GOOD("memalloc");
}