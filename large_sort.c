/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 07:04:11 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/20 18:02:34 by rsrour           ###   ########.fr       */
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

static int	ft_find_max_bits(int index)
{
	int	bits;

	bits = 0;
	while ((index - 1) >> bits)
		bits++;
	return (bits);
}

static void	ft_radix_sort_lsd(t_list **a, t_list **b, int size, int bit)
{
	int	iter;
	int	num;

	iter = 0;
	while (iter < size)
	{
		num = (*a)->index;
		if ((num >> bit) & 1)
		{
			rotate(a);
			ft_putstr("ra\n", 1);
		}
		else
			ft_ascend_push(a, b, 1);
		iter++;
	}
}

void	ft_large_sort(t_list **a, t_list **b, int size)
{
	int	max_index;
	int	max_bits;
	int	iter;

	iter = 0;
	ft_assign_index(a);
	max_index = size - 1;
	max_bits = ft_find_max_bits(max_index);
	while (iter < max_bits)
	{
		ft_radix_sort_lsd(a, b, size, iter);
		while (*b)
			ft_descend_push(a, b, 1);
		iter++;
	}
}
