NAME = libfts.a
FT_CAT = ft_cat
FT_TEST = test
GREEN = \x1b[32;1m
RESET = \x1b[0m
SRCSDIR = srcs
OBJSDIR = objs
SRC = 	ft_bzero.s ft_cat.s ft_isalnum.s ft_isalpha.s ft_isascii.s ft_isdigit.s \
		ft_islower.s ft_isneg.s ft_isprint.s ft_isspace.s ft_isupper.s ft_memalloc.s \
		ft_memchr.s ft_memclr.s ft_memcmp.s ft_memcpy.s ft_memdel.s ft_memmove.s \
		ft_memrchr.s ft_memrev.s ft_memset.s ft_putchar.s ft_putchar_fd.s ft_putendl.s \
		ft_putendl_fd.s ft_puts.s ft_putstr.s ft_putstr_fd.s ft_putstrlen.s \
		ft_putstrlen_fd.s ft_strcat.s ft_strchr.s ft_strclr.s ft_strcmp.s ft_strcpy.s \
		ft_strdel.s ft_strdup.s ft_strequ.s ft_strjoin.s ft_strjoinfree.s ft_strlcat.s \
		ft_strlen.s ft_strncat.s ft_strnchr.s ft_strncmp.s ft_strncpy.s ft_strnequ.s \
		ft_strnew.s ft_strrchr.s ft_strrev.s ft_strstr.s ft_strsub.s ft_tolower.s ft_toupper.s

NASM = nasm -f macho64
CC = gcc -Wall -Werror -Wextra
HEADERDIR 	=	includes
HEADER 		= 	libfts.h tests.h
OBJ 		= 	$(SRC:%.s=%.o)
SRCS 		= 	$(addprefix $(SRCSDIR)/, $(SRC))
OBJS 		= 	$(addprefix $(OBJSDIR)/, $(OBJ))
HEADERS		=	$(addprefix $(HEADERDIR)/, $(HEADER))
TESTDIR = tests
TESTOBJS = objstest
SRCTEST = 	bzero.c is.c main.c memcpy.c memset.c puts.c strcat.c strdup.c strlen.c \
			strjoin.c strcpy.c strncpy.c memalloc.c strlcat.c strncat.c strsub.c \
			memchr.c memcmp.c memrchr.c strnchr.c strstr.c memrev.c
OBJTEST		= 	$(SRCTEST:%.c=%.o)
SRCSTEST	= 	$(addprefix $(TESTDIR)/, $(SRCTEST))
OBJSTEST	= 	$(addprefix $(TESTOBJS)/, $(OBJTEST))

all: $(NAME) $(FT_CAT)

$(FT_CAT):
	@gcc -Wall -Wextra -Werror tests/ft_cat.c -L. -lfts -o $(FT_CAT)
	@echo "${GREEN}Compiling ${FT_CAT} [√] ${RESET}"

$(NAME): $(OBJSDIR) $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "${GREEN}Compiling ${NAME} [√] ${RESET}"

$(FT_TEST): $(NAME) $(TESTOBJS) $(OBJSTEST)
	gcc $(OBJSTEST) -L. -lfts -o ft_$(FT_TEST)

$(TESTOBJS)/%.o: $(TESTDIR)/%.c $(HEADERS)
	@gcc -c -o $@ $< -Iincludes
$(OBJSDIR)/%.o: $(SRCSDIR)/%.s $(HEADERS)
	@$(NASM) -o $@ $<

$(OBJSDIR):
	@mkdir -p $(OBJSDIR)
$(TESTOBJS):
	@mkdir -p $(TESTOBJS)

clean:
	@rm -rf $(OBJSDIR) $(TESTOBJS)
fclean: clean
	@rm -f $(NAME) $(FT_TEST) $(FT_CAT)
re: fclean all

.PHONY: all, clean, fclean, re

.SUFFIXES: .s .o