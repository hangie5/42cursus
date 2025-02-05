NAME 	= libftprintf.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -fr
LIBC	= ar rcs

SRCS	=	ft_printf.c \
			ft_write.c \
			ft_printf_decimal.c \
			ft_printf_hexadecimal.c \
			ft_printf_pointer.c \
			ft_printf_unsigned.c \


OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	${LIBC} $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
