/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:37:35 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/25 19:16:53 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	err(void)
{
	write(1, "Error\n", 7);
	exit(1);
}

void	apple(char *string, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strncmp(string, "sa\n", 3) == 0)
		sa(stack_a);
	else if (ft_strncmp(string, "sb\n", 3) == 0)
		sb(stack_b);
	else if (ft_strncmp(string, "ss\n", 3) == 0)
		ss(stack_a, stack_b);
	else if (ft_strncmp(string, "pa\n", 3) == 0)
		pa(stack_b, stack_a);
	else if (ft_strncmp(string, "pb\n", 3) == 0)
		pb(stack_a, stack_b);
	else if (ft_strncmp(string, "ra\n", 3) == 0)
		ra(stack_a);
	else if (ft_strncmp(string, "rb\n", 3) == 0)
		rb(stack_b);
	else if (ft_strncmp(string, "rr\n", 3) == 0)
		rr(stack_a, stack_b);
	else if (ft_strncmp(string, "rra\n", 4) == 0)
		rra(stack_a);
	else if (ft_strncmp(string, "rrb\n", 4) == 0)
		rrb(stack_b);
	else if (ft_strncmp(string, "rrr\n", 4) == 0)
		rrr(stack_a, stack_b);
	else
		err();
}

void	proverka(t_stack **stack_a, t_stack **stack_b)
{
	char	*string;

	string = get_next_line(0);
	if (string == NULL)
		return ;
	apple(string, stack_a, stack_b);
	free(string);
	string = get_next_line(0);
	while (string != NULL)
	{
		apple(string, stack_a, stack_b);
		free(string);
		string = get_next_line(0);
	}
}

void	sort_or_not(t_stack *stack, t_stack *stack_b)
{
	if (stack_b != NULL)
	{
		write(1, "KO\n", 3);
		return ;
	}
	while (stack->next != NULL && stack->value < stack->next->value)
		stack = stack->next;
	if (stack->next == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		count;

	count = argc - 1;
	if (argc == 1)
		return (1);
	if (argc > 1)
	{
		stack_b = NULL;
		check_for_digit(argv);
		check_borders_int(argc, argv);
		stack_a = ready_stack(argc, argv);
		proverka_na_dublikaty(stack_a);
		proverka(&stack_a, &stack_b);
		sort_or_not(stack_a, stack_b);
		stack_clear(stack_a);
		stack_clear(stack_b);
	}
}
