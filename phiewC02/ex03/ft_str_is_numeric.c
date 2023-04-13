/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiew <phiew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 04:13:11 by phiew             #+#    #+#             */
/*   Updated: 2023/04/01 22:16:22 by phiew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main(void)
{
	char	*str;

	printf("\n");

	str = "12345";
	printf("Combination1: %s\n", str);
	printf("All numbers (yes = 1; no = 0)? %i\n\n", ft_str_is_numeric(str));

	str = "";
	printf("Empty string test: %s\n", str);
	printf("Print 1? %i\n\n", ft_str_is_numeric(str));

	str = "12345!1";
	printf("Combination2: %s\n", str);
	printf("All numbers (yes = 1; no = 0)? %i\n\n", ft_str_is_numeric(str));

	str = "12345A";
	printf("Combination2: %s\n", str);
	printf("All numbers (yes = 1; no = 0)? %i\n\n", ft_str_is_numeric(str));

	str = "123-45";
	printf("Combination3: %s\n", str);
	printf("All numbers (yes = 1; no = 0)? %i\n\n", ft_str_is_numeric(str));

	str = "12345~";
	printf("Combination3: %s\n", str);
	printf("All numbers (yes = 1; no = 0)? %i\n\n", ft_str_is_numeric(str));
	return (0);
}

*/
/*case for CAPITAL
  case for lowercase
  case for non-alphabet*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}
