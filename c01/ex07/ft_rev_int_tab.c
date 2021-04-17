/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 01:37:07 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/12 06:28:16 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int change;

	a = 0;
	while (a < size)
	{
		change = tab[a];
		tab[a] = tab[size - 1];
		tab[size - 1] = change;
		a++;
		size--;
	}
}
