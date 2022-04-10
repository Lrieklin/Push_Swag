/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:11:49 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/25 20:03:56 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	checker(int argc, char **argv)
{
	t_stack	*stack_aa;
	t_stack	*stack_bb;
	int		count;

	count = argc - 1;
	stack_bb = NULL;
	check_for_digit(argv);
	check_borders_int(argc, argv);
	stack_aa = ready_stack(argc, argv);
	check_for_sort(stack_aa);
	proverka_na_dublikaty(stack_aa);
	ft_indexing(&stack_aa, argc - 1);
	if (count >= 2 && count <= 5)
		sorting_elements(&stack_aa, &stack_bb, argc);
	if (count > 5)
		sort_100(&stack_aa, &stack_bb, argc);
	stack_clear(stack_aa);
	stack_clear(stack_bb);
}

int	main(int argc, char **argv)
{
	int		count;

	count = argc - 1;
	if (argc == 1)
		return (0);
	if (argc > 1)
		checker(argc, argv);
	else
		write (2, "Error\n", 6);
	return (0);
}
