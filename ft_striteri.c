/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:51:44 by asahin            #+#    #+#             */
/*   Updated: 2022/01/27 16:41:09 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
}
/*
void	f(unsigned int i, char *c)
{
	i += 1;
	c += 1;
	return ;
}
int	main()
{
	const char	str[] = "ahmettalhasahin";
	ft_striteri(str, f);
	printf("%d\n", str);
}*/
