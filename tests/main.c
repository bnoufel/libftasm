#include "tests.h"
int main(int argc, char **argv) {
    t_test  test;

    test.ret = 0;
    test.debug = 0;
    if (argc == 2) {
        if (!strcmp(argv[1], "--debug")) {
            test.debug = 1;
        }
    }
    test_bzero(&test);
    test_strcat(&test);
    test_isalpha(&test);
    test_isdigit(&test);
	test_islower(&test);
	test_isupper(&test);
    test_isalnum(&test);
    test_isascii(&test);
    test_isspace(&test);
    test_isprint(&test);
    test_toupper(&test);
    test_tolower(&test);
    test_strlen(&test);
    test_memset(&test);
    test_memcpy(&test);
	test_strncpy(&test);
    test_strjoin(&test);
    test_strdup(&test);
	test_strcpy(&test);
	test_memalloc(&test); // ft_memalloc && ft_strnew
	test_strlcat(&test);
	test_strncat(&test);
	test_strsub(&test);
	test_isneg(&test);
	test_memchr(&test);
	test_memcmp(&test);
	test_memrchr(&test);
	test_strnchr(&test);
	test_strstr(&test);
	test_memrev(&test);
	ft_putendl("------------ Tests ft_putchar ------------");
	ft_putchar('a');
	ft_putchar('b');
	ft_putchar('c');
	ft_putchar('\n');
	ft_putendl("------------ Tests ft_putchar_fd ------------");
	ft_putchar_fd('a', 2);
	ft_putchar_fd('b', 2);
	ft_putchar_fd('c', 2);
	ft_putchar('\n');
	ft_putendl("------------ Tests ft_putstr ------------");
	ft_putstr("wertyuio");
	ft_putstr("");
	ft_putchar('\n');
	ft_putendl("------------ Tests ft_putstr_fd ------------");
	ft_putstr_fd("wertyuio", 2);
	ft_putstr_fd("", 2);
	ft_putchar('\n');
	ft_putendl("------------ Tests ft_putstrlen ------------");
	ft_putstrlen("wertyuio", 4);
	ft_putstrlen("", 0);
	ft_putchar('\n');
	ft_putendl("------------ Tests ft_putstrlen_fd ------------");
	ft_putstrlen_fd("wertyuio", 4, 2);
	ft_putstrlen_fd("", 0, 2);

	ft_putchar('\n');
	ft_putendl("------------ Tests ft_putendl ------------");
	ft_putendl("wertyuio");
	ft_putendl("");
	ft_putendl("------------ Tests ft_putendl_fd ------------");

	ft_putendl_fd("wertyuio", 2);
	ft_putendl_fd("", 2);

	ft_putendl("------------ Tests ft_puts ------------");
    test_puts(&test);

}