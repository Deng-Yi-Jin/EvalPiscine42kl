/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:39:31 by yitay             #+#    #+#             */
/*   Updated: 2023/04/06 17:10:52 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
int main(void)
{
	char dest[100] = "blehc";
	char dest1[100] = "blehc";
	char src[] = "To";
	int nb = 5;
	
	printf("%s\n", strncat(dest1, src, 5));
	printf("%s\n", ft_strncat(dest, src, 5));
	return(0);
}

