/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytavares <ytavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:07:52 by ytavares          #+#    #+#             */
/*   Updated: 2024/10/22 12:10:10 by ytavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	y;
	size_t	x;

	y = 0;
	x = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[y] && y < len)
	{
		while (haystack[y + x] && needle[x] && (y + x) < len
			&& haystack[y + x] == needle[x])
			x++;
		if (needle[x] == '\0')
			return ((char *)&haystack[y]);
		y++;
	}
	return (NULL);
}
