/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chichin <chichin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:36:24 by chichin           #+#    #+#             */
/*   Updated: 2023/04/08 17:10:10 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if ((str [i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
		{
			return (0);
			i++;
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

int	main(void)
{
	char	str [] = "jhs789jkahdjkashk";

	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha(str));
}
