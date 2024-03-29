/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 02:42:07 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/17 03:26:23 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int n;

	n = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (nb % n != 0)
		n++;
	if (nb == n)
		return (1);
	return (0);
}
