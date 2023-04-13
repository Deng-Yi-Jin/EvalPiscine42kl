/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiew <phiew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 04:13:11 by phiew             #+#    #+#             */
/*   Updated: 2023/04/01 22:21:46 by phiew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main(void)
{
	char	*str;
	
	printf("\n");
	
	str = "abc";
	printf("Combination: %s\n", str);
	printf("All lowercase alphabets? (yes = 1; no = 0)? %i\n\n", 
		ft_str_is_lowercase(str));

	str = "";
	printf("Empty string test: %s\n", str);
	printf("Print 1? %i\n\n", ft_str_is_lowercase(str));

	str = "abDc";
	printf("Combination: %s\n", str);
	printf("All lowercase alphabets? (yes = 1; no = 0)? %i\n\n", 
		ft_str_is_lowercase(str));

	str = "abc`";
	printf("Combination: %s\n", str);
	printf("All lowercase alphabets? (yes = 1; no = 0)? %i\n\n", 
		ft_str_is_lowercase(str));

	str = "abc{e";
	printf("Combination: %s\n", str);
	printf("All lowercase alphabets? (yes = 1; no = 0)? %i\n\n", 
		ft_str_is_lowercase(str));

	return (0);
}

*/
/*case for CAPITAL
  case for lowercase
  case for non-alphabet*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}
