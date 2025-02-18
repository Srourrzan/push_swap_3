/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 10:14:19 by rsrour            #+#    #+#             */
/*   Updated: 2025/02/18 20:08:16 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putnbr(int nbr, int fd)
{
	char	res;

	res = 0;
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			ft_putstr("-2147483648", fd);
			return ;
		}
		ft_putstr("-", fd);
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10, fd);
	res = nbr % 10 + '0';
	ft_putstr(&res, fd);
}

void	ft_display_stack(t_list **root, char name, int fd)
{
	t_list	*curr;

	curr = *root;
	while (curr != NULL)
	{
		ft_putnbr(curr->content, fd);
		ft_putstr("\n", fd);
		curr = curr->next;
	}
	ft_putstr("_\n", fd);
	ft_putchar(name, fd);
	ft_putstr("\n", fd);
}

void	ft_putstr(char *src, int fd)
{
	int	iter;

	iter = 0;
	while (src[iter])
	{
		write(fd, &src[iter], 1);
		iter++;
	}
}

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}
