/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wechen <wechen@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 21:36:23 by wechen            #+#    #+#             */
/*   Updated: 2023/04/09 15:33:56 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_neg_nbr(long nb)
{
	char	arr[10];
	int		i;

	i = 0;
	nb = nb * -1;
	while (nb > 0)
	{
		arr[i] = (nb % 10) + 48;
		nb = nb / 10;
		i++;
	}
	write(1, "-", 1);
	while (i > 0)
	{
		i--;
		write(1, &arr[i], 1);
	}
}

void	ft_put_pos_nbr(long nb)
{
	char	arr[10];
	int		i;

	i = 0;
	while (nb > 0)
	{
		arr[i] = (nb % 10) + 48;
		nb = nb / 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(1, &arr[i], 1);
	}
}

void	ft_putnbr(int nb)
{
	long	lnb;

	lnb = nb;
	if (nb == 0)
		write(1, "0", 1);
	else if (nb > 0)
		ft_put_pos_nbr(lnb);
	else
		ft_put_neg_nbr(lnb);
}

int	main(void)
{
	int	l,m,n;

	l = 0;
	m = 2147483647;
	n = -2147483648;

	ft_putnbr(l);
	ft_putnbr(m);
	ft_putnbr(n);
	return (1);
}
