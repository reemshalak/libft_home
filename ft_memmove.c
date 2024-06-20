/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchalak <rchalak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:18:09 by rchalak           #+#    #+#             */
/*   Updated: 2024/06/20 10:16:21 by rchalak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *) dest;
	b = (unsigned char *) src;
	if (a < b)
	{
		while (n--)
		{
			*a++ = *b++;
		}
	}
	else
	{
		while (n--)
		{
			a[n] = b[n];
		}
	}
	return (dest);
}
