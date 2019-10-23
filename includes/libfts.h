#ifndef __LIBFTS_H
# define __LIBFTS_H

# include <unistd.h>
# include <stdbool.h>

/**
 *  Mem function
 **/

void	ft_bzero(void *ptr, size_t size);
void	*ft_memalloc(size_t n);
void	ft_memclr(void **to_free, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_memdel(void **to_free);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memrchr(const void *s, int c, size_t n);
void	*ft_memrev(void *ptr, size_t size);
int		ft_memcmp(char *s1, char *s2, size_t size);

/**
 *  Str function
 **/
char	*ft_strnew(size_t n);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strjoinfree(char *s1, char *s2, int to_free);
char	*ft_strdup(char *str);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(char *str);
void	ft_strdel(char **to_free);
void	ft_strclr(char **to_free);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnchr(const char *s, int c, size_t size);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, size_t size);
int		ft_strequ(char *s1, char *s2);
int		ft_strnequ(char *s1, char *s2, size_t size);
char	*ft_strstr(char *s1, char *s2);
char	*ft_strrev(char *str);

/**
 *  Check function
 **/

int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(char c);
int		ft_isdigit(char c);
int		ft_islower(char c);
int		ft_isprint(char c);
int		ft_isspace(char c);
int		ft_isupper(char c);
int		ft_isneg(int i);

/**
 * 
 **/

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char *str);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl(char *str);
void	ft_putendl_fd(char *str, int fd);
void	ft_putstrlen(char *str, size_t len);
void	ft_putstrlen_fd(char *str, size_t len, int fd);

/**
 *  Other function
 **/

int		ft_toupper(char c);
int		ft_tolower(char c);
int		ft_puts(char *str);
int		ft_cat(int fd);
#endif