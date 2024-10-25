/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytavares <ytavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:44:16 by ytavares          #+#    #+#             */
/*   Updated: 2024/10/24 16:36:36 by ytavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	result_size;

	result_size = count * size;
	ptr = malloc(result_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, result_size);
	return (ptr);
}
