/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:31:10 by asahin            #+#    #+#             */
/*   Updated: 2022/01/26 13:27:00 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(const char *s, char c)
{
	int	wc;

	wc = 0;
	while (*s)
	{
		if (*s != c && *s)
		{	
			wc++;
			s++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (wc);
}

char	**ft_free(char **str, int i)
{
	while (i-- >= 0 && str[i])
	{
		free(str[i]);
		str[i] = 0;
	}
	free(str);
	str = 0;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*from;
	int		i;

	i = 0;
	str = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!str || !s)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			from = (char *)s;
			while (*s && *s != c)
				s++;
			str[i++] = ft_substr(from, 0, (s - from));
			if (!str)
				return (ft_free(str, i));
		}
		else
			s++;
	}
	str[i] = 0;
	return (str);
}
/*
int	main()
{
	char const	s[] = "ahmet talha sahin";
	char c = ' ';
	char **str = ft_split(s, c);
	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
}
*/
