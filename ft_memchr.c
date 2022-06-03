/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:55:03 by asahin            #+#    #+#             */
/*   Updated: 2022/01/20 20:50:51 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	a;

	a = (char)c;
	str = (char *)s;
	if (n == 0)
		return (0);
	while (n-- > 0)
	{
		if (a == *str)
			return (str);
		str++;
	}
	return (0);
}
