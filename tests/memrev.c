#include "tests.h"

int		test_memrev_wrong(t_test *test) {
	char c1[6] = "hello";
	int ret = 0;
	char *s1 = ft_memrev(c1, 0);
	if (strcmp(s1, "hello") != 0) {
		if(test->debug && strcmp(s1, "hello") != 0) {
			printf("ft_memrev : %s\n", s1);
			printf("   memrev : %s\n", "hello");
		}
		ret++;
	}
	return ret;
}

int		test_memrev_good(t_test *test) {
	int ret = 0;
	char c1[6] = "hello";
	char c2[6] = "hello";
	char *s1 = ft_memrev(c1, 5);
	char *s2 = ft_strrev(c2);
	if (strcmp(s1, "olleh") != 0 || strcmp(s2, "olleh") != 0) {
		if(test->debug && strcmp(s1, "olleh") != 0) {
			printf("ft_memrev : %s\n", s1);
			printf("   memrev : %s\n", "olleh");
		}
		if (test->debug || strcmp(s2, "olleh") != 0) {
			printf("ft_strrev : %s\n", s1);
			printf("   strrev : %s\n", "olleh");
		}
		ret++;
	}
	return ret;
}


void test_memrev(t_test *test) {
    int ret = 0;
    ret += test_memrev_wrong(test);
    ret += test_memrev_good(test);
    if (ret > 0)
        WRONG("memrev and strrev");
    else
        GOOD("memrev and strrev");
}

