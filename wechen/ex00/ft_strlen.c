/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wechen <wechen@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:14:19 by wechen            #+#    #+#             */
/*   Updated: 2023/04/09 15:30:15 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

#include <stdio.h>
int	main(void)
{
	char string[] = "Hello world";
	
	ft_strlen(string);
	printf("%d\n", ft_strlen(string));
}
