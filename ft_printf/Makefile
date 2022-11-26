NAME = libftprintf.a

CC = cc -Wall -Wextra -Werror
RM = rm -f

SRCS = $(shell find "." -name "*.c")
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -c $(SRCS)
	ar rcs ${NAME} $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re .c.o