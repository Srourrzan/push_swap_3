/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:00:57 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/20 01:14:02 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_create_node(int content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
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
	if (new == NULL)
		ft_clean_and_exit(root, NULL, 4);
	if (*root == NULL || root == NULL)
	{
		*root = new;
		return ;
	}
	curr = *root;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
}

void	ft_free_list(t_list **root)
{
	t_list	*curr;
	t_list	*prev_node;

	curr = *root;
	while (curr)
	{
		prev_node = curr;
		curr = curr->next;
		free(prev_node);
	}
	*root = NULL;
}

int		len_list(t_list **root)
{
	int		len;
	t_list		*curr;

	len = 0;
	if (!root || !(*root))
		return (0);
	curr = *root;
	while(curr)
	{
		curr = curr->next;
		len++;
	}
	return (len);
}
