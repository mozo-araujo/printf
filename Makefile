
NAME = libftprintf.a

LIBFT = libft

DIR_SRC = src

DIR_OBJS = objs

HEADER = include

SOURCES = 

SRC = $(addprefix $(DIR_SRC)/,$(SOURCES))

OBJS = $(addprefix $(DIR_OBJS)/,$(SOURCES:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT)
	cp libft/libft.a ./$(NAME)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(DIR_OBJS)/%.o: $(DIR_SRC)/%.c
	mkdir -p objs
	gcc -Wall -Wextra -Werror -g -I $(HEADER) -o $@ -c $<

clean:
	rm -f $(OBJS)
	rm -rf $(DIR_OBJS)
	make clean -C $(LIBFT)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT)

re: fclean all

bonus: fclean all

.PHONY: all clean fclean re bonus