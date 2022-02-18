/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:12:12 by lrieklin          #+#    #+#             */
/*   Updated: 2022/02/17 17:30:16 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	check_borders_int(int argc, char **argv)
{
	int	i;
	int	res;

	i = 0;
	while (argc != 1)
	{
		res = ft_atoi(argv[i]);
		if (res == 0 && ft_strlen(argv[i]) != 1)
		{
			write(2, "Error check_borders_int\n", 6);
			exit(1);
		}
		if (res == -1 && ft_strlen(argv[i]) != 2)
		{
			write(2, "Error check_borders_int\n", 6);
			exit(1);
		}
		i++;
		argc--;
	}
}

void	check_for_digit(char **argv)
{
	int	i;
	int	j;

	j = 0;
	while (argv[j] != NULL)
	{
		i = 0;
		if (argv[j][i] == '-')
			i++;
		if (argv[j][i] == '\0')
		{
			write(2, "Error check_for_digit\n", 6);
			exit(1);
		}
		while (ft_isdigit(argv[j][i]))
		{
			i++;
		}
		if (argv[j][i] != '\0')
		{
			write(2, "Error check_for_digit\n", 6);
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
			printf ("%d ?= %d\n", check->index, stack->index);
			if (check->index == stack->index)
			{
				write(2, "Error proverka_na_dublikaty\n", 6);
				exit(1);
			}
			stack = stack->next;
		}
		stack = check->next;
	}
}

void	check_for_sort(t_stack *stack)
{
	while (stack->next != NULL && stack->index < stack->next->index)
		stack = stack->next;
	if (stack->next == NULL)
		exit(1);
}
