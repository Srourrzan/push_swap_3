/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:02:00 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/20 10:48:18 by rsrour           ###   ########.fr       */
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

void   ft_five_sort(t_list **a, t_list **b, int size)
{
    ft_move_min_to_top(a, size);
    if (*b)
        ft_display_stack(b, 'b', 1);
}
