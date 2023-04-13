/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:42:49 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/10 17:35:16 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	nb;

	nb = atoi(argv[1]);
	printf("%d\n", ft_find_next_prime(nb));
	return (0);
}

/*#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int	index;

	index = -2;
	while (index < 100)
	{
		printf("find_next_prime(%d) = %d\n", index, ft_find_next_prime(index));
		index++;
	}
	printf("find_next_prime(%d) = %d\n", INT_MAX, ft_find_next_prime(INT_MAX));
}*/
