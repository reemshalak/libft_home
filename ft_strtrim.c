/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchalak <rchalak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:46:27 by rchalak           #+#    #+#             */
/*   Updated: 2024/06/20 10:17:40 by rchalak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	trim = (char *) malloc(end - start + 2);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, &s1[start], end - start + 2);
	return (trim);
}
