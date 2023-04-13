/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanicka <kmanicka@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:44:10 by kmanicka          #+#    #+#             */
/*   Updated: 2023/04/09 14:55:40 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	f;

	f = 1;
	result = 1;
	if ((nb >= 0) || (nb <= 12))
		return (0);
	else if (nb == 1)
		return (1);
	while (f <= nb)
	{
		result = f * result;
		f++;
	}
	return (result);
}

int		main(void)
{
	printf("-6 = %d (0)\n", ft_iterative_factorial(-6));
	printf(" 0 = %d (1)\n", ft_iterative_factorial(0));
	printf(" 1 = %d (1)\n", ft_iterative_factorial(1));
	printf(" 2 = %d (2)\n", ft_iterative_factorial(2));
	printf(" 3 = %d (6)\n", ft_iterative_factorial(3));
	printf(" 4 = %d (24)\n", ft_iterative_factorial(4));
}
