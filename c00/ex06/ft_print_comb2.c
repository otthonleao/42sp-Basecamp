/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:28:32 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/10 02:23:04 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_value(int x, int y)
{										00 01
	ft_putchar(('0' + (x / 10))); // 5 / 10 = 0.5
	ft_putchar(('0' + (x % 10))); // 5 % 10 = 5
	ft_putchar(' ');
	ft_putchar(('0' + (y / 10))); // 23 / 10 = 2.3
	ft_putchar(('0' + (y % 10))); // 23 % 10 = 3
	if (x != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_value(x, y);
			y++;
		}
		x++;
	}
}
