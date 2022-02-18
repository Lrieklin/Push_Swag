/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_operation_push.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:46:47 by lrieklin          #+#    #+#             */
/*   Updated: 2022/02/18 19:47:40 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	push(t_stack **from_stack, t_stack **to_stack)
{
	t_stack	*top_stack;

	top_stack = *from_stack;
	*from_stack = (*from_stack)->next;
	ft_lstadd_front(to_stack, top_stack);
}
