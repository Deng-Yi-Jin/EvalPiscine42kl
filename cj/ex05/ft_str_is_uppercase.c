/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chichin <chichin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:29:13 by chichin           #+#    #+#             */
/*   Updated: 2023/04/08 17:12:19 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if ((str [i] < 'A') || (str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	str [] = "";

	ft_str_is_uppercase(str);
	printf("%d", ft_str_is_uppercase(str));
}
