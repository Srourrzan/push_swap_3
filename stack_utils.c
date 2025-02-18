/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 08:35:09 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/18 15:28:06 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_dup(char **dup_num, char *s_number, t_list **root)
{
	int	iter;
	int	cmp;

	iter = 0;
	cmp = 0;
	while (dup_num[iter])
	{
		cmp = ft_strcmp(dup_num[iter], s_number);
		if (cmp == 0)
		{
			ft_free_list(root);
			free(dup_num);
			ft_putstr("Error6\n", 2);
			exit(6);
		}
		iter++;
	}
	return (0);
}
