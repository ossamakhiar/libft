/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhiar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:40:44 by okhiar            #+#    #+#             */
/*   Updated: 2022/10/06 17:40:56 by okhiar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*ptr;
	size_t		i;

	i = 0;
	ptr = str;
	if (n)
	{
		while (i < n)
		{
			if ((unsigned char)ptr[i] == (unsigned char)c)
				return ((void *)ptr + i);
			i++;
		}
	}
	return (0);
}
