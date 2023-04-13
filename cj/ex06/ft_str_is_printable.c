/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chichin <chichin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:39:00 by chichin           #+#    #+#             */
/*   Updated: 2023/04/08 17:13:53 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if ((str [i] < 32) || (str[i] > 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	str [] = "~";

	ft_str_is_printable(str);
	printf("%d", ft_str_is_printable(str));
}
