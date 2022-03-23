/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sorting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:35:57 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/23 20:42:27 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sorting_elements(t_stack **stack_a, t_stack **stack_b, int argc)
{
	if (argc == 3)//2
		sort_two_elements(stack_a, NULL);
	if (argc == 4)//3
		sort_three_elements(stack_a);
	if (argc == 5)//4
		sort_four_elements(stack_a, stack_b);
	if (argc == 6)//5
		sort_five_elements(stack_a, stack_b);
}

void	sort_two_elements(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a != NULL && (*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
	if (stack_b != NULL && (*stack_b)->index > (*stack_b)->next->index)
		sb(stack_b);
}

void	sort_three_elements(t_stack **stack_a)
{
	int	max;

	max = ft_max(*stack_a);
	if ((*stack_a)->index == max)
		ra(stack_a);
	if ((*stack_a)->next->index == max)
		rra(stack_a);
	if ((*stack_a)->index >= (*stack_a)->next->index)
		sa(stack_a);
}

void	sort_four_elements(t_stack **stack_a, t_stack **stack_b)
{
	int	max;

	max = ft_max(*stack_a);
	while ((*stack_a)->index != max)
		ra(stack_a);
	pb(stack_a, stack_b);
	sort_three_elements(stack_a);
	pa(stack_b, stack_a);
	ra(stack_a);
}

void	sort_five_elements(t_stack **stack_a, t_stack **stack_b)
{
	//printf("lol: %d\n", (*stack_a)->index);
	while (((*stack_a)->index != 4 && (*stack_a)->index != 3))
		ra(stack_a);
	pb(stack_a, stack_b);
	while (((*stack_a)->index != 3 && (*stack_a)->index != 4))
		ra(stack_a);
	pb(stack_a, stack_b);
	sort_three_elements(stack_a);
	sort_two_elements(NULL, stack_b);
	pa(stack_b, stack_a);
	ra(stack_a);
	pa(stack_b, stack_a);
	ra(stack_a);
	while (*stack_a)
	{
		// printf("%d\n", (*stack_a)->value);
		(*stack_a) = (*stack_a)->next;
	}
}
