/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chichin <chichin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 00:33:35 by chichin           #+#    #+#             */
/*   Updated: 2023/04/08 17:18:47 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 'A' && str [i] <= 'Z')
		{
			str [i] = str [i] + 32;
		}	
		if ((str[i - 1] < 'A' || str[i - 1] > 'Z')
			&& (str[i - 1] < 'a' || str[i - 1] > 'z')
			&& (str[i - 1] < '0' || str[i - 1] > '9')
			&& (str[i] >= 'a' && str[i] <= 'z'))
		str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str [] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s\n", str);
}
