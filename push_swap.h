/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:49:47 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/20 01:33:48 by rsrour           ###   ########.fr       */
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

// linked_list functions
t_list				*ft_create_node(int content);
void				ft_insert_back(t_list **root, int content);
void				ft_free_list(t_list **root);
int		len_list(t_list **root);

// display_utils functions
void				ft_display_stack(t_list **root, char name, int fd);
void				ft_putstr(char *src, int fd);
void				ft_putnbr(int nbr, int fd);
void				ft_putchar(char c, int fd);

//std_utils functions
int					ft_atoi(char *src, t_list **root);
int					ft_is_number(char *src, t_list **root);
void				ft_clean_and_exit(t_list **root_a, t_list **root_b, int num);

//stack_utils function
void				ft_fill_stack(t_list **root, char **argv);
void				ft_is_dup(t_list **root);

//sort_utils.c function
int					ft_ascend_check(t_list **a);
void				ft_sort_list(t_list **a, t_list **b);

//push_util.c function
void	push(t_list **src_list, t_list **dst_list);
void 	ft_ascend_push(t_list **a, t_list **b, int fd);
void		ft_descend_push(t_list **a, t_list **b, int fd);

// swap_utils.c functions
void	swap(t_list **root);
void	ss(t_list **root_a, t_list **root_b);

// rotate_util.c functions
void	rotate(t_list **root);
void	rr(t_list **root_a, t_list **root_b);
void	reverse_rotate(t_list **root);
void	rrr(t_list **root_a, t_list **root_b);

#endif