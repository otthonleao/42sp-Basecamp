/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:38:56 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/12 18:45:12 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *src;
	char *dest;

	src = calloc(11, sizeof(char));
	src = "012345678900000";
	dest = calloc(11, sizeof(char));
	ft_strcpy(dest, src);	
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
}

// char	*ft_strcpy(char *dest, char *src);

// int		main(void)
// {
// 	char input[15] = "Hello, world!";
// 	char *src;
// 	char **dest = NULL;

// 	src = input;
	
// 	printf("\n================================ C-02 EX-00 ================================");
// 	printf("\nReproduzir de forma idêntica o funcionamento da função 'strcpy (man strcpy)\n");
// 	printf("============================================================================\n");

// 	ft_strcpy(dest, src);
// 	printf("Source: %s\n", src);
// 	printf("Copy: %s\n", dest);
// }
