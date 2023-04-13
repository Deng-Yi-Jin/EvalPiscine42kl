/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czheng-c <czheng-c@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:00:43 by czheng-c          #+#    #+#             */
/*   Updated: 2023/04/11 09:46:51 by czheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	char *temp;
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] != to_find[j])
				break;
			j++;
		}
		if (to_find[j] != '\0')
			temp = str[i];
		i++;
	}
	return temp;
}


int main()
{
	char ar[] = {"grand theft auto"};
	char ar2[] = {"the"};
	printf("%s", ft_strstr(ar,ar2));
}
