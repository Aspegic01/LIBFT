/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:43:53 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/28 10:59:39 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *tmp;
	
	tmp = malloc(count * size);
	
	if (!tmp)
	{
		return (NULL);
	}
	
	while (i < count * size)
	{
		tmp[i++] = 0;
	}
	return (tmp);
}