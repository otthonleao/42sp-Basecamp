/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:53:36 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/13 17:06:44 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	unsigned int	n;
	char 			src[] = "Encontrei a source";
	char 			dest[19];

	n = 19;
	printf("BEFORE\n\t src: %s\tdest:%s\n", src, dest);

	ft_strncpy(dest, src, n);
	printf("AFTER\n\t src: %s\tdest: %s\n", src, dest);
	
	return (0);
}