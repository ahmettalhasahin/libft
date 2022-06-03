/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asahin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:15:33 by asahin            #+#    #+#             */
/*   Updated: 2022/02/01 19:35:41 by asahin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	del(void *d)
{
	char	s[] = "asdfg";
	d = (void *)s;
	printf("%s\n", d);
}
int	main()
{
	t_list	*lst1;
	t_list	*lst2;

	lst1 = malloc(sizeof(t_list));
	lst2 = malloc(sizeof(t_list));
	lst2->content = "ahmet";
	printf("%s\n", lst2->content);
	ft_lstdelone(lst2, del);
	printf("%s\n", lst2->content);
}*/
