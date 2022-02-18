/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_operation_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:51:40 by lrieklin          #+#    #+#             */
/*   Updated: 2022/02/18 20:58:58 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rotate(t_stack **stack)
{
	t_stack	*buttom_stack;
	t_stack	*top_stack;

	buttom_stack = *stack;
	top_stack = (*stack)->next;
	*stack = (*stack)->next;
	ft_lstadd_back(&top_stack, buttom_stack);
	while (*stack != NULL)
	{
		printf("stack_a == %d\n", (*stack)->index);
		*stack = (*stack)->next;
	}
	// buttom_stack->next = NULL;
}
