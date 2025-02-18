/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 08:35:09 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/18 19:52:09 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fill_stack(t_list **root, char **argv)
{
	int		iter;
	int		integer_value;

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
