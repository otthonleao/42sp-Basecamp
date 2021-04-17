/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:50:30 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/12 01:07:39 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char *str;
	int size;
	
	str = "Essa string tem quantos caracteres?";
	
	printf("\n================================ C-01 EX-06 ================================");
	printf("\nEscreva uma função que contenha o número de caracteres em uma string\n");
	printf("de caracteres que retorne o número encontrado\n");
	printf("============================================================================\n");
	
	size = ft_strlen(str);
	printf("Mensagem: %s\n", str);
	printf("Quantidade de Caracteres: %d\n\n", size);
	return (0);
}
