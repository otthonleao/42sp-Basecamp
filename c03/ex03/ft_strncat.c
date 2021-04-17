/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:29:43 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/16 13:59:54 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	b;

	i = 0;
	a = 0;
	b = 0;
	if (nb == 0)
		return (dest);
	else
	{
		while (dest[a] != '\0')
		{
			a++;
		}
		while (i < nb && src[b] != '\0')
		{
			dest[a + b] = src[b];
			b++;
			i++;
		}
		dest[a + b] = '\0';
		return (dest);
	}
}
