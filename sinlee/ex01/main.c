/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:39:41 by djin              #+#    #+#             */
/*   Updated: 2023/04/08 17:39:44 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	printf("-6 = %d (0)\n", ft_recursive_factorial(-6));
	printf(" 0 = %d (1)\n", ft_recursive_factorial(0));
	printf(" 1 = %d (1)\n", ft_recursive_factorial(1));
	printf(" 2 = %d (2)\n", ft_recursive_factorial(2));
	printf(" 3 = %d (6)\n", ft_recursive_factorial(3));
	printf(" 4 = %d (24)\n", ft_recursive_factorial(4));
}
