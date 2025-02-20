/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:38:22 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/20 10:28:37 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sort_two(t_list **a)
{
    swap(a);
    ft_putstr("sa\n", 1);
}

void    ft_three_stack_conditions(t_list **a, int n1, int n2, int n3)
{
    if (n1 < n2 && n2 > n3)
    {
        reverse_rotate(a);
        ft_putstr("rra\n", 1);
        if (n1 < n3)
        {
            swap(a);
            ft_putstr("sa\n", 1);
        }
    }
    else if (n1 > n2 && n1 > n3)
    {
        rotate(a);
        ft_putstr("ra\n", 1);
        if (n2 > n3)
        {
            swap(a);
            ft_putstr("sa\n", 1);   
        }
    }
    else if (n1 > n2 && n1 < n3)
    {
        swap(a);
        ft_putstr("sa\n", 1);  
    }
}

void    ft_three_sort(t_list **a, int size)
{
	int		first;
	int		second;
	int		third;
	
	first = 0;
	second = 0;
	third = 0;
	if (size == 2)
    	ft_sort_two(a);
	else
	{
        first = (*a)->content;
        second = (*a)->next->content;
        third = (*a)->next->next->content;
        ft_three_stack_conditions(a, first, second, third);
	}
}

void	ft_sort_list(t_list **a, t_list **b)
{
	int		size;

	size = 0;
	if (!ft_ascend_check(a))
	{
		size = len_list(a);
		if (size <= 3)
			ft_three_sort(a, size);
		else if (size <= 5)
			ft_five_sort(a, b);
		// else
		// 	ft_large_sort(a_info, b);
	}
}

int	ft_ascend_check(t_list **a)
{
	t_list	*curr;

	curr = *a;
	if (curr == NULL )
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
