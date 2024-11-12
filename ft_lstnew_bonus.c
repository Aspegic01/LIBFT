/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:18:31 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/12 10:22:00 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = NULL;
	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
/*int main(void)
{
    	int num1 = 1;
    	int num2 = 2;
    	int num3 = 3;
	int num4 = 4;
	char char1 = 'a';
	char char2 = 'b';
	t_list *head = NULL;
	t_list *node1 = ft_lstnew(&num1);
	t_list *node2 = ft_lstnew(&num2);
	t_list *node3 = ft_lstnew(&num3);
	t_list *node4 = ft_lstnew(&num4);
	t_list *node5 = ft_lstnew(&char1);
	t_list *node6 = ft_lstnew(&char2);
	ft_lstadd_front(&head,node1);
    	ft_lstadd_front(&head,node2);
	ft_lstadd_front(&head,node3);
	ft_lstadd_front(&head,node4);
	ft_lstadd_front(&head,node5);
	ft_lstadd_front(&head,node6);

    	printf("%d\n", *(int *)(node1->content));
    	printf("%d\n", *(int *)(node2->content));
    	printf("%d\n", *(int *)(node3->content));
    	printf("%d\n", *(int *)(node4->content));
	printf("%c\n", *(char *)(node5->content));
	printf("%c\n", *(char *)(node6->content));

	free(node6);
	free(node5);
    	free(node4);
    	free(node3);
    	free(node2);
}*/
