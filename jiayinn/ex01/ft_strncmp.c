/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiachang <jiachang@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:36:24 by jiachang          #+#    #+#             */
/*   Updated: 2023/04/08 23:45:57 by jiachang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char	*s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i < n -1)
		&& (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
