/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiew <phiew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:29:15 by phiew             #+#    #+#             */
/*   Updated: 2023/04/02 22:19:50 by phiew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_printable(char *str);

int main(void)
{
	char	*str;

	printf("\n");

	str = "A";
	printf("A is printable? (yes = 1; no = 0) %d\n\n", ft_str_is_printable(str));

	str = "";
	printf("Return 1 for empty str? %d\n\n", ft_str_is_printable(str));

	str = "\n";
	printf("nl is printable? (yes = 1; no = 0) %d\n\n",ft_str_is_printable(str));

	return (0);
}
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}
