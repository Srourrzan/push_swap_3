/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:49:47 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/18 19:56:13 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

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
void				ft_free_list(t_list **root);

// info_utils functions
t_info				*ft_create_info(t_list *root);

// display_utils functions
void				ft_display_stack(t_list **root, char name, int fd);
void				ft_putstr(char *src, int fd);
void				ft_putnbr(int nbr, int fd);
void				ft_putchar(char c, int fd);

// std_utils functions
int					ft_atoi(char *src, t_list **root);
int					ft_is_number(char *src, t_list **root);

// stack_utils function
void				ft_fill_stack(t_list **root, char **argv);
void				ft_is_dup(t_list **root);

#endif