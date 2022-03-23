/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:10:32 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/23 22:48:05 by lrieklin         ###   ########.fr       */
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
void	sb(t_stack **stack);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **from_stack, t_stack **to_stack);
void	pb(t_stack **from_stack, t_stack **to_stack);
void	ra(t_stack **stack);
void	rb(t_stack **stack);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack);
void	rrb(t_stack **stack);
void	rrr(t_stack **stack_a, t_stack **stack_b);
int		ft_max(t_stack *stack);
int		ft_min(t_stack *stack);
void	ft_indexing(t_stack **stack, int argc);
void	sorting_elements(t_stack **stack_a, t_stack **stack_b, int argc);
void	sort_two_elements(t_stack **stack_a, t_stack **stack_b);
void	sort_three_elements(t_stack **stack_a);
void	sort_four_elements(t_stack **stack_a, t_stack **stack_b);
void	sort_five_elements(t_stack **stack_a, t_stack **stack_b);
void	steps(int m, t_stack **stack_b, t_stack ** stack_a);

t_stack	*ready_stack(int argc, char **argv);
void	sort_pa(int n, int i, t_stack **stack_a, t_stack **stack_b);
void	sort_100(t_stack **stack_a, t_stack **stack_b, int argc);
// void	sort_500(t_stack **stack_a, t_stack **stack_b);

#endif
