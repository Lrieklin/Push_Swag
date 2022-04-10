/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_operation_swap_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:17:20 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/25 20:26:51 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	sa(t_stack **stack)
{
	t_stack	*new_stack;

	if ((*stack) == NULL || (*stack)->next == NULL)
		return ;
	new_stack = *stack;
	(*stack) = (*stack)->next;
	new_stack->next = (*stack)->next;
	(*stack)->next = new_stack;
}

void	sb(t_stack **stack)
{
	t_stack	*new_stack;

	if ((*stack) == NULL || (*stack)->next == NULL)
		return ;
	new_stack = *stack;
	(*stack) = (*stack)->next;
	new_stack->next = (*stack)->next;
	(*stack)->next = new_stack;
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*new_stack;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	new_stack = *stack_a;
	(*stack_a) = (*stack_a)->next;
	new_stack->next = (*stack_a)->next;
	(*stack_a)->next = new_stack;
	new_stack = *stack_b;
	(*stack_b) = (*stack_b)->next;
	new_stack->next = (*stack_b)->next;
	(*stack_b)->next = new_stack;
}
