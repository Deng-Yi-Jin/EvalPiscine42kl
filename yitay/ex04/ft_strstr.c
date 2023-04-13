/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitay <yitay@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:52:26 by yitay             #+#    #+#             */
/*   Updated: 2023/04/06 17:11:35 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i])
		{
			return (&str[i]);
			i++;
			j++;
		}
		i++;
	}
	return (0);
}

int main(void)
{
	char str[] = "Tay Yi Wen";
	char to_find[] = "Yi";
	char *is = ft_strstr(str, to_find);
	printf("%s\n", is);

}

