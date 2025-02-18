/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 08:35:09 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/18 19:55:51 by rsrour           ###   ########.fr       */
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

	temp1 = *root;
	temp2 = *root;
	while (temp1 != NULL)
	{
		while (temp2 != NULL)
		{
			if (temp1->content == temp2->content)
			{
				ft_free_list(root);
				ft_putstr("Error7\n", 2);
				exit(7);
			}
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
}
