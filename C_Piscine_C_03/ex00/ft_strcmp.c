/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:30:05 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/26 13:30:03 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*int	main(void)
{
	int	result;
	char str1[] = "apple";
	char str2[] = "applz";

	printf("String 1: %s\n", str1);
	printf("String 2: %s\n\n", str2);
	result = ft_strcmp(str1, str2);

	printf("### FT_ ###\n");
	printf("Resultado: %d\n", result);
	if (result < 0)
	{
		printf("%s es menor que %s\n", str1, str2);
	}
	else if (result == 0)
	{
		printf("%s es igual a %s\n", str1, str2);
	}
	else
	{
		printf("%s es mayor que %s\n", str1, str2);
	}
	return (0);
}*/
