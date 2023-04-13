/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiew <phiew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:52:52 by phiew             #+#    #+#             */
/*   Updated: 2023/04/01 19:10:24 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{	
	int	a;
	int	b;

	a = 97;
	b = 10;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("a div b = %d\n", a);
	printf("a mod b = %d\n", b);
	return (0);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	temp1;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
