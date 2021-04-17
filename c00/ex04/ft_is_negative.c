/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 05:35:23 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/08 23:56:22 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char a;

	if (n >= 0)
	{
		a = 'P';
	}
	else
	{
		a = 'N';
	}
	write(1, &a, 1);
}