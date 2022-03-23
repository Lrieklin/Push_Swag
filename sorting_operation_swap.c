/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_operation_swap.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:17:20 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/23 21:15:24 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_stack **stack)
{
	t_stack	*new_stack;

	if (stack == NULL || (*stack)->next == NULL)
		return ;
	new_stack = *stack;
	(*stack) = (*stack)->next;
	new_stack->next = (*stack)->next; // поле new_stack->next теперь сожержит указатель на stack->next
	(*stack)->next = new_stack;
	write(1, "sa\n", 3);
}

void	sb(t_stack **stack)
{
	t_stack	*new_stack;

	if (stack == NULL || (*stack)->next == NULL)
		return ;
	new_stack = *stack;
	(*stack) = (*stack)->next;
	new_stack->next = (*stack)->next; // поле new_stack->next теперь сожержит указатель на stack->next
	(*stack)->next = new_stack;
	write(1, "sb\n", 3);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*new_stack;

	if (stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	if (stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	new_stack = *stack_a;
	(*stack_a) = (*stack_a)->next;
	new_stack->next = (*stack_a)->next; // поле new_stack->next теперь сожержит указатель на stack->next
	(*stack_a)->next = new_stack;
	new_stack = *stack_b;
	(*stack_b) = (*stack_b)->next;
	new_stack->next = (*stack_b)->next; // поле new_stack->next теперь сожержит указатель на stack->next
	(*stack_b)->next = new_stack;
	write(1, "ss\n", 3);
}
