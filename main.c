/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:11:49 by lrieklin          #+#    #+#             */
/*   Updated: 2022/02/18 23:19:56 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdlib.h> //to delete
int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	//t_stack *stack_b;

	if (argc == 1)
		return (1);
	//stack_b = NULL; 
	stack_a = ready_stack(argc, argv); 
	//proverka_na_dublikaty(stack);
	// check_for_sort(stack);
	reverse_rotate(&stack_a);
	while(stack_a != NULL)
	{
		printf("stack_a == %d\n", stack_a->index);
		stack_a = stack_a->next;
	}
	printf("argc == %d", argc);
	//from_char_to_int(argc, &argv[1]);
	//printf("%d, %zu\n", ft_atoi(argv[1]), ft_strlen(argv[1]));

	// print();
}
