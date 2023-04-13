/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiew <phiew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 03:24:12 by phiew             #+#    #+#             */
/*   Updated: 2023/04/04 15:07:15 by phiew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	str1[] = "Ha";
	char	str2[] = "Hello";
	
	printf("Src before strncpy = %s\n", str1);
	printf("Dest before strncpy = %s\n", str2);
	ft_strncpy(str2, str1, 5);	
	printf("New destination = %s\n", str2);
	printf("Src = %s\n", str1);
	return (0);
}
*/
/*n =  max size of dest array*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
