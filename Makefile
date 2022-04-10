# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 22:11:05 by lrieklin          #+#    #+#              #
#    Updated: 2022/03/24 22:14:45 by lrieklin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY		:	all clean fclean re bonus rebonus libft

all			:	libft 
				make -C src

bonus		:	libft
				make -C bonus

libft		:
				make -C libft bonus

clean		:
				make -C src clean
				make -C bonus clean
				make -C libft clean

fclean		:
				make -C src fclean
				make -C bonus fclean
				make -C libft fclean
	
re			:	fclean all

rebonus		:	fclean bonus
