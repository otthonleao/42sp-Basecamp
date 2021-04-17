/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:43:34 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/15 15:40:13 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char s1[] = "abcde";
	char s2[] = "abcde";
	char s3[] = "abcde";
	char s4[] = "abcd3";
	char s5[] = "abCde";
	char s6[] = "abcd3";
	
	printf("\n================================ C-03 EX-00 ================================");
	printf("\nCompara o conteúdo, ou seja, se as strings são iguais e não o seu tamanho\n");
	printf("============================================================================\n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s1 == s2 : %d\n\n", ft_strcmp(s1, s2));
	
	printf("s3: %s\n", s3);
	printf("s4: %s\n", s4);
	printf("s3 > s4 : %d\n\n", ft_strcmp(s3, s4));

	printf("s5: %s\n", s5);
	printf("s6: %s\n", s6);
	printf("s5 < s6 : %d\n\n", ft_strcmp(s5, s6));
	
	return (0);
}