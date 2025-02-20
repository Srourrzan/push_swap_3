/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 08:35:09 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/20 10:44:07 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fill_stack(t_list **root, char **argv)
{
	int	iter;
	int	integer_value;

	integer_value = 0;
	iter = 1;
	while (argv[iter])
	{
		if (ft_is_number(argv[iter], root))
		{
			integer_value = ft_atoi(argv[iter], root);
			ft_insert_back(root, integer_value);
			iter++;
		}
	}
	ft_is_dup(root);
}

void	ft_is_dup(t_list **root)
{
	t_list	*temp1;
	t_list	*temp2;

	if (!root || !*root)
		return ;
	temp1 = *root;
	while (temp1 != NULL)
	{
		temp2 = temp1->next;
		while (temp2 != NULL)
		{
			if (temp1->content == temp2->content)
				ft_clean_and_exit(root, NULL, 7);
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
}

int		ft_find_min_index(t_list **root)
{
	t_list *curr;
	int		min;
	int		index;
	int		iter;

	curr = *root;
	min = curr->content;
	index = 0;
	iter = 0;
	while(curr != NULL)
	{
		if (curr->content < min)
		{
			min = curr->content;
			index = iter;
		}
		iter++;
		curr = curr->next;
	}
	return (index);
}

void	ft_move_min_to_top(t_list **root, int size)
{
	int		index;

	index = ft_find_min_index(root);
	printf("index min = %d, size = %d\n", index, size);
}