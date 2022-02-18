/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:49:33 by lrieklin          #+#    #+#             */
/*   Updated: 2021/11/12 22:38:48 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new_elem;
	size_t	i;

	i = 0;
	if (size && (count * size) / size < count)
		return (NULL);
	new_elem = (char *)malloc(count * size);
	if (new_elem)
	{
		while (i < count * size)
		{
			new_elem[i] = '\0';
			i++;
		}
		return (new_elem);
	}
	return (NULL);
}
