/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 13:04:13 by asahin            #+#    #+#             */
/*   Updated: 2022/01/23 16:50:54 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		total_len;

	if (!s1)
		return (0);
	if (!s2)
		total_len = ft_strlen(s1);
	else
		total_len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (total_len + 1));
	if (!str)
		return (0);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	str -= (total_len);
	return (str);
}
/*
int	main()
{
	const char	str1[] = "ahmettal";
//	const char	str2[] = "hasahin";
 
	printf("%s\n", ft_strjoin(str1, (void *)0));
}*/
