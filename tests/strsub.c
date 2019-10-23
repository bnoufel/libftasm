#include "tests.h"

char	*ft_strsub_c(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = NULL;
	if (!(str = (char *)(malloc(sizeof(char) * (len + 1)))))
		return (NULL);
	if (!s)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int test_normal_strsub(t_test *test) {
	char *ret = ft_strsub("le soleil est beau", 5, 12);
	char *retc = ft_strsub_c("le soleil est beau", 5, 12);
	int result = 0;
    if (strcmp(ret, retc) != 0)
    {
		if (test->debug) {
			printf("%sft_strsub  asm: %s%s\n", RED, ret, RESET);
			printf("   %sstrsub in c: %s%s\n", GREEN, retc, RESET);
		}
		result += 1;
	}
    return (result);
}

int test2(t_test *test) {
	char *ret = ft_strsub("le soleil est beau", 5, 120);
	char *retc = ft_strsub_c("le soleil est beau", 5, 120);
	int result = 0;
    if (strcmp(ret, retc) != 0)
    {
		if (test->debug) {
			printf("%sft_strsub  asm: %s%s\n", RED, ret, RESET);
			printf("   %sstrsub in c: %s%s\n", GREEN, retc, RESET);
		}
		result += 1;
	}
    return (result);
}


int test3(t_test *test) {
	char *ret = ft_strsub("le soleil est beau", 100, 12);
	char *retc = ft_strsub_c("le soleil est beau", 100, 12);
	int result = 0;
    if (strcmp(ret, retc) != 0)
    {
		if (test->debug) {
			printf("%sft_strsub  asm: %s%s\n", RED, ret, RESET);
			printf("   %sstrsub in c: %s%s\n", GREEN, retc, RESET);
		}
		result += 1;
	}
    return (result);
}

int test4(t_test *test) {
	char *ret = ft_strsub("le soleil est beau", 0, 12);
	char *retc = ft_strsub_c("le soleil est beau", 0, 12);
	int result = 0;
    if (strcmp(ret, retc) != 0)
    {
		if (test->debug) {
			printf("%sft_strsub  asm: %s%s\n", RED, ret, RESET);
			printf("   %sstrsub in c: %s%s\n", GREEN, retc, RESET);
		}
		result += 1;
	}
    return (result);
}

void test_strsub(t_test *test) {
    int result = 0;
    result += test_normal_strsub(test);
    result += test2(test);
    result += test3(test);
    result += test4(test);
    if (result > 0)
        WRONG("strsub");
    else
        GOOD("strsub");
}