/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:05:32 by yitay             #+#    #+#             */
/*   Updated: 2023/04/06 17:06:22 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{	
		while ((i < n) && (s1[i]))
		{
			if (s1[i] == s2[i])
			{
				i++;
			}
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
		}
		return (0);
	}
}

int	main(void)
{
	char s1[] = "world";
	char s2[] = "hello";
	int n = 5;
	printf("%d\n", ft_strncmp(s2, s1, n));
}
