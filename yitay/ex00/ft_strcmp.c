/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:09:20 by yitay             #+#    #+#             */
/*   Updated: 2023/04/06 17:03:48 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}


#include <stdio.h>
#include <string.h>
int main()
{
	int result;
	char s1[] = "Hello";
	char s2[] = "Hello";
	result = ft_strcmp(s1, s2);
	printf("%d\n", result);
	printf("real one %d", strcmp(s1, s2));
}

