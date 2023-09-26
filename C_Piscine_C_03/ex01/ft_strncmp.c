/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:30:41 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/30 11:02:09 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
}

/*int	main(int argc, char **argv)
{
	int	result;

	if (argc == 3)
	{
		int n = 5; // Si n es 1 se compara hasta el char en pos 0
		// char str1[] = "applz";
		// char str2[] = "apple";
		printf("\n##### ARGS ##### \n");
		printf("You have inserted: %d words.\n", argc - 1);
		printf("String 1: %s\n", argv[1]);
		printf("String 2: %s\n\n", argv[2]);

		printf("\n##### IMPLEMENTATION ##### \n");
		result = ft_strncmp(argv[1], argv[2], n);
		printf("Result: %d\n", result);

		printf("\n##### ORIGINAL ##### \n");
		result = strncmp(argv[1], argv[2], n);
		printf("Result: %d\n\n", result);
		if (result < 0)
		{
			printf("%s es menor que %s\n", argv[1], argv[2]);
		}
		else if (result == 0)
		{
			printf("Strings are equal up to %d characters.\n", n);
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
}*/
