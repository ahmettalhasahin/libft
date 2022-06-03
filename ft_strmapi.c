/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:38:27 by asahin            #+#    #+#             */
/*   Updated: 2022/01/27 14:21:43 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str || !s || !f)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	f(unsigned int i, char c)
{
	i += 1;
	c += 1;
	return (c);
}
int	main()
{
	const char	str[] = "ahmettalhasahin";
	printf("%s\n", ft_strmapi(str, *f));
}
*/
