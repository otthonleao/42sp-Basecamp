/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:22:12 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/16 07:13:59 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char s1[] = "abcde";
	char s2[] = "abcde";
	unsigned int n = 3;
	char s3[] = "abcde";
	char s4[] = "abcd3";
	char s5[] = "120451";
	char s6[] = "123451";
	
	printf("\n================================== C-03 EX-01 ===================================");
	printf("\nCompara os dois parâmetros, porém determina o máximo de caracter p/ ser comparado\n");
	printf("=================================================================================\n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("Conferir até o caracter: %d\n", n);
	printf("s1 == s2 : %d\n", ft_strncmp(s1, s2, n));
	printf("original: %d\n\n", strncmp(s1, s2, n));
	
	printf("s3: %s\n", s3);
	printf("s4: %s\n", s4);
	printf("Conferir até o caracter: %d\n", n = 5);
	printf("s3 > s4 : %d\n", ft_strncmp(s3, s4, n));
	printf("original: %d\n\n", strncmp(s3, s4, n));

	printf("s5: %s\n", s5);
	printf("s6: %s\n", s6);
	printf("Conferir até o caracter: %d\n", n = 2);
	printf("s5 < s6 : %d\n", ft_strncmp(s5, s6, n));
	printf("original: %d\n\n", strncmp(s5, s6, n));
	
	return (0);
}
