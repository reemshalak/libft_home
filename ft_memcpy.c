/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchalak <rchalak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:05:27 by rchalak           #+#    #+#             */
/*   Updated: 2024/06/20 10:15:39 by rchalak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;

	a = (char *) dest;
	b = (char *) src;
	while (n)
	{
		*a++ = *b++;
		n--;
	}	
	return (dest);
}
