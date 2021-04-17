/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:51:51 by orodrigo          #+#    #+#             */
/*   Updated: 2021/04/16 14:18:07 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_dest_len(char *dest, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_src_len(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int src_size;

	j = 0;
	i = ft_dest_len(dest, size);
	src_size = ft_src_len(src);
	if (i < size)
	{
		while (i + j < size - 1 && src[j] != '\0')
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
	}
	return (i + src_size);
}
