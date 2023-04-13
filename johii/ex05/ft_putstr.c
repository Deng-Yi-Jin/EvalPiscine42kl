/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:42:02 by johii             #+#    #+#             */
/*   Updated: 2023/04/04 18:29:17 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		write (1, &str[x], 1);
		x++;
	}
	return (0);
}

int	main(void)
{
	char	*str;

	str = "ugiygyyugog";
	ft_putstr(str);
}
