/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wechen <wechen@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:36:31 by wechen            #+#    #+#             */
/*   Updated: 2023/04/09 13:52:16 by wechen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);
int	ft_atoi(char *str);

int	main(void)
{
}

int	ft_atoi_base(char *str, char *base)
{
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
