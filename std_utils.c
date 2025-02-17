/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:33:12 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/17 23:22:15 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     ft_atoi(char *src, t_list **root)
{
    int     iter;
    int     number;
    int     sign;

    iter = 0;
    sign = 1;
    number = 0;
    if(src[iter] == '-' || src[iter] == '+')
    {
        if(src[iter] == '-')
            sign = -1;
        iter++;
    }
    while (src[iter])
    {
        if ((number * 10 == 2147483640 && (((src[iter] - '0') > 7 && sign == 1) 
            || ((src[iter] - '0') > 8 && sign == -1))) || number >= 214748365)
            {
				ft_free_list(root);
				ft_putstr("Error\n", 2);
				exit(4);
			}
        number = (number * 10) + (src[iter] - '0');
        iter++; 
    }
    number = number * sign;
    return (number);
}

int     ft_is_number(char *src, t_list **root)
{
    int     iter;

    iter = 0;
    if (src[iter] == '+' || src[iter] == '-')
        iter++;
    while(src[iter])
    {
        if (src[iter] <= '0' || src[iter] >= '9')
        {
            ft_free_list(root);
            ft_putstr("Error\n", 2);
            exit(5);
        }
        iter++;
    }
    return (1);
}
