/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chichin <chichin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:22:01 by chichin           #+#    #+#             */
/*   Updated: 2023/04/08 17:11:08 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if ((str [i] < '0') || (str[i] > '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	str [] = "12309";

	ft_str_is_numeric(str);
	printf("%d", ft_str_is_numeric(str));
}
