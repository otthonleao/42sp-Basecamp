/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:21:19 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/16 07:14:59 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	if (n == 0)
		return (0);
	else
	{
		while ((i < (n - 1)) &&
		(s1[i] == s2[i]) &&
		(s1[i] != '\0'))
		{
			i++;
		}
		a = s1[i];
		b = s2[i];
	}
	return (a - b);
}
