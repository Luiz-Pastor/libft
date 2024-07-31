##############################################################################
NAME = libft.a
#####################################################################################################################
COLOR_RED		= \e[31m
COLOR_GREEN		= \e[32m
COLOR_ORANGE	= \e[33m
COLOR_BLUE		= \e[34m
COLOR_CYAN		= \e[36m
COLOR_RESET		= \e[0m
##############################################################################
CC		:= cc
CFLAGS	:= -Wall -Werror -Wextra -O3 -fdiagnostics-color=always
##############################################################################
SRC_FOLDER = src
##############################################################################
VPATH =	src/gnl:src/libc:src/list:src/ft_printf:src/matrix:src/own

OBJ_FOLDER	=	obj
OBJ			:=

# Obligatory files
LIBC_SRC =	ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
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
			ft_isspace.c	\
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
			ft_putnbr_fd.c	\
			ft_strcmp.c
OBJ += $(LIBC_SRC:%.c=$(OBJ_FOLDER)/%.o)

# Optional files (bonus part)
LIST_SRC=	ft_lstnew.c		\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstdelone.c		\
			ft_lstclear.c		\
			ft_lstiter.c		\
			ft_lstmap.c
OBJ += $(LIST_SRC:%.c=$(OBJ_FOLDER)/%.o)

# Get_next_line files
GNL_SRC= 	get_next_line.c			\
			get_next_line_utils.c
OBJ += $(GNL_SRC:%.c=$(OBJ_FOLDER)/%.o)

# Ft_printf files
FT_PRINTF_SRC=	ft_placeholder_hexanumber.c	\
				ft_placeholder_number.c	\
				ft_placeholder_pointer.c	\
				ft_placeholder_string.c	\
				ft_placeholder_utilities.c	\
				ft_printf.c
OBJ += $(FT_PRINTF_SRC:%.c=$(OBJ_FOLDER)/%.o)

# Matrix files
MATRIX_SRC=	matrix_add.c		\
			matrix_length.c		\
			matrix_search.c		\
			matrix_free.c
OBJ += $(MATRIX_SRC:%.c=$(OBJ_FOLDER)/%.o)

# Own functions
OWN_SRC=	ft_strict_atoi.c	\
			ft_free.c
OBJ += $(OWN_SRC:%.c=$(OBJ_FOLDER)/%.o)

##############################################################################

all: print_start $(NAME) print_ok

# Lib compilation rule
$(NAME): $(OBJ)
	@ar crs $(NAME) $(OBJ)

# It compiles all the .c files to .o if it is necessary
$(OBJ_FOLDER)/%.o: %.c
	@mkdir -p $(OBJ_FOLDER)

	@RES=$$($(CC) $(CFLAGS) -c $< -o $@ 2> $(OBJ_FOLDER)/.error; echo $$?);							\
	if [ $$RES -ne 0 ]; then																		\
		echo "\r$(COLOR_RED)[ ERROR ] $(COLOR_ORANGE)Packeting \"libft\" library$(COLOR_RESET)";	\
		tail -n +1 $(OBJ_FOLDER)/.error;															\
		exit $$RES;																					\
	fi

##############################################################################

print_start:
	@echo -n "$(COLOR_CYAN)[......] $(COLOR_ORANGE)Packeting \"libft\" library$(COLOR_RESET)"

print_ok:
	@echo "\r$(COLOR_GREEN)[  OK  ] $(COLOR_ORANGE)Packeting \"libft\" library$(COLOR_RESET)"

##############################################################################

# "nm", "norm" and "norminette" check if the c and h files are ok according to the standard
nm: norminette
norm: norminette
norminette:
	@clear
	@norminette src/ include/ libft.h

# "clean" deletes all the .o files
clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_FOLDER)

# "fclean" deletes all the .o files and the library generated
fclean: clean
	@rm -rf $(NAME)

# "fclear" deletes all the .o files, the lybrary generated and make a new one
re: fclean all

##############################################################################

# Rule to clean all related to the git files/project
env:
	@rm -rf .gitignore README.md .git tests/

##############################################################################

# ".PHONY" is added to prevent it from detecting files named "all", "clean", "fclean" or "re"
.PHONY: all clean fclean re print_start print_ok nm norm norminette
