/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:16:45 by asahin            #+#    #+#             */
/*   Updated: 2022/01/31 11:36:46 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*a;
	int		i;

	a = lst;
	i = 1;
	if (!a)
		return (0);
	while (a->next)
	{	
		i++;
		a = a->next;
	}
	return (i);
}
/*
int	main()
{
	t_list	*lst1;
	t_list	*lst2;

	lst1 = malloc(sizeof(t_list));
	lst2 = malloc(sizeof(t_list));
	lst1->next = lst2;
	lst2->next = 0;

	printf("%d\n", ft_lstsize(lst1));
}*/
