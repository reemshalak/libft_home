/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rs <rs@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:51:16 by rchalak           #+#    #+#             */
/*   Updated: 2024/06/13 14:38:50 by rs               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(char *str, int c)
{
	char	*last;

	last = NULL;
	while (*str)
	{
		if (*str == (char) c)
		{
			last = str;
		}
		str++;
	}
	if ((char) c == '\0')
	{
		return (str);
	}
	return (last);
}
