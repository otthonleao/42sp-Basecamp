/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:42:50 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/14 18:31:45 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		left;

	i = 0;
	while (str[i])
	{
		left = str[i - 1];
		if ((left < 48 || left > 57)
		&& (left < 65 || (left > 90)
		&& (left < 97 || left > 122))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
			i++;
		}
		else if ((left >= 65 && left <= 90)
		|| (left >= 97 && left <= 90)
		|| (left >= 48 && left <= 57))
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
