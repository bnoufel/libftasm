#include <tests.h>
int test_empty_strncat(t_test *test) {
    char s1[10] = "";
    char s2[10] = "abc";
    char s3[10] = "";
    char s4[10] = "abc";
	int ret = 0;
    char *res_ft_strncat;
    char *res_strncat;

    res_ft_strncat = ft_strncat(s1, s2, 3);
    res_strncat = strncat(s3, s4, 3);
    if (strcmp(s1, s3) != 0 || strcmp(res_ft_strncat, res_strncat) != 0)
    {
		ret++;
		if (test->debug && strcmp(res_ft_strncat, res_strncat) != 0) {
			printf(" %sret ft_strncat test01 empty : %s%s\n", RED, res_ft_strncat, RESET);
			printf("    %sret strncat test01 empty : %s%s\n\n\n", GREEN, res_strncat, RESET);
		}
		if (test->debug && strcmp(s1, s3) != 0) {
			printf(" %sfisrt params (RDI) ft_strncat test01 empty : %s%s\n", RED, s1, RESET);
			printf("    %sfisrt params (RDI) strncat test01 empty : %s%s\n\n\n", GREEN, s3, RESET);
		}
	}
    char s5[10] = "abc";
    char s6[10] = "";
    char s7[10] = "abc";
    char s8[10] = "";
    res_ft_strncat = ft_strncat(s5, s6, 0);
    res_strncat = strncat(s7, s8, 0);
    if (strcmp(s5, s7) != 0 || strcmp(res_ft_strncat, res_strncat) != 0)
    {
		ret++;
		if (test->debug && strcmp(res_ft_strncat, res_strncat) != 0) {
			printf(" %sret ft_strncat test02 empty : %s%s\n", RED, res_ft_strncat, RESET);
			printf("    %sret strncat test02 empty : %s%s\n\n\n", GREEN, res_strncat, RESET);
		}
		if (test->debug && strcmp(s5, s7) != 0) {
			printf(" %sfisrt params (RDI) ft_strncat test02 empty : %s%s\n", RED, s5, RESET);
			printf("    %sfisrt params (RDI) strncat test02 empty : %s%s\n\n\n", GREEN, s7, RESET);
		}
	}
    char s9[10] = "";
    char s10[10] = "";
    char s11[10] = "";
    char s12[10] = "";
    res_ft_strncat = ft_strncat(s9, s10, 0);
    res_strncat = strncat(s11, s12, 0);
    if (strcmp(s9, s11) != 0 || strcmp(res_ft_strncat, res_strncat) != 0)
	{
		ret++;
		if (test->debug && strcmp(res_ft_strncat, res_strncat) != 0) {
			printf(" %sft_strncat test03 empty : %s%s\n", RED, res_ft_strncat, RESET);
			printf("    %sstrncat test03 empty : %s%s\n\n\n", GREEN, res_strncat, RESET);
		}
		if (test->debug && strcmp(s9, s11) != 0) {
			printf(" %sfisrt params (RDI) ft_strncat test01 empty : %s%s\n", RED, s9, RESET);
			printf("    %sfisrt params (RDI) strncat test01 empty : %s%s\n\n\n", GREEN, s1, RESET);
		}
	}
    return (ret);
}

int test_normal_strncat(t_test *test) {
    char s1[20] = "qwer";
    char s2[20] = "abc";
    char s3[20] = "qwer";
    char s4[20] = "abc";
	int ret = 0;
    char *res_ft_strncat;
    char *res_strncat;

    res_ft_strncat = ft_strncat(s1, s2, 3);
    res_strncat = strncat(s3, s4, 3);
    if (strcmp(s1, s3) != 0 || strcmp(res_ft_strncat, res_strncat) != 0)
    {
		ret++;
		if (test->debug && strcmp(res_ft_strncat, res_strncat) != 0) {
			printf("%sft_strncat test01 normal : %s%s\n", RED, res_ft_strncat, RESET);
			printf("    %sstrncat test01 normal : %s%s\n\n\n", GREEN, res_strncat, RESET);
		}
		if (test->debug && strcmp(s1, s3) != 0) {
			printf("%sfisrt params (RDI) ft_strncat test01 normal : %s%s\n", RED, s1, RESET);
			printf("     %sfisrt params (RDI) strncat test01 normal : %s%s\n\n\n", GREEN, s3, RESET);
		}
	}
    char s9[820] = "dfwqdqw";
    char s10[700] = "   Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum. Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.";
    char s11[820] = "dfwqdqw";
    char s12[700] = "   Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum. Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.";
    res_ft_strncat = ft_strncat(s9, s10, 230);
    res_strncat = strncat(s11, s12, 230);
    if (strcmp(s9, s11) != 0 || strcmp(res_ft_strncat, res_strncat) != 0)
    {
		ret++;
		if (test->debug && strcmp(res_ft_strncat, res_strncat) != 0) {
			printf("%sft_strncat test02 normal : %s%s\n", RED, res_ft_strncat, RESET);
			printf("   %sstrncat test02 normal : %s%s\n\n\n", GREEN, res_strncat, RESET);
		}
		if (test->debug && strcmp(s9, s11) != 0) {
			printf(" %sfisrt params (RDI) ft_strncat test02 normal : %s%s\n", RED, s9, RESET);
			printf("     %sfisrt params (RDI) strncat test02 normal : %s%s\n\n\n", GREEN, s1, RESET);
		}
	}
    return (ret);
}

void test_strncat(t_test *test) {
    int ret = 0;
    ret += test_empty_strncat(test);
    ret += test_normal_strncat(test);
    if (ret > 0)
        WRONG("strncat");
    else
        GOOD("strncat");
}