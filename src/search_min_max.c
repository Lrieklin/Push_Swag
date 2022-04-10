/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_min_max.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:12:50 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/25 19:57:40 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_max(t_stack *stack)
{
	int	max;

	max = stack->index;
	while (stack)
	{
		if (stack->index > max)
			max = stack->index;
		stack = stack->next;
	}
	return (max);
}

int	ft_min(t_stack *stack)
{
	int	min;

	min = stack->index;
	while (stack)
	{
		if (stack->index < min)
			min = stack->index;
		stack = stack->next;
	}
	return (min);
}

void	ft_indexing(t_stack **stack, int argc)
{
	int		min;
	int		counter;
	t_stack	*a;
	t_stack	*cur_min;

	counter = 0;
	while (counter != argc)
	{
		a = *stack;
		min = __INT_MAX__;
		while (a)
		{
			if (a->value <= min && a->index == -1)
			{
				min = a->value;
				cur_min = a;
			}
			a = a->next;
		}
		cur_min->index = counter;
		counter++;
	}
}
