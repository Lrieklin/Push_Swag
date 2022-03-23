/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:11:49 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/23 22:45:40 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdlib.h> //to delete
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
		check_for_sort(stack_a);
		proverka_na_dublikaty(stack_a);
		ft_indexing(&stack_a, argc - 1);
		if (count >= 2 && count < 5)
			sorting_elements(&stack_a, &stack_b, argc);
		if (count > 5)
			sort_100(&stack_a, &stack_b, argc);
		//stack_clear(stack_a);
		//stack_clear(stack_b);
	}
	else
	{
		write (2, "Errorrrr\n", 7);
		write(2, "Enter the numbers\n", 19);
	}
	return (0);
}
