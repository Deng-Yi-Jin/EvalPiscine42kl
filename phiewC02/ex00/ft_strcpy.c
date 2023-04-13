/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiew <phiew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 01:53:50 by phiew             #+#    #+#             */
/*   Updated: 2023/04/01 21:22:24 by phiew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src1[] = "twenty";
	char	dest2[] = "fourtyfive";

	printf("Copied %s\n", src1);
	printf("Destination before paste: %s\n", dest2);
	ft_strcpy(dest2, src1);
	printf("Destination after paste: %s\n", dest2);
	return (0);
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
