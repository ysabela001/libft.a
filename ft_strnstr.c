/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytavares <ytavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:07:52 by ytavares          #+#    #+#             */
/*   Updated: 2024/10/25 13:28:49 by ytavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	y;
	size_t	x;

	y = 0;
	x = 0;
	if (!haystack || !needle)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	while (y < len && haystack[y] != '\0')
	{
		x = 0;
		while (x < ft_strlen(needle) && y + x < len && haystack[y + x] != '\0'
			&& haystack[y + x] == needle[x])
			x++;
		if (x == ft_strlen(needle))
			return ((char *)&haystack[y]);
		y++;
	}
	return (NULL);
}
