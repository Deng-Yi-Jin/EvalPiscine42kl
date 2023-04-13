/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wechen <wechen@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 12:46:02 by wechen            #+#    #+#             */
/*   Updated: 2023/04/09 15:38:33 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char arr[] = "  \t\n\v\f\r-+--+300  4242abb9090";
	printf("Atoi return value: %d\n", ft_atoi(arr));
}

int	ft_atoi(char *str)
{
	int	nbr;
	int	neg_sign;
	int	i;

	nbr = 0;
	neg_sign = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg_sign = neg_sign + 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	if (neg_sign % 2 == 0)
		return (nbr);
	else
		return (nbr * -1);
}
