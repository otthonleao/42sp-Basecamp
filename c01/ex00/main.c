/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:52:14 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/09 07:24:11 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int n;
	int *nbr;
	
	nbr = &n;
	ft_ft(nbr);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("n_static: %d\n", n);
	printf("n_heap: %d\n", *nbr);
	printf("n_adress: %p\n", &n);
	printf("nbr_adress: %p\n", nbr);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	return(0);
}