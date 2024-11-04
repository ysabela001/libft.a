/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytavares <ytavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:31:16 by ytavares          #+#    #+#             */
/*   Updated: 2024/11/04 20:29:27 by ytavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t	ft_strlen(const char *str);

void	ft_putnbr_fd(int n, int fd)
{
	char	*int_to_char;

	int_to_char = ft_itoa(n);
	write(fd, int_to_char, ft_strlen(int_to_char));
}
