/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:59:28 by asahin            #+#    #+#             */
/*   Updated: 2022/01/21 19:41:02 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		len;

	len = ft_strlen(s1);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	*str = '\0';
	str -= len;
	return (str);
}
