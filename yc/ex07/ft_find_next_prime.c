/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechang <yechang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:15:31 by yechang           #+#    #+#             */
/*   Updated: 2023/04/10 22:03:26 by djin             ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

int	main()
{
	printf("%d\n", ft_find_next_prime(60));
}
