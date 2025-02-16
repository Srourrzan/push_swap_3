/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:11:53 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/17 01:02:09 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_list(t_list **root)
{
	
}
// never create stack b here
// create it in the sorting functions and free it there
int	main(int argc, char *argv[])
{
	t_info	*a_info;
	t_list	*root_a;
	int		iter;
	t_list	*curr;

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
	curr = root_a;
	while (curr)
	{
		printf("curr: %d\n", curr->content);
		curr = curr->next;
	}
	a_info = ft_create_info(root_a);
	printf("a_info->root_a->content = %d\n", a_info->root->content);
	free(root_a); // create function to free all the list
	free(a_info);
	return (0);
}
