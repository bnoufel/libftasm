#include "tests.h"
int test_null_strdup(t_test *test) {
    char *str = ft_strdup("");
    char *str2 = strdup("");
	int ret = 0;
    if (strcmp(str, str2) != 0) {
		if (test->debug) {
			printf("%sft_strdup: %s%s\n", RED, str, RESET);
			printf("   %sstrdup: %s%s\n", GREEN, str2, RESET);
		}
		ret++;
    }
    free(str);
    free(str2);
    return ret;
}

int test_normal_strdup(t_test *test) {
    char *str = ft_strdup("nejnfje hiufewhifeuhfiewf eu ewhi ew eiu ");
    char *str2 = strdup("nejnfje hiufewhifeuhfiewf eu ewhi ew eiu ");
	int ret = 0;
    if (strcmp(str, str2) != 0) {
		if (test->debug) {
			printf("%sft_strdup: %s%s\n", RED, str, RESET);
			printf("   %sstrdup: %s%s\n", GREEN, str2, RESET);
		}
		ret++;
    }
	free(str);
	free(str2);
    return ret;
}

int test_large_strdup(t_test *test) {
    char *str = ft_strdup(" Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum. Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.");
    char *str2 = strdup(" Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum. Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.");
	int ret = 0;
    if (strcmp(str, str2) != 0) {
		if (test->debug) {
			printf("%sft_strdup: %s%s\n", RED, str, RESET);
			printf("   %sstrdup: %s%s\n", GREEN, str2, RESET);
		}
		ret++;
    }
    free(str);
    free(str2);
    return ret;
}
void test_strdup(t_test *test) {
    int ret = 0;
    ret += test_null_strdup(test);
    ret += test_normal_strdup(test);
    ret += test_large_strdup(test);
    if (ret > 0)
        WRONG("strdup");
    else
        GOOD("strdup");
}