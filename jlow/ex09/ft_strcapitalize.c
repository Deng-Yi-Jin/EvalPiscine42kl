/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:00:24 by jlow              #+#    #+#             */
/*   Updated: 2023/04/08 18:26:15 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] < '0') || (str[i - 1] > 58 && str[i - 1] < 65)
				|| (str[i - 1] > 'z' && str[i - 1] <= 127))
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quaRAnte-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
}
