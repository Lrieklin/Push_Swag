/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_operation_rotate_bonus.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:51:40 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/25 20:18:55 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ra(t_stack **stack)
{
	t_stack	*buttom_stack;
	t_stack	*top_stack;

	if ((*stack) == NULL || (*stack)->next == NULL)
		return ;
	buttom_stack = *stack;
	top_stack = (*stack)->next;
	*stack = (*stack)->next;
	ft_lstadd_back(&top_stack, buttom_stack);
}

void	rb(t_stack **stack)
{
	t_stack	*buttom_stack;
	t_stack	*top_stack;

	if ((*stack) == NULL || (*stack)->next == NULL)
		return ;
	buttom_stack = *stack;
	top_stack = (*stack)->next;
	*stack = (*stack)->next;
	ft_lstadd_back(&top_stack, buttom_stack);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*buttom_stack;
	t_stack	*top_stack;

	if ((*stack_a) == NULL || (*stack_a)->next == NULL)
		return ;
	if ((*stack_b) == NULL || (*stack_b)->next == NULL)
		return ;
	buttom_stack = *stack_a;
	top_stack = (*stack_a)->next;
	*stack_a = (*stack_a)->next;
	ft_lstadd_back(&top_stack, buttom_stack);
	buttom_stack = *stack_b;
	top_stack = (*stack_b)->next;
	*stack_b = (*stack_b)->next;
	ft_lstadd_back(&top_stack, buttom_stack);
}
