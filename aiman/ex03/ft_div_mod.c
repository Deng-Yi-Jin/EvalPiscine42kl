/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashafi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:37:48 by ashafi            #+#    #+#             */
/*   Updated: 2023/04/05 13:35:04 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int i;
	int j;
	int k;
	int l;
	i = 28;
	j = 3;
	ft_div_mod(i, j, &k, &l);
	printf("%d %d %d %d\n", i, j, k, l);
}
