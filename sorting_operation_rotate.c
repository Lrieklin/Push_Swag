/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_operation_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:51:40 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/23 21:39:13 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ra(t_stack **stack)
{
	t_stack	*buttom_stack;
	t_stack	*top_stack;

	if ((*stack)->next == NULL)
		return ;
	buttom_stack = *stack;
	top_stack = (*stack)->next;
	*stack = (*stack)->next;
	ft_lstadd_back(&top_stack, buttom_stack);
	write(1, "ra\n", 3);
}

void	rb(t_stack **stack)
{
	t_stack	*buttom_stack;
	t_stack	*top_stack;

	if ((*stack)->next == NULL)
		return ;
	buttom_stack = *stack;
	top_stack = (*stack)->next;
	*stack = (*stack)->next;
	ft_lstadd_back(&top_stack, buttom_stack);
	write(1, "rb\n", 3);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*buttom_stack;
	t_stack	*top_stack;

	if ((*stack_a)->next == NULL && (*stack_b)->next == NULL) 
		return ;
	buttom_stack = *stack_a;
	top_stack = (*stack_a)->next;
	*stack_a = (*stack_a)->next;
	ft_lstadd_back(&top_stack, buttom_stack);
	
	buttom_stack = *stack_b;
	top_stack = (*stack_b)->next;
	*stack_b = (*stack_b)->next;
	ft_lstadd_back(&top_stack, buttom_stack);

	write(1, "rr\n", 3);
}
