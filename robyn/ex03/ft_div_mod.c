/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiew <phiew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:52:52 by phiew             #+#    #+#             */
/*   Updated: 2023/04/01 19:09:03 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

/* 1. (int div;) 2. (div = 0;) 3. (&div)
   4. (int *div aka address) 5. (*)address- content 
 */
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{	
	int	a;
	int	b;
	int	div;
	int mod;

	a = 97;
	b = 10;
	div = 0;
	mod = 0;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_div_mod(97, 10, &div, &mod);
	printf("a div b = %d\n", div);
	printf("a mod b = %d\n", mod);
	return (0);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
