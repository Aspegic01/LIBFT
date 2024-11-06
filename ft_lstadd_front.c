/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:30:06 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/06 10:45:37 by mlabrirh         ###   ########.fr       */
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
int main(void)
{
	t_list *node1 = ft_lstnew(&(int){1});
    	t_list *head = NULL;

    	ft_lstadd_front(&head,node1);

	    if (head)
       		 printf("%d\n", *(int *)(head->content));
    	free(node1);
}
