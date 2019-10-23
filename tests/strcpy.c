#include "tests.h"

int test_no_len_strcpy(t_test *test) {
    char s1[150];
    char s2[150];
    char *str = ft_strcpy(s1, "");
    char *str2 = strcpy(s2, "");
	int ret = 0;
    if (strcmp(str, str2) != 0 || strcmp(s1, s2) != 0)
	{
		if (test->debug && strcmp(str, str2) != 0) {
			printf("%sft_strcpy hard test ret: %s%s\n", RED, str, RESET);
			printf("   %sstrcpy hard test ret: %s%s\n", GREEN, str2, RESET);
		}
		if (test->debug && strcmp(s1, s2) != 0) {
			printf("%sft_strcpy hard test rdi: %s%s\n", RED, s1, RESET);
			printf("   %sstrcpy hard test rdi: %s%s\n", GREEN, s2, RESET);
		}
		ret++;
	}
    return ret;

}

int test_large_strcpy(t_test *test) {
    char s1[150];
    char s2[150];
    char *str = ft_strcpy(s1, "strcpy qwertyuiopasdfghjkxcvbnm  wertyuisdfghjkxcvbn wertyuidfghjcvbn wertyuidfghjcvbn  wertyudfghcvbn");
    char *str2 = strcpy(s2, "strcpy qwertyuiopasdfghjkxcvbnm  wertyuisdfghjkxcvbn wertyuidfghjcvbn wertyuidfghjcvbn  wertyudfghcvbn");
	int ret = 0;
    if (strcmp(str, str2) != 0 || strcmp(s1, s2) != 0)
	{
		if (test->debug && strcmp(str, str2) != 0) {
			printf("%sft_strcpy hard test ret: %s%s\n", RED, str, RESET);
			printf("   %sstrcpy hard test ret: %s%s\n", GREEN, str2, RESET);
		}
		if (test->debug && strcmp(s1, s2) != 0) {
			printf("%sft_strcpy hard test rdi: %s%s\n", RED, s1, RESET);
			printf("   %sstrcpy hard test rdi: %s%s\n", GREEN, s2, RESET);
		}
		ret++;
	}
    return ret;

}

void test_strcpy(t_test *test) {
    int ret = 0;
    ret += test_no_len_strcpy(test);
    ret += test_large_strcpy(test);
    if (ret > 0)
        WRONG("strcpy");
    else
        GOOD("strcpy");
}