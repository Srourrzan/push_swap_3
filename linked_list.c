/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 21:00:57 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/16 21:01:30 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_create_node(int content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		exit(2);
	new->content = content;
	new->index = '\0';
	new->next = NULL;
	return (new);
}
