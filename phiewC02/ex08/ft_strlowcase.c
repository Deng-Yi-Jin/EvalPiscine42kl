/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiew <phiew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 04:13:11 by phiew             #+#    #+#             */
/*   Updated: 2023/04/04 13:31:27 by phiew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* discuss about char *str vs char str[]- read only difference in main()*/
/*#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char 	str[] = "LOWERCASE";
	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		++i;
	}
	return (str);
}
