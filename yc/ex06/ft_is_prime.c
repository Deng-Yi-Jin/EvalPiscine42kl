/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechang <yechang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 19:54:06 by yechang           #+#    #+#             */
/*   Updated: 2023/04/10 22:01:35 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	if (nb < 2)
		return (0);
	while (count <= nb / 2)
	{
		if (nb % count == 0)
		{
			return (0);
		}
		count++;
	}
	return (1);
}

int	main()
{
	printf("%d\n", ft_is_prime(9));
}
