/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:11:53 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/17 13:00:30 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// never create stack b here
// create it in the sorting functions and free it there
int	main(int argc, char *argv[])
{
	t_info	*a_info;
	t_list	*root_a;
	int		iter;

	iter = 2;
	if (argc == 1)
		exit(1);
	root_a = ft_create_node(atoi(argv[1]));
	if (argc > 2)
	{
		while (argv[iter])
		{
			ft_insert_back(&root_a, atoi(argv[iter]));
			iter++;
		}
	}
	a_info = ft_create_info(root_a);
	ft_display_stack(&(a_info->root), 'a', 1);
	ft_free_list(&root_a);
	free(a_info);
	return (0);
}
