/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechang <yechang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:52:28 by yechang           #+#    #+#             */
/*   Updated: 2023/04/10 21:50:33 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	square;

	square = 1;
	if (nb > 0)
	{
		while (square * square <= nb)
		{
			if (square * square == nb)
				return (square);
			else if (square >= 46341)
				return (0);
			square++;
		}
	}
	return (0);
}

int	main()
{
	printf("%d\n", ft_sqrt(16));
}
