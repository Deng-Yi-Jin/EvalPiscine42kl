/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiew <phiew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:52:52 by phiew             #+#    #+#             */
/*   Updated: 2023/04/01 19:07:21 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{	
	int	a;
	int	b;

	a = 2;
	b = 0;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_swap(&a, &b);
	printf("Now:\na = %d\n", a);
	printf("b = %d\n", b);
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
