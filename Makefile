NAME = 			libft.a
CC = 			gcc
CFLAGS = 		-Wall -Werror -Wextra
SRCS = 			ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
				ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strcat.c \
				ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlen.c \
				ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnstr.c \
				ft_strrchr.c ft_strstr.c ft_tolower.c ft_toupper.c \
				ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_strlcat.c \
				ft_itoa.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_putendl.c \
				ft_memalloc.c ft_memdel.c ft_strclr.c ft_strdel.c ft_strnew.c \
				ft_strequ.c ft_strnequ.c \
				ft_putnbr_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c \
				ft_strsplit.c ft_strjoin.c ft_strmap.c ft_strmapi.c \
				ft_strsub.c ft_striter.c ft_striteri.c ft_strtrim.c \
				ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c \
				ft_lstmap.c ft_lstnew.c \
				ft_lstaddback.c ft_memrcpy.c ft_isblank.c ft_islower.c \
				ft_isupper.c ft_isspace.c ft_str_isalnum.c ft_str_isalpha.c \
				ft_str_isascii.c ft_str_isdigit.c ft_str_islower.c \
				ft_str_isprint.c ft_str_isupper.c ft_str_tolower.c \
				ft_str_toupper.c ft_itoa_base.c ft_atoi_base.c \
				ft_lstsize.c ft_lstrev.c ft_lstsort.c ft_lstmerge.c \
				ft_lstdelif.c ft_lstiterif.c ft_lstlast.c ft_lstfind.c \
				ft_lstat.c
OBJS = 			$(SRCS:.c=.o)
HEADERPATH = 	./

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $@ $^ && ranlib $@

%.o: %.c
	@$(CC) $(CFLAGS) -c $^ -I $(HEADERPATH)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
