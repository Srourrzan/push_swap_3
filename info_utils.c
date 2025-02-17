/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:17:26 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/18 01:00:20 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_info	*ft_create_info(t_list *root)
{
	t_info	*new;

	new = malloc(sizeof(t_info));
	if (!new)
	{
		free(root);
		ft_putstr("Error3\n", 2);
		exit(3);
	}
	new->root = root;
	new->size = 1;
	return (new);
}
