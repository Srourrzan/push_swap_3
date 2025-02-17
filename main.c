/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:11:53 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/17 22:58:13 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fill_stack(t_list **root, char **argv)
{
	int		iter;
	// int		integer_value;

	// integer_value = 0;
	iter = 0;
	while(argv[iter])
	{
		printf("argv[%d] = %s\n", iter, argv[iter]);
		iter++;
	}
	iter = 1;
	while (argv[iter])
	{
		//integer_value = ft_atoi(argv[iter], root);
		printf("filling %d\n", iter);
		ft_insert_back(root, atoi(argv[iter]));
		iter++;
	}
}

// never create stack b here
// create it in the sorting functions and free it there
int	main(int argc, char *argv[])
{
	//t_info	*a_info;
	t_list	*root_a;

	if (argc == 1)
		exit(1);
	printf("argc = %d\n", argc);
	root_a = NULL;
	ft_fill_stack(&root_a, argv);
	//a_info = ft_create_info(root_a);
	//ft_display_stack(&(a_info->root), 'a', 1);
	ft_free_list(&root_a);
	//free(a_info);
	return (0);
}
