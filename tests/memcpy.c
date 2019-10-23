#include "tests.h"

int test_no_len_memcpy(t_test *test) {
    char s1[150];
    char s2[150];
	char s3[150];
    char s4[150];
	int ret = 0;
    char *str = ft_memcpy(s1, "q", 150);
    char *str2 = memcpy(s2, "q", 150);
	char *str3 = ft_memmove(s3, "q", 150);
    char *str4 = memmove(s4, "q", 150);
    if (strcmp(str, str2) != 0 || strcmp(s1, s2) != 0)
    {
		ret += 1;
		if (test->debug) {
			printf("%sft_memcpy: %s%s\n", RED, str, RESET);
			printf("   %smemcpy: %s%s\n", GREEN, str2, RESET);
		}
	}
	if (strcmp(str3, str4) != 0 || strcmp(s3, s4) != 0)
    {
		ret += 1;
		if (test->debug) {
			printf("%sft_memmove: %s%s\n", RED, str3, RESET);
			printf("   %smemmove: %s%s\n", GREEN, str4, RESET);
		}
	}
    return ret;
}

int test_large(t_test *test) {
    char s1[150];
    char s2[150];
	char s3[150];
    char s4[150];
	int ret = 0;
    char *str = ft_memcpy(s1, "memcpy qwertyuiopasdfghjkxcvbnm  wertyuisdfghjkxcvbn wertyuidfghjcvbn wertyuidfghjcvbn  wertyudfghcvbn", 150);
    char *str2 = memcpy(s2, "memcpy qwertyuiopasdfghjkxcvbnm  wertyuisdfghjkxcvbn wertyuidfghjcvbn wertyuidfghjcvbn  wertyudfghcvbn", 150);
    char *str3 = ft_memcpy(s3, "memcpy qwertyuiopasdfghjkxcvbnm  wertyuisdfghjkxcvbn wertyuidfghjcvbn wertyuidfghjcvbn  wertyudfghcvbn", 150);
    char *str4 = memcpy(s4, "memcpy qwertyuiopasdfghjkxcvbnm  wertyuisdfghjkxcvbn wertyuidfghjcvbn wertyuidfghjcvbn  wertyudfghcvbn", 150);
    if (strcmp(str, str2) != 0 || strcmp(s1, s2) != 0)
	{
		if (test->debug) {
			printf("%sft_memcpy: %s%s\n", RED, str, RESET);
			printf("   %smemcpy: %s%s\n", GREEN, str2, RESET);
		}
		ret += 1;
	}
	if (strcmp(str3, str4) != 0 || strcmp(s3, s4) != 0)
    {
		ret += 1;
		if (test->debug) {
			printf("%sft_memmove: %s%s\n", RED, str3, RESET);
			printf("   %smemmove: %s%s\n", GREEN, str4, RESET);
		}
	}
    return ret;
}

void test_memcpy(t_test *test) {
    int ret = 0;
    ret += test_no_len_memcpy(test);
    ret += test_large(test);
    if (ret > 0)
        WRONG("memcpy / memmove");
    else
        GOOD("memcpy / memmove");
}