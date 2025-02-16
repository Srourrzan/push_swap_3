/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:11:53 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/16 21:18:14 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_info	*a_info;
	t_list	*root_a;

	if (argc == 1)
		exit(1);
	root_a = ft_create_node(atoi(argv[1]));
	a_info = ft_create_info(root_a);
	printf("a_info->root_a->content = %d\n", a_info->root->content);
	free(root_a);
	free(a_info);
	return (0);
}
