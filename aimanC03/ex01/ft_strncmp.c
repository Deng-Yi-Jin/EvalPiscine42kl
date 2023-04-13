/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashafi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 23:14:10 by ashafi            #+#    #+#             */
/*   Updated: 2023/04/10 14:18:12 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char	*s1, *s2;

	s1 = "aba";
	s2 = "abz";
	ft_strncmp(s1, s2, 3);
	printf("%d\n", ft_strncmp(s1, s2, 3));
}
