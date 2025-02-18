/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:11:53 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/18 14:01:04 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	ft_fill_stack(t_list **root, char **argv, int argc)
{
	int		iter;
	int		integer_value;
	char	**dup_num;
	//int		dup_iter;

	integer_value = 0;
	iter = 1;
	//dup_iter = 0;
	dup_num = malloc(sizeof(char *) * (argc));
	if (!dup_num)
	{
		ft_free_list(root);
		ft_putstr("Error\n", 2);
		exit(6);
	}
	ft_init_array(dup_num, argc);
	while (argv[iter])
	{
		if (ft_is_number(argv[iter], root, dup_num) && !ft_is_dup(dup_num, argv[iter], root))
		{
			integer_value = ft_atoi(argv[iter], root, dup_num);
			ft_insert_back(root, integer_value, dup_num);
			iter++;	
		}
	}
	free(dup_num);
}

// never create stack b here
// create it in the sorting functions and free it there
int	main(int argc, char *argv[])
{
	//t_info	*a_info;
	t_list	*root_a;

	if (argc == 1)
		exit(1);
	root_a = NULL;
	ft_fill_stack(&root_a, argv, argc);
	//a_info = ft_create_info(root_a);
	ft_display_stack(&root_a, 'a', 1);
	ft_free_list(&root_a);
	//free(a_info);
	return (0);
}
