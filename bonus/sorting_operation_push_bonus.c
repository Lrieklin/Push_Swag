/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_operation_push.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:46:47 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/24 22:54:20 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	pa(t_stack **from_stack, t_stack **to_stack)
{
	t_stack	*top_stack;

	if ((*from_stack) == NULL)
		return ;
	top_stack = *from_stack;
	*from_stack = (*from_stack)->next;
	ft_lstadd_front(to_stack, top_stack);
}

void	pb(t_stack **from_stack, t_stack **to_stack)
{
	t_stack	*top_stack;

	if (*from_stack == NULL)
		return ;
	top_stack = *from_stack;
	*from_stack = (*from_stack)->next;
	ft_lstadd_front(to_stack, top_stack);
}
