/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:24:22 by johii             #+#    #+#             */
/*   Updated: 2023/04/04 18:27:48 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	td;
	int	tm;

	td = *a / *b;
	tm = *a % *b;
	*a = td;
	*b = tm;
}

int main(void)
{
	int a;
	int b;
	int	*p1;
	int	*p2;

	a = 27;
	b = 10;
	p1 = &a;
	p2 = &b;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
}
