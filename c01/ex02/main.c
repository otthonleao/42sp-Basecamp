/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 03:16:00 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/10 04:13:50 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 42;
	b = 24;

	printf("\nANTES DO SWAP\n");
	printf("A: %d\n", a);
	printf("B: %d\n", b);
	printf("\n");

	ft_swap(&a, &b);
	printf("DEPOIS DO SWAP\n");
	printf("A: %d\n", a);
	printf("B: %d\n", b);
	printf("\n");

	return (0);
}