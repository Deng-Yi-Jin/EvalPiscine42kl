/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiew <phiew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 04:13:11 by phiew             #+#    #+#             */
/*   Updated: 2023/04/10 14:38:02 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* discuss about char *str vs char str[]- read only difference in main()*/
#include <stdio.h>

char	*ft_strupcase(char *str);

int main(void)
{
	char 	str[] = "abracadabra";
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		++i;
	}
	return (str);
}
