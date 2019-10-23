#ifndef LIBFTASM_TESTS_H
# define LIBFTASM_TESTS_H
# include "libfts.h"
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include <ctype.h>
# include <fcntl.h>
# define RED		"\x1b[31;1m"
# define GREEN		"\x1b[32;1m"
# define RESET		"\x1b[0m"

# define GOOD(x) dprintf(2, "%s%s Works%s\n", GREEN, x, RESET)
# define WRONG(x) dprintf(2, "%s%s Fail%s\n", RED, x, RESET)

typedef struct	s_test {
    int			debug;
    int			ret;
}				t_test;
void			test_bzero(t_test *test);
void			test_strcat(t_test *test);
void			test_isalpha(t_test *test);
void			test_isspace(t_test *test);
void			test_isdigit(t_test *test);
void			test_isalnum(t_test *test);
void			test_isascii(t_test *test);
void			test_isupper(t_test *test);
void			test_islower(t_test *test);
void			test_isprint(t_test *test);
void			test_toupper(t_test *test);
void			test_tolower(t_test *test);
void			test_puts(t_test *test);
void			test_strlen(t_test *test);
void			test_memset(t_test *test);
void			test_memcpy(t_test *test);
void			test_strdup(t_test *test);
void			test_strjoin(t_test *test);
void			test_strcpy(t_test *test);
void			test_strncpy(t_test *test);
void			test_memalloc(t_test *test);
void			test_strlcat(t_test *test);
void			test_strncat(t_test *test);
void			test_strsub(t_test *test);
void			test_isneg(t_test *test);
void			test_memchr(t_test *test);
void			test_memchr(t_test *test);
void			test_memcmp(t_test *test);
void			test_memrchr(t_test *test);
void			test_strnchr(t_test *test);
void			test_strstr(t_test *test);
void			test_memrev(t_test *test);
#endif //LIBFTASM_TESTS_H