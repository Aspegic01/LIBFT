/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:30:06 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/12 10:41:24 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*int main()
{
	int n = 10;
	t_list *node = ft_lstnew(&n);
	t_list *head = NULL;
	ft_lstadd_front(&head,node);
	printf("%d\n",*(int *)head->content);
	free(node);
}*/