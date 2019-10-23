#include "tests.h"

int test_no_len_strstr(t_test *test) {
    char *str = ft_strstr("", "");
    char *str2 = strstr("", "");
	int ret = 0;
    if (strcmp(str, str2) != 0)
	{
		if (test->debug) {
			printf("%sft_strstr no len ret: %s%s\n", RED, str, RESET);
			printf("   %sstrstr no len ret: %s%s\n", GREEN, str2, RESET);
		}
		ret++;
	}
    return ret;

}

int test_large_strstr(t_test *test) {
    char *str = ft_strstr("wertyuisdfghjkxcvbn", "strstr qwertyuiopasdfghjkxcvbnm  wertyuisdfghjkxcvbn wertyuidfghjcvbn wertyuidfghjcvbn  wertyudfghcvbn");
    char *str2 = strstr("wertyuisdfghjkxcvbn", "strstr qwertyuiopasdfghjkxcvbnm  wertyuisdfghjkxcvbn wertyuidfghjcvbn wertyuidfghjcvbn  wertyudfghcvbn");
	int ret = 0;
    if (str || str2)
	{
		if (test->debug && strcmp(str, str2) != 0) {
			printf("%sft_strstr large test ret: %s%s\n", RED, str, RESET);
			printf("   %sstrstr large test ret: %s%s\n", GREEN, str2, RESET);
		}
		ret++;
	}
    return ret;

}

int test_notfound_strstr(t_test *test) {
    char s1[150] = "wertyuidfghjcvbn";
    char s2[150] = "wertyuidfghjcvbn";
    char *str = ft_strstr("wertyuidfghjcvbn", "1234878");
    char *str2 = strstr("wertyuidfghjcvbn", "1234878");
	int ret = 0;
    if (str || str2)
	{
		if (test->debug) {
			printf("%sft_strstr not found ret: %s%s\n", RED, str, RESET);
			printf("   %sstrstr not found ret: %s%s\n", GREEN, str2, RESET);
		}
		ret++;
	}
    return ret;

}


void test_strstr(t_test *test) {
    int ret = 0;
    ret += test_notfound_strstr(test);
    ret += test_large_strstr(test);
    ret += test_no_len_strstr(test);
    if (ret > 0)
        WRONG("strstr ");
    else
        GOOD("strstr ");
}

