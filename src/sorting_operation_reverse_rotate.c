/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_operation_reverse_rotate.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:49:40 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/25 20:24:07 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rra(t_stack **stack)
{
	t_stack	*top_stack;

	top_stack = *stack;
	if ((*stack) == NULL || (*stack)->next == NULL)
		return ;
	while ((*stack) == NULL || (*stack)->next == NULL)
		*stack = (*stack)->next;
	ft_lstadd_front(&top_stack, *stack);
	while (top_stack->next != *stack)
		top_stack = top_stack->next;
	top_stack->next = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_stack **stack)
{
	t_stack	*top_stack;

	top_stack = *stack;
	if ((*stack)->next == NULL)
		return ;
	while ((*stack)->next != NULL)
		*stack = (*stack)->next;
	ft_lstadd_front(&top_stack, *stack);
	while (top_stack->next != *stack)
		top_stack = top_stack->next;
	top_stack->next = NULL;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*top_stack;

	top_stack = *stack_a;
	if ((*stack_a) == NULL || (*stack_a)->next == NULL)
		return ;
	if ((*stack_b) == NULL || (*stack_b)->next == NULL)
		return ;
	while ((*stack_a)->next != NULL)
		*stack_a = (*stack_a)->next;
	ft_lstadd_front(&top_stack, *stack_a);
	while (top_stack->next != *stack_a)
		top_stack = top_stack->next;
	top_stack->next = NULL;
	top_stack = *stack_b;
	while ((*stack_b)->next != NULL)
		*stack_b = (*stack_b)->next;
	ft_lstadd_front(&top_stack, *stack_b);
	while (top_stack->next != *stack_b)
		top_stack = top_stack->next;
	top_stack->next = NULL;
	write(1, "rrr\n", 4);
}
