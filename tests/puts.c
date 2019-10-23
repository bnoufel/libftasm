#include "tests.h"

int test_empty_puts(t_test *test) {
	int ret = 0;
    printf("ft_puts: ");
    fflush(stdout);
    int res_ft_puts = ft_puts(NULL);
    printf("   puts: ");
    fflush(stdout);
    int res_puts = puts(NULL);
    if (res_ft_puts != res_puts)
	{
		if (test->debug) {
			printf("ft_puts : %d\n", res_ft_puts);
			printf("   puts : %d\n", res_puts);
		}
		ret += 1;
	}
    return (ret);
}
int test_normal_puts(t_test *test) {
	int ret = 0;
    printf("ft_puts: ");
    fflush(stdout);
    int res_ft_puts = ft_puts("789qwertyuioppokjhgfdscvbn,mnbvcxwertygbdwhfgwe ufhweiu fhweiu hfiuwe hfiuewh fiuweeufhidhaskjnasjkcnsxkcn nek fewffhffew hfehi feh fwehw fhf e hf ihefif eif eihu fhieuihfe if ifihfihfeihf ehif e");
    printf("   puts: ");
    fflush(stdout);
    int res_puts = puts("789qwertyuioppokjhgfdscvbn,mnbvcxwertygbdwhfgwe ufhweiu fhweiu hfiuwe hfiuewh fiuweeufhidhaskjnasjkcnsxkcn nek fewffhffew hfehi feh fwehw fhf e hf ihefif eif eihu fhieuihfe if ifihfihfeihf ehif e");
    if (res_ft_puts != res_puts)
	{
		if (test->debug) {
			printf("ft_puts : %d\n", res_ft_puts);
			printf("   puts : %d\n", res_puts);
		}
		ret += 1;
	}
    return (ret);
}

void test_puts(t_test *test) {
    int ret = 0;
    ret += test_empty_puts(test);
    ret += test_normal_puts(test);
    if (ret > 0)
        WRONG("puts");
    else
        GOOD("puts");
}