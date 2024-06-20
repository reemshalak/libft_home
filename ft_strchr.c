/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rs <rs@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:37:44 by rchalak           #+#    #+#             */
/*   Updated: 2024/06/13 14:26:26 by rs               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c == '\0')
	{
		return ((char *)(str + ft_strlen(str)));
	}
	while (*str)
	{
		if (*str == (char) c)
		{
			return ((char *)(str));
		}
		str++;
	}
	return (NULL);
}
