/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:39:06 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/15 20:14:02 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char s1[] = "42 Sao Paulo";
	char s2[] = "Sao Paulo";
	char s3[] = "Paris";
	char s4[] = "";

	printf("\n================================== C-03 EX-04 ===================================");
	printf("\nEncontrar uma substring dentro de uma string maior\n");
	printf("=================================================================================\n");
	printf("Onde buscar: %s\n", s1);
	printf("O que buscar: %s\n", s2);
	printf("Resultado da busca : %s\n", ft_strstr(s1, s2));
	printf("Funcao Original: %s\n\n", strstr(s1, s2));
	
	printf("Onde buscar: %s\n", s1);
	printf("O que buscar: %s\n", s3);
	printf("Resultado da busca : %s\n", ft_strstr(s1, s3));
	printf("Funcao Original: %s\n\n", strstr(s1, s3));

	printf("Onde buscar: %s\n", s1);
	printf("O que buscar: %s\n", s4);
	printf("Resultado da busca : %s\n", ft_strstr(s1, s4));
	printf("Funcao Original: %s\n\n", strstr(s1, s4));
	return (0);
}