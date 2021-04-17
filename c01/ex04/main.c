/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:08:36 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/11 04:45:48 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int i;
	int j;
	int a_test;
	int b_test;
	int *a;
	int *b;

	i = 10;
	a_test = i;
	j = 5;
	b_test = j;

	a = &i;
	b = &j;

	printf("\n================================ C-01 EX-04 ================================");
	printf("\nEssa função divide os int apontados por 'a' e 'b'\n");
	printf("O resultado da divisão está armazenado no int apontado por 'a'.\n");
	printf("O resultado do resto da divisão está armazenado no int apontado por b.\n");
	printf("============================================================================\n");

	ft_ultimate_div_mod(a, b);
	
	printf("Divisão: %d / %d = %d\n", a_test, b_test, i);
	printf("Módulo: %d %% %d = %d\n", a_test, b_test, j);

	printf("============================================================================\n");
	printf("Endereço de i: %p\n", &i);
	printf("Endereço de a: %p\n", a);
	printf("Endereço de *a: %p\n\n", &a);

	printf("Endereço de j: %p\n", &j);
	printf("Endereço de b: %p\n", b);
	printf("Endereço do *b: %p\n\n", &b);
}
