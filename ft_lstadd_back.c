/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:40:25 by asahin            #+#    #+#             */
/*   Updated: 2022/02/01 19:34:16 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = ft_lstlast(*lst);
	if (!temp)
		*lst = new;
	else
		temp->next = new;
}
/*
int	main()
{
	t_list	**lst;
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*new;

	lst1 = (t_list *)malloc(sizeof(t_list));
	lst2 = (t_list *)malloc(sizeof(t_list));
	lst3 = (t_list *)malloc(sizeof(t_list));

	lst1->next = lst2;
	lst2->next = lst3;
	lst3->content = (void *)"ahmet";

	lst = &lst1;
//	lst = (void *)0;
	new = (t_list *)malloc(sizeof(t_list));

	new->next = 0;
	new->content = (void *)"fjhgdjfkh";
	ft_lstadd_back(&lst, new);
	printf("%s\n", lst->content);
}*/
