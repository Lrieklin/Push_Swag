/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:10:32 by lrieklin          #+#    #+#             */
/*   Updated: 2022/02/18 22:53:12 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

void	print(void);
int		*from_char_to_int(int argc, char **argv);
void	check_for_digit(char **argv);
void	check_borders_int(int argc, char **argv);
void	check_for_sort(t_stack *stack);
void	proverka_na_dublikaty(t_stack *stack);
void	sa(t_stack **stack);
void	push(t_stack **from_stack, t_stack **to_stack);
void	rotate(t_stack **stack);
void	reverse_rotate(t_stack **stack);
t_stack	*ready_stack(int argc, char **argv);


#endif
