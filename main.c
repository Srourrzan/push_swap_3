/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:11:53 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/17 16:17:29 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int ft_atoi(char *src, t_list **root)
// {
//     int     iter;
//     int     number;
//     int     sign;

//     iter = 0;
//     sign = +1;
//     number = 0;
//     if(src[iter] == '-' || src[iter] == '+')
//     {
//         if(src[iter] == '-')
//             sign = -1;
//         iter++;
//     }
//     while (src[iter])
//     {
//         if ((number * 10 == 2147483640 && (((src[iter] - '0') > 7 && sign == 1) 
//             || ((src[iter] - '0') > 8 && sign == -1))) || number >= 214748365)
//             {
// 				ft_free_list(root);
// 				ft_putstr("Error\n", 2);
// 				exit(4);
// 			}
//         number = (number * 10) + (src[iter] - '0');
//         iter++; 
//     }
//     number = number * sign;
//     return (number);
// }

int ft_atoi(char *src, t_list **root)
{
    int iter = 0;
    int number = 0;
    int sign = 1;

    if (!src || !*src) // Check for NULL or empty string
    {
        ft_free_list(root);
        ft_putstr("Error\n", 2);
        exit(4);
    }
    if (src[iter] == '-' || src[iter] == '+')
    {
        if (src[iter] == '-')
            sign = -1;
        iter++;
    }
    while (src[iter])
    {
        if (src[iter] < '0' || src[iter] > '9') // Check for non-digit characters
        {
            ft_free_list(root);
            ft_putstr("Error\n", 2);
            exit(4);
        }
        // Prevent integer overflow
        if (number > (2147483647 - (src[iter] - '0')) / 10)
        {
            ft_free_list(root);
            ft_putstr("Error\n", 2);
            exit(4);
        }
        number = (number * 10) + (src[iter] - '0');
        iter++;
    }
    return (number * sign);
}


void	ft_fill_stack(t_list **root, char **argv)
{
	int		iter;
	int		integer_value;

	integer_value = 0;
	iter = 0;
	while (argv[iter])
	{
		integer_value = ft_atoi(argv[iter], root);
		ft_insert_back(root, integer_value);
		iter++;
	}
}

// never create stack b here
// create it in the sorting functions and free it there
int	main(int argc, char *argv[])
{
	t_info	*a_info;
	t_list	*root_a;

	if (argc == 1)
		exit(1);
	root_a = ft_create_node(atoi(argv[1]));
	ft_fill_stack(&root_a, argv);
	a_info = ft_create_info(root_a);
	ft_display_stack(&(a_info->root), 'a', 1);
	ft_free_list(&root_a);
	free(a_info);
	return (0);
}
