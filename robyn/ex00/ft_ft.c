/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiew <phiew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:11:52 by phiew             #+#    #+#             */
/*   Updated: 2023/04/01 19:02:38 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{	
	int	a;

	a = 1;
	printf("%d\n", a);
	ft_ft(&a);
	printf("%d\n", a);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
