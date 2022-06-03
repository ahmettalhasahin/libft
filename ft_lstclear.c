/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:14:06 by asahin            #+#    #+#             */
/*   Updated: 2022/02/01 19:35:04 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*a;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		a = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = a;
	}
}
/*
int	main()
{
	t_list	*lst2;

	lst1 = malloc(sizeof(t_list));
	lst2 = malloc(sizeof(t_list));
	*lst = lst2;
	ft_lstclear(lst, del)
}*/
