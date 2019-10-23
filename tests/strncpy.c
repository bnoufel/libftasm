#include "tests.h"

char *ft_strncpy(char *dst, const char *src, size_t n);

int test_no_len_strncpy(t_test *test) {
    char s1[150] = "";
    char s2[150] = "";
    char *str = ft_strncpy(s1, "q", 0);
    char *str2 = strncpy(s2, "q", 0);
	int ret = 0;
    if (strcmp(str, str2) != 0 || strcmp(s1, s2) != 0)
	{
		if (test->debug && strcmp(str, str2) != 0) {
			printf("%sft_strncpy no len test ret: %s%s\n", RED, str, RESET);
			printf("   %sstrncpy no len test ret: %s%s\n", GREEN, str2, RESET);
		}
		if (test->debug && strcmp(s1, s2) != 0) {
			printf("%sft_strncpy no len test rdi: %s%s\n", RED, s1, RESET);
			printf("   %sstrncpy no len test rdi: %s%s\n", GREEN, s2, RESET);
		}
		ret++;
	}
    return ret;
}

int test_large_strncpy(t_test *test) {
    char s3[150];
    char s4[150];
    char *str = ft_strncpy(s3, "123 qwertyuiop asdfghjkl zxcvbnm, qwertyuiop asdfghjkl zxcvbnm", 150);
    char *str2 = strncpy(s4, "123 qwertyuiop asdfghjkl zxcvbnm, qwertyuiop asdfghjkl zxcvbnm", 150);
	int ret = 0;
    if (strcmp(str, str2) != 0 || strcmp(s3, s4) != 0)
	{
		if (test->debug && strcmp(str, str2) != 0) {
			printf("%sft_strncpy hard test ret: %s%s\n", RED, str, RESET);
			printf("   %sstrncpy hard test ret: %s%s\n", GREEN, str2, RESET);
		}
		if (test->debug && strcmp(s3, s4) != 0) {
			printf("%sft_strncpy hard test rdi: %s%s\n", RED, s3, RESET);
			printf("   %sstrncpy hard test rdi: %s%s\n", GREEN, s4, RESET);
		}
		ret++;
	}
    return ret;
}

void test_strncpy(t_test *test) {
    int ret = 0;
    ret += test_no_len_strncpy(test);
    ret += test_large_strncpy(test);
    if (ret > 0)
        WRONG("strncpy");
    else
        GOOD("strncpy");
}