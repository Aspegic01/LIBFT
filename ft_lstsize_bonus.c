/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:33:56 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/12 14:30:41 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	t_list	*node;

	i = 0;
	node = lst;
	while (node)
	{
		node = node->next;
		i++;
	}
	return (i);
}
int main()
{
	int	n = 10;
	int	n1 = 1;
	int	n2 = 42;
	t_list *node = ft_lstnew(&n);
	t_list *node1 = ft_lstnew(&n1);
	t_list *node2 = ft_lstnew(&n2);
	t_list *head = NULL;
	ft_lstadd_front(&head,node);
	ft_lstadd_front(&head,node1);
	ft_lstadd_front(&head,node2);
	ft_lstsize(node);
	printf("%d\n",*(int *)(node->content));
	printf("%d\n",*(int *)(node1->content));
	printf("%d\n",*(int *)(node2->content));
	printf("%d\n",ft_lstsize(head));
}

