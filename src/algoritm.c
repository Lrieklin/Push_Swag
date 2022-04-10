/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:35:28 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/24 22:16:41 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	steps(int m, t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (*stack_b)
	{
		i = 0;
		tmp = (*stack_b);
		while (tmp->index != m)
		{
			tmp = tmp->next;
			i++;
		}
		sort_pa(m, i, stack_a, stack_b);
		i = 0;
		m--;
	}
}

void	sort_pa(int n, int i, t_stack **stack_a, t_stack **stack_b)
{
	if (i >= (n / 2))
	{
		while ((*stack_b)->index != n)
			rrb(stack_b);
	}
	else
	{
		while ((*stack_b)->index != n)
			rb(stack_b);
	}
	pa(stack_b, stack_a);
}

void	sort_100(t_stack **stack_a, t_stack **stack_b, int argc)
{
	int	i;

	i = 0;
	while ((*stack_a) != NULL)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= i + 24)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
	steps(argc - 2, stack_a, stack_b);
}
