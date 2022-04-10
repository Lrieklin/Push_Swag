/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:12:12 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/25 20:04:40 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	check_borders_int(int argc, char **argv)
{
	int	i;
	int	res;

	i = 1;
	while (argc != 1)
	{
		res = ft_atoi(argv[i]);
		i++;
		argc--;
	}
}

void	check_for_digit(char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (argv[j] != NULL)
	{
		i = 0;
		if (argv[j][i] == '-')
			i++;
		if (argv[j][i] == '\0')
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		while (ft_isdigit(argv[j][i]))
		{
			i++;
		}
		if (argv[j][i] != '\0')
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		j++;
	}
}

t_stack	*ready_stack(int argc, char **argv)
{
	t_stack	*stack;
	t_stack	*start;

	start = NULL;
	while (argc != 1)
	{
		stack = ft_lstnew(ft_atoi(argv[argc - 1]));
		if (!stack)
			exit(1);
		ft_lstadd_front(&start, stack);
		argc--;
	}
	return (start);
}

void	proverka_na_dublikaty(t_stack *stack)
{
	t_stack	*check;

	while (stack != NULL)
	{
		check = stack;
		stack = stack->next;
		while (stack != NULL)
		{
			if (check->value == stack->value)
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			stack = stack->next;
		}
		stack = check->next;
	}
}

void	check_for_sort(t_stack *stack)
{
	while (stack->next != NULL && stack->value < stack->next->value)
		stack = stack->next;
	if (stack->next == NULL)
		exit(1);
}
