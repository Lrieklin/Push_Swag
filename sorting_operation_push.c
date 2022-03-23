/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_operation_push.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:46:47 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/23 22:56:37 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pa(t_stack **from_stack, t_stack **to_stack)
{
	t_stack	*top_stack;

	if ((*from_stack) == NULL)
		return ;
	top_stack = *from_stack;
	*from_stack = (*from_stack)->next;
	ft_lstadd_front(to_stack, top_stack);
	write(1, "pa\n", 3);
}

void	pb(t_stack **from_stack, t_stack **to_stack)
{
	t_stack	*top_stack;

	if (*from_stack == NULL)
		return ;
	top_stack = *from_stack;
	*from_stack = (*from_stack)->next;
	ft_lstadd_front(to_stack, top_stack);
	write(1, "pb\n", 3);
}
