/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:12:49 by asahin            #+#    #+#             */
/*   Updated: 2022/01/29 12:34:45 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	**lst;
	t_list	*lst1;
	t_list	*lst2;
	t_list	*pos;
	t_list	*new;

	lst1 = (t_list *)malloc(sizeof(t_list));
	lst2 = (t_list *)malloc(sizeof(t_list));

	lst1->next = lst2;
	lst2->next = new;
	*lst = lst1;

	new = (t_list *)malloc(sizeof(t_list));

	ft_lstadd_front(lst, new);
	pos = *lst;
	printf("%s\n", pos->next->content);
}*/
