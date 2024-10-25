/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytavares <ytavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:25:41 by ytavares          #+#    #+#             */
/*   Updated: 2024/10/22 15:08:45 by ytavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			is;
	size_t			id;

	is = 0;
	id = 0;
	while (dest[id] != '\0' && id < size)
			id++;
	if (id == size)
		return (id + ft_strlen(src));
	while (src[is] != '\0' && (id + is + 1) < size)
	{
		dest[id + is] = src[is];
		is++;
	}
	dest[id + is] = '\0';
	return (id + ft_strlen(src));
}
