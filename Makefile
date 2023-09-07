##############################################################################
CC=cc
FLAGS=-Wall -Werror -Wextra
##############################################################################
NAME=libft.a
##############################################################################

C_FILES=	ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memccpy.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strlen.c		\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strncmp.c	\
			ft_atoi.c		\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_strlcat.c	\
			ft_memmove.c	\
			ft_strnstr.c	\
			ft_strlcpy.c	\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_itoa.c		\
			ft_strmapi.c	\
			ft_striteri.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c
C_OBJ=$(C_FILES:%.c=%.o)

BONUS_FILES=	ft_lstnew.c			\
				ft_lstadd_front.c	\
				ft_lstsize.c		\
				ft_lstlast.c		\
				ft_lstadd_back.c	\
				ft_lstdelone.c		\
				ft_lstclear.c		\
				ft_lstiter.c		\
				ft_lstmap.c
BONUS_OBJ=$(BONUS_FILES:%.c=%.o)

##############################################################################

all: $(NAME)

$(NAME): $(C_OBJ)
	ar crs $(NAME) $^

bonus: $(C_OBJ) $(BONUS_OBJ)
	ar crs $(NAME) $^

# It compiles all the .c files to .o if it is necessary
%.o: %.c
	$(CC) $(FLAGS) -c $<

##############################################################################

# "clear" deletes all the .o files
clear:
	@rm -f $(C_OBJ) $(BONUS_OBJ)

# "fclear" deletes all the .o files and the library generated
fclear: clear
	@rm -f $(NAME)

# "fclear" deletes all the .o files, the lybrary generated and make a new one
re: fclear $(NAME)

# ".PHONY" is added to prevent it from detecting files named "clear", "fclear" or "re"
.PHONY: clear fclear re
