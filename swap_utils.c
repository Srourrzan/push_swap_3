/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:49:40 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/19 22:05:47 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * swap function is responsible for doing the following two operations:
 *  - sa (swap a): Swap the first 2 elements at the top of stack a.
 *  - sb (swap b): Swap the first 2 elements at the top of stack b.
 *      Do nothing if there is only one or no elements
 */
// void	swap(t_info *a_info)
// {
// 	t_list	*head;
// 	t_list	*second;

// 	if (!a_info || a_info->root == NULL || a_info->root->next == NULL)
// 		return ;
// 	head = a_info->root;
// 	second = a_info->root->next;
// 	head->next = second->next;
// 	second->next = head;
// 	a_info->root = second;
// }
void	swap(t_info *t_info)
{
	int	temp;

	if (t_info->size < 2)
		return ;
	temp = t_info->root->content;
	t_info->root->content = t_info->root->next->content;
	t_info->root->next->content = temp;
	// if (print)
	write(1, "sa\n", 3);
}
/*
 *  - ss: sa and sb at the same time
 */
// void	ss(t_list **root_a, t_list **root_b)
// {
// 	swap(root_a);
// 	swap(root_b);
// }
