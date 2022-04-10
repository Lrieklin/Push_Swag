# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 22:12:52 by lrieklin          #+#    #+#              #
#    Updated: 2022/03/25 20:35:15 by lrieklin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	../checker

SRCS	=	gnl/get_next_line.c	\
			gnl/get_next_line_utils.c	\
			main_bonus.c	\
			parser_bonus.c \
			sorting_operation_swap_bonus.c \
			sorting_operation_push_bonus.c \
			sorting_operation_rotate_bonus.c \
			sorting_operation_reverse_rotate_bonus.c\
			
HEADER		=	checker_bonus.h
HEADERLIBFT	=	../libft/libft.h

OBJ		=	$(SRCS:%.c=%.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

LIBFT	=	../libft/libft.a

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
