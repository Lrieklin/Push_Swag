/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:05:17 by lrieklin          #+#    #+#             */
/*   Updated: 2022/02/18 20:49:12 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <stdio.h>

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*p;

	p = *lst;
	if (*lst == NULL)
		*lst = new;
	while ((p)->next != NULL)
	{
		//printf("p == %d\n", p->index);
		p = p->next;
	}
	p->next = new;
	//printf("p == %d\n", p->index);
	new->next = NULL;
	//printf("p == %d\n", p->next->index);
}
