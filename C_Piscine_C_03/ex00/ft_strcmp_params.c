/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:30:05 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/23 13:08:35 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while(*s1 && *s2)
	{
		if(*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return(*s1 - *s2);
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int	result;
		// char str1[] = "applz";
		// char str2[] = "apple";

		printf("You have inserted: %d words.\n", argc -1);
		printf("String 1: %s\n", argv[1]);
		printf("String 2: %s\n\n", argv[2]);

		result = ft_strcmp(argv[1], argv[2]);
		printf("### FT_ ###\n");
		printf("Result: %d\n", result);
		if (result < 0)
		{
			printf("%s es menor que %s\n", argv[1], argv[2]);
		}
		else if (result == 0)
		{
			printf("%s es igual a %s\n", argv[1], argv[2]);
		}
		else
		{
			printf("%s es mayor que %s\n", argv[1], argv[2]);
		}
	}
	else
	{
		printf("Insert just two words!");
	}
	return (0);
}