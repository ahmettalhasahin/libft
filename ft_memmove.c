/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:38:24 by asahin            #+#    #+#             */
/*   Updated: 2022/01/20 16:28:42 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *) dst;
	s = (char *) src;
	if (!d && !s)
		return (0);
	else if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
		while (len-- > 0)
			*d++ = *s++;
	return (dst);
}
