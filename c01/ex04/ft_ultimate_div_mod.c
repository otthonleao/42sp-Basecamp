/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:08:08 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/11 22:04:59 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int a_temp;
	int b_temp;

	a_temp = *a;
	b_temp = *b;
	*a = a_temp / b_temp;
	*b = a_temp % b_temp;
}
