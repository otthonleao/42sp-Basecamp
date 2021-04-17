/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:26:21 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/16 04:26:11 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char s1[] = "Otthon";
	char s2[] = "Leao";
	char s3[] = "Otthon";
	char s4[] = "Leao";
	
	printf("\n================================== C-03 EX-02 ===================================");
	printf("\nConcatenar duas strings\n");
	printf("=================================================================================\n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s1 + s2 : %s\n", ft_strcat(s1, s2));
	printf("Original : %s\n\n", strcat(s3, s4));
	
	return (0);
}