/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:29:29 by asahin            #+#    #+#             */
/*   Updated: 2022/01/27 12:39:37 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{	
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		count;
	long	len;

	len = n;
	i = 0;
	count = ft_intlen(len);
	str = (char *)ft_calloc(count + 1, sizeof(char));
	if (!str)
		return (0);
	if (len < 0)
	{
		len *= -1;
		str[0] = '-';
		i = 2;
	}
	while (count >= i && count-- > 0)
	{
		str[count] = "0123456789"[len % 10];
		len /= 10;
	}
	return (str);
}
/*
int	main()
{
	int	n = 1234567890;
	printf("%d\n", ft_intlen(n));
	printf("%s\n", ft_itoa(n));
}*/
