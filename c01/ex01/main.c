/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 07:29:02 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/09 08:03:48 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);
int 	main(void)
{
	int n;
	int *nbr_1;
	int **nbr_2;
	int ***nbr_3;
	int ****nbr_4;
	int *****nbr_5;
	int ******nbr_6;
	int *******nbr_7;
	int ********nbr_8;
	int *********nbr_9;

	n = 10;
	printf("Valor de 'n' antes do ponteiro nbr_8: %d\n", n);
	
	nbr_1 = &n;
	nbr_2 = &nbr_1;
	nbr_3 = &nbr_2;
	nbr_4 = &nbr_3;
	nbr_5 = &nbr_4;
	nbr_6 = &nbr_5;
	nbr_7 = &nbr_6;
	nbr_8 = &nbr_7;
	nbr_9 = &nbr_8;
	ft_ultimate_ft(nbr_9);
	printf("Valor de 'n' após do ponteiro nbr_8: %d\n", n);
}
