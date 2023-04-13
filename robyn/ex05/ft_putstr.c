/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiew <phiew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:52:52 by phiew             #+#    #+#             */
/*   Updated: 2023/04/01 19:17:05 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* address a = a[0] by default; ft_putstr(str[0]); or*/
#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{	
	char	*str;

	str = "Twenty";
	ft_putstr(str);
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}
