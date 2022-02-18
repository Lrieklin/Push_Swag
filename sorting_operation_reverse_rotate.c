/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_operation_reverse_rotate.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:49:40 by lrieklin          #+#    #+#             */
/*   Updated: 2022/02/18 23:21:16 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*top_stack;
	// t_stack	*bottom_stack;

	top_stack = *stack;
	while ((*stack)->next != NULL)
		*stack = (*stack)->next;
	// bottom_stack = *stack;
	ft_lstadd_front(&top_stack, *stack);
	while (top_stack->next != *stack)
		top_stack = top_stack->next;
	top_stack->next = NULL;
}
