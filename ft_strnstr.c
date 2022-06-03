/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 10:50:42 by asahin            #+#    #+#             */
/*   Updated: 2022/01/30 16:47:52 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t l)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		while (i < l && haystack[i] == needle[j])
		{
			if (needle[++j] == '\0')
				return ((char *)haystack + (i - (j - 1)));
			i++;
			if (needle[j] != '\0' && haystack[i] != needle[j])
			{	
				j = 0;
				i = ++k;
			}
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	const char	h[] = "aaabcabcd";
	const char	n[] = "aabc";
	size_t	l = -1;
	printf("%s\n", ft_strnstr(h, n, l));
}*/
