/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiachang <jiachang@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:39:14 by jiachang          #+#    #+#             */
/*   Updated: 2023/04/06 00:30:21 by jiachang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char	*str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while ((str[i + j] == to_find[j]) && str[i + j] != '\0')
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
			i++;
			j = 0;
	}
	return (0);
}
