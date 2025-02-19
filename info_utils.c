/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:17:26 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/19 20:10:51 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_info	*ft_create_info(t_list *root)
{
	t_info	*new;
	int		size;

	size = len_list(&root);
	new = malloc(sizeof(t_info));
	if (!new)
		ft_clean_and_exit(&root, NULL, NULL, 3);
	new->root = root;
	new->size = size;
	return (new);
}
