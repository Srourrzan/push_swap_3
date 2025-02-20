/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:38:22 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/20 17:31:40 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_list(t_list **a, t_list **b)
{
	int	size;

	size = 0;
	if (!ft_ascend_check(a))
	{
		size = len_list(a);
		if (size <= 3)
			ft_three_sort(a, size);
		else if (size <= 5)
			ft_five_sort(a, b, size);
		else
			ft_large_sort(a, b, size);
	}
}

int	ft_ascend_check(t_list **a)
{
	t_list	*curr;

	curr = *a;
	if (curr == NULL)
		return (1);
	if (!curr->next)
		return (1);
	while (curr->next != NULL)
	{
		if (curr->content > curr->next->content)
			return (0);
		curr = curr->next;
	}
	return (1);
}
