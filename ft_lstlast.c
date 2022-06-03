/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:41:25 by asahin            #+#    #+#             */
/*   Updated: 2022/01/31 17:52:57 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main()
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;

	lst1 = malloc(sizeof(t_list));
	lst2 = malloc(sizeof(t_list));
	lst3 = malloc(sizeof(t_list));

	lst1->next = lst2;
	lst2->next = lst3;
	lst3->content = "doğru";
	lst3->next = NULL;
	printf("%s\n", ft_lstlast(lst1));
}*/
