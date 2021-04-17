/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:41:50 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/14 03:37:55 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		i;
	int		is_alphabetic;
	char	letter;

	is_alphabetic = 1;
	i = 0;
	while (str[i] != '\0')
	{
		letter = str[i];
		if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122))
			i++;
		else
		{
			is_alphabetic = 0;
			break ;
		}
	}
	if (str[i] == '\0')
		is_alphabetic = 1;
	return (is_alphabetic);
}
