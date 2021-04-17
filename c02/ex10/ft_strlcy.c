/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:42:59 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/14 16:57:30 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int size;
	unsigned int position;

	i = 1;
	hold = 0;
	position = 0;
	while (src[hold])
	{
		size++;
	}
	if (hold != 0)
	{
		while (i < size)
		{
			dest[position] = src[position];
			i++;
			position++;
		}
	}
	dest[position] = '\0';
	return (hold);
}
