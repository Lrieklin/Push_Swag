/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_operation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:17:20 by lrieklin          #+#    #+#             */
/*   Updated: 2022/02/18 18:39:20 by lrieklin         ###   ########.fr       */
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
}
