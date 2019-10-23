#include "tests.h"
void test_isalpha(t_test *test) {
    int ret = 0;
    char c = SCHAR_MIN;
    int res_is;
    int res_ft_is;
    while (c < SCHAR_MAX) {
        res_ft_is = ft_isalpha(c);
        res_is = isalpha(c);
        if (res_ft_is != res_is)
		{
			if (test->debug) {
				printf("char test %d\n", c);
				printf("ft_isalpha: %d\n", res_ft_is);
				printf("isalpha: %d\n", res_is);
			}
			ret += 1;
		}
        c++;
    }
    if (ret > 0)
        WRONG("isalpha");
    else
        GOOD("isalpha");
}


void test_isdigit(t_test *test) {
    int ret = 0;
    int c = CHAR_MIN;
    int res_is;
    int res_ft_is;
    while (c < CHAR_MAX) {
        res_ft_is = ft_isdigit(c);
        res_is = isdigit(c);
        if (res_ft_is != res_is)
        {
			if (test->debug) {
				printf("char test %d\n", c);
				printf("ft_isdigit: %d\n", res_ft_is);
				printf("isdigit: %d\n", res_is);
			}
			ret += 1;
		}
        c++;
    }
    if (ret > 0)
        WRONG("isdigit");
    else
        GOOD("isdigit");
}

void test_isalnum(t_test *test) {
    int ret = 0;
    char c = SCHAR_MIN;
    int res_is;
    int res_ft_is;
    while (c < SCHAR_MAX) {
        res_ft_is = ft_isalnum(c);
        res_is = isalnum(c);
        if (res_ft_is != res_is)
        {
			if (test->debug) {
				printf("char test %d\n", c);
				printf("ft_isalnum: %d\n", res_ft_is);
				printf("isalnum: %d\n", res_is);
			}
			ret += 1;
		}
        c++;
    }
    if (ret > 0)
        WRONG("isalnum");
    else
        GOOD("isalnum");
}

void test_isascii(t_test *test) {
    int ret = 0;
    char c = SCHAR_MIN;
    int res_is;
    int res_ft_is;
    while (c < SCHAR_MAX) {
        res_ft_is = ft_isascii(c);
        res_is = isascii(c);
        if (res_ft_is != res_is)
        {
			if (test->debug) {
				printf("char test %d\n", c);
				printf("ft_isascii: %d\n", res_ft_is);
				printf("isascii: %d\n", res_is);
			}
			ret += 1;
		}
        c++;
    }
    if (ret > 0)
        WRONG("isascii");
    else
        GOOD("isascii");
}

void test_isprint(t_test *test) {
    int ret = 0;
    char c = SCHAR_MIN;
    int res_is;
    int res_ft_is;
    while (c < SCHAR_MAX) {
        res_ft_is = ft_isprint(c);
        res_is = isprint(c);
        if (res_ft_is != res_is)
        {
			if (test->debug) {
				printf("char test %d\n", c);
				printf("ft_isprint: %d\n", res_ft_is);
				printf("isprint: %d\n", res_is);
			}
			ret += 1;
		}
        c++;
    }
    if (ret > 0)
        WRONG("isprint");
    else
        GOOD("isprint");
}


void test_toupper(t_test *test) {
    int ret = 0;
    char c = SCHAR_MIN;
    int res_is;
    int res_ft_is;
    while (c < SCHAR_MAX) {
        res_ft_is = ft_toupper(c);
        res_is = toupper(c);
        if (res_ft_is != res_is)
        {
			if (test->debug) {
				printf("char test %d\n", c);
				printf("ft_toupper: %d\n", res_ft_is);
				printf("toupper: %d\n", res_is);
			}
			ret += 1;
		}
        c++;
    }
    if (ret > 0)
        WRONG("toupper");
    else
        GOOD("toupper");
}

void test_tolower(t_test *test) {
    int ret = 0;
    char c = SCHAR_MIN;
    int res_is;
    int res_ft_is;
    while (c < SCHAR_MAX) {
        res_ft_is = ft_tolower(c);
        res_is = tolower(c);
        if (res_ft_is != res_is)
		{
			if (test->debug) {
        	    printf("char test %d\n", c);
				printf("ft_tolower: %d\n", res_ft_is);
				printf("tolower: %d\n", res_is);
			}
			ret += 1;
		}
        c++;
    }
    if (ret > 0)
        WRONG("tolower");
    else
        GOOD("tolower");
}

void test_isspace(t_test *test) {
    int ret = 0;
    char c = SCHAR_MIN;
    int res_is;
    int res_ft_is;
    while (c < SCHAR_MAX) {
        res_ft_is = ft_isspace(c);
        res_is = isspace(c);
        if (res_ft_is != res_is)
        {
			if (test->debug) {
				printf("char test %d\n", c);
				printf("ft_isspace: %d\n", res_ft_is);
				printf("isspace: %d\n", res_is);
			}
			ret += 1;
		}
        c++;
    }
    if (ret > 0)
        WRONG("isspace");
    else
        GOOD("isspace");
}

void test_isneg(t_test *test) {
    int i = -256;
	int ret = 0;
	while (++i < 255)
	{
		if (i < 0 && !ft_isneg(i))
			ret++;
	}
    if (ret > 0)
        WRONG("isneg");
    else
        GOOD("isneg");
}


void test_isupper(t_test *test) {
    int ret = 0;
    char c = SCHAR_MIN;
    int res_is;
    int res_ft_is;
    while (c < SCHAR_MAX) {
        res_ft_is = ft_isupper(c);
        res_is = isupper(c);
        if (res_ft_is != res_is)
        {
			if (test->debug) {
				printf("char test %d\n", c);
				printf("ft_isupper: %d\n", res_ft_is);
				printf("isupper: %d\n", res_is);
			}
			ret += 1;
		}
        c++;
    }
    if (ret > 0)
        WRONG("isupper");
    else
        GOOD("isupper");
}

void test_islower(t_test *test) {
    int ret = 0;
    char c = SCHAR_MIN;
    int res_is;
    int res_ft_is;
    while (c < SCHAR_MAX) {
        res_ft_is = ft_islower(c);
        res_is = islower(c);
        if (res_ft_is != res_is)
        {
			if (test->debug) {
				printf("char test %d\n", c);
				printf("ft_islower: %d\n", res_ft_is);
				printf("islower: %d\n", res_is);
			}
			ret += 1;
		}
        c++;
    }
    if (ret > 0)
        WRONG("islower");
    else
        GOOD("islower");
}