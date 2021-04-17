/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 01:37:26 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/12 04:52:01 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;

	a = 0;
	while (a < size)
	{
		if (tab[a] > tab[a + 1])
		{
			b = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = b;
			a = 0;
		}
		else
		{
			a++;
		}
	}
}
