/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:49:47 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/16 21:29:39 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	int				content;
	int				index;
}					t_list;

typedef struct s_info
{
	t_list			*root;
	int				size;
}					t_info;

// linked_list functions
t_list				*ft_create_node(int content);
void				ft_insert_back(t_list **root, int content);

// info_utils functions
t_info				*ft_create_info(t_list *root);

#endif