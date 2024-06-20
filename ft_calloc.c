/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchalak <rchalak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:52:54 by rchalak           #+#    #+#             */
/*   Updated: 2024/06/20 10:11:47 by rchalak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*allocate;
	size_t	total_size;

	if (num_elements && element_size > 4294967295 / num_elements)
		return (NULL);
	total_size = num_elements * element_size;
	allocate = (void *) malloc(total_size);
	if (!allocate)
		return (NULL);
	ft_bzero(allocate, total_size);
	return (allocate);
}
