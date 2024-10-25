/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytavares <ytavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:54:32 by ytavares          #+#    #+#             */
/*   Updated: 2024/10/25 17:18:25 by ytavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	int		i;
	char	*ptr;

	len_s = 0;
	i = 0;
	if (*s == '\0')
		return (NULL);
	len_s = ft_strlen(s);
	while (s[i] != '\0')
	{
		if (s[i] == start)
		{
			ptr = (s[i])
		}
	}
}