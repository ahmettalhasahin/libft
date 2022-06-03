/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:46:26 by asahin            #+#    #+#             */
/*   Updated: 2022/01/31 20:57:12 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*a;

	a = (t_list *)malloc(sizeof(t_list));
	if (!a)
		return (0);
	a->content = content;
	a->next = 0;
	return (a);
}
/*
int	main(void)
{
	char	a[4] = "123";
	t_list	*lst;

	lst = ft_lstnew((void *)a);
	printf("%s\n", lst->content);
}*/
