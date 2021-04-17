/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 00:19:37 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/16 15:47:28 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);

int		main(void)
{
	char str[] = "Otthon";
	int len;

	len = ft_strlen(str);
	printf("\nO comprimento da string é: %d\n", len);
	printf("Função Original: %lu\n\n", strlen(str));
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	ft_strlen(char *str);

// void	ft_strlen_test(char *str)
// {
// 	int size;
// 	int ft_size;

// 	size = strlen(str);
// 	ft_size = strlen(str);
// 	if (size != ft_size)
// 		printf("> KO, return value of ft_strlen differs from expected. expected: %d, got: %d\n", size, ft_size);
// 	else
// 		printf("> OK. result: %d\n", ft_size);
// }

// int	main(void)
// {
// 	char *str;

// 	str = "";
// 	ft_strlen_test(str);
// 	str = "Test";
// 	ft_strlen_test(str);
// 	str = "Testing mored and more and more and more and more and more.";
// 	ft_strlen_test(str);
// 	return (0);
// }