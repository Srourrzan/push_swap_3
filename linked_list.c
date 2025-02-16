/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:00:57 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/16 21:34:48 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_create_node(int content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		exit(2);
	new->content = content;
	new->index = '\0';
	new->next = NULL;
	return (new);
}

void	ft_insert_back(t_list **root, int content)
{
	t_list	*new;
	t_list	*curr;

	new = ft_create_node(content);
	if (!new)
	{
		free(*root); // create a function to free all the list
		exit(4);
	}
	curr = *root;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
}
