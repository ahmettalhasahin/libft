/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:29:22 by asahin            #+#    #+#             */
/*   Updated: 2022/01/27 20:12:39 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		len;
	char	a;

	if (!s)
		return ;
	a = '\n';
	len = ft_strlen(s);
	write (fd, s, len);
	write (fd, &a, 1);
}
/*
int	main()
{
	char	str[] = "ahmettalhasahin";
	int	fd = 0;
	ft_putendl_fd(str, fd);
}*/
