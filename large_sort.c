/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 07:04:11 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/20 17:32:07 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_assign_index(t_list **root)
{
	t_list	*curr;
	t_list	*temp;
	int		index;

	curr = *root;
	while (curr)
	{
		index = 0;
		temp = *root;
		while (temp)
		{
			if (curr->content > temp->content)
				index++;
			temp = temp->next;
		}
		curr->index = index;
		curr = curr->next;
	}
}

void	ft_large_sort(t_list **a, t_list **b, int size)
{
	int     max_index;

	ft_assign_index(a);
    max_index = size - 1;  
	ft_display_stack(b, 'b', 1);
}
