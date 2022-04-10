/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:31:14 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/24 23:12:42 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "../libft/libft.h"
# include "gnl/get_next_line.h"

void	check_borders_int(int argc, char **argv);
void	check_for_digit(char **argv);
t_stack	*ready_stack(int argc, char **argv);
void	proverka_na_dublikaty(t_stack *stack);
void	check_for_sort(t_stack *stack);
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
void	proverka(t_stack **stack_a, t_stack **stack_b);
void	err(void);
void	apple(char *string, t_stack **stack_a, t_stack **stack_b);
void	sort_or_not(t_stack *stack, t_stack *stack_b);
#endif