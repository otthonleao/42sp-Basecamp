/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 04:30:19 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/10 23:37:13 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 10;
	b = 3;
	div = &a;
	mod = &b;
	
	printf("\n================================ C-01 EX-03 ================================");
	printf("\nEssa função divide os dois parâmetros 'a' e 'b' e armazena o resultado no\nint apontado por div. Ela também armazena o resto da divisão de\n'a' e 'b' no int apontado por mod.\n");
	printf("============================================================================\n");
	
	ft_div_mod(a, b, div, mod);

	printf("Divisão: %d / %d = %d\n", a, b, *div);
	printf("Módulo: %d %% %d = %d\n", a, b, *mod);
	
	printf("============================================================================\n");
	printf("Endereço de *div: %p\n", div);
	printf("Endereço de *mod: %p\n\n", mod);
	return (0);
}