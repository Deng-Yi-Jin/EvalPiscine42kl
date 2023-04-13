/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chichin <chichin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:08:09 by chichin           #+#    #+#             */
/*   Updated: 2023/04/08 17:11:55 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if ((str [i] < 'a') || (str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	str [] = "jhsJHA878jkahashk";

	ft_str_is_lowercase(str);
	printf("%d", ft_str_is_lowercase(str));
}
