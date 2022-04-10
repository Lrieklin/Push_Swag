NAME	=	../push_swap

SRCS	=	main.c	\
			algoritm.c\
			mini_sorting.c\
			parser.c \
			sorting_operation_swap.c \
			sorting_operation_push.c \
			sorting_operation_rotate.c \
			sorting_operation_reverse_rotate.c\
			search_min_max.c\
			
HEADER	=	pushswap.h

OBJ		=	$(SRCS:%.c=%.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

LIBFT	=	../libft/libft.a

HEADERLIBFT	=	../libft/libft.h

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(LIBFT) $(OBJ)
	cc $(OBJ) $(LIBFT) -o $(NAME)

%.o		:	%.c $(HEADER) $(HEADERLIBFT)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	rm -f $(OBJ) $(OBJ_B)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all
