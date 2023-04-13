/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiew <phiew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 04:13:11 by phiew             #+#    #+#             */
/*   Updated: 2023/04/01 22:27:25 by phiew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{
	char	*str;

	printf("\n");

	str = "ABC";
	printf("Combination: %s\n", str);
	printf("All UPPERcase alphabets? (yes = 1; no = 0)? %i\n\n",
		ft_str_is_uppercase(str));

	str = "";
	printf("Empty string test: %s\n", str);
	printf("Print 1? %i\n\n", ft_str_is_uppercase(str));

	str = "ABCdE";
	printf("Combination: %s\n", str);
	printf("All UPPERcase alphabets? = 1; no = 0)? %i\n\n",
		ft_str_is_uppercase(str));

	str = "ABC@";
	printf("Combination: %s\n", str);
	printf("All UPPERCASE alpphabets? (yes = 1; no = 0)? %i\n\n",
		ft_str_is_uppercase(str));

	str = "ABC[D";
	printf("Combination: %s\n", str);
	printf("All UPPERCASE alphabets? (yes = 1; no = 0)? %i\n\n",
		ft_str_is_uppercase(str));

	return (0);
}
*/
/*case for CAPITAL
  case for lowercase
  case for non-alphabet*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}
