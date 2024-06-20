/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchalak <rchalak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:31:00 by rchalak           #+#    #+#             */
/*   Updated: 2024/06/20 10:52:49 by rchalak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include  "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			s_length;
	size_t			d_length;

	s_length = ft_strlen(s);
	d_length = s_length - start + 1;
	if (len < d_length)
		d_length = len + 1 ;
	if (start >= s_length || !len)
		return (ft_strdup(""));
	substr = (char *) malloc(sizeof(char) * d_length);
	if (!substr)
		return (ft_strdup(""));
	ft_strlcpy(substr, s + start, d_length);
	return (substr);
}
