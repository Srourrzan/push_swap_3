/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:11:53 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/20 17:26:44 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*root_a;
	t_list	*root_b;
	int		size;

	size = 0;
	if (argc == 1)
		exit(1);
	root_a = NULL;
	root_b = NULL;
	ft_fill_stack(&root_a, argv);
	ft_display_stack(&root_a, 'a', 1);
	size = len_list(&root_a);
	ft_sort_list(&root_a, &root_b);
	ft_display_stack(&root_a, 'a', 1);
	ft_free_list(&root_a);
	ft_free_list(&root_b);
	return (0);
}
