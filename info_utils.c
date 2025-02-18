/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:17:26 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/18 20:32:38 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_info	*ft_create_info(t_list *root)
{
	t_info	*new;

	new = malloc(sizeof(t_info));
	if (!new)
		ft_clean_and_exit(root, NULL, NULL, 3);
	new->root = root;
	new->size = 1;
	return (new);
}
