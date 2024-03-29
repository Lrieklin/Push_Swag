/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:05:17 by lrieklin          #+#    #+#             */
/*   Updated: 2022/03/24 22:25:27 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*p;

	p = *lst;
	if (*lst == NULL)
		*lst = new;
	while ((p)->next != NULL)
		p = p->next;
	p->next = new;
	new->next = NULL;
}
