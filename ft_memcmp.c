/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:11:04 by asahin            #+#    #+#             */
/*   Updated: 2022/01/30 20:26:31 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > 0 && *str1 == *str2)
	{	
		n--;
		if (n == 0)
			return (0);
		else if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
/*
int	main()
{
	char s[] = "t\200";
	char s2[] = "t\0";
	printf("%d\n", memcmp(s, s2, 2));
	printf("%d\n", ft_memcmp(s, s2, 2));
}*/
