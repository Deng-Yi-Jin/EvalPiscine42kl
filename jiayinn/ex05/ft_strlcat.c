/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiachang <jiachang@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:50:11 by jiachang          #+#    #+#             */
/*   Updated: 2023/04/06 00:20:14 by jiachang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i + 1])
		i++;
	while (src[j] && j < size)
	{
		dest [i + 1] = src [j];
		j++;
		i++;
	}
	dest [i + 1] = '\0';
	return (i + 1);
}
