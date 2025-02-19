/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:11:53 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/19 22:04:31 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// never create stack b here
// create it in the sorting functions and free it there
int	main(int argc, char *argv[])
{
	t_list	*root_a;
	t_list	*root_b;

	t_info	*a_info;
	if (argc == 1)
		exit(1);
	root_a = NULL;
	root_b = NULL;
	ft_fill_stack(&root_a, argv);
	a_info = ft_create_info(root_a);
	ft_display_stack(&(a_info->root), 'a', 1);
	printf("a size = %d\n", a_info->size);
	ft_sort_list(a_info, &root_b);
	ft_display_stack(&(a_info->root), 'a', 1);
	ft_free_list(&root_a);
	ft_free_list(&root_b);
	free(a_info);
	return (0);
}
