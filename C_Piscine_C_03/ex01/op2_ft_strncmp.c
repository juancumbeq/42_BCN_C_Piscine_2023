/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:30:41 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/22 16:30:42 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;

	// MIENTRAS NO LLEGUEMOS A 'n' Y NO SEAN NULL
	while(i < n && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		if(s1[i] != s2[i]) // MISMO LEN PERO DIFERENTES
		{
			printf("Diferencia encontrada");
			printf("%c\n", s1[i]);
			printf("%c\n", s2[i]);
			return (s1[i] - s2[i]);
		}
		else
		{
			printf("%c", s1[i]);
			printf("%c\n", s2[i]);
		}
		i++;
		
	}
	return(s1[i] - s2[i]); // STRINGS IGUALES
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int	result;
        int n = 5; // Si n es 1 se compara hasta el char en pos 0
		// char str1[] = "applz";
		// char str2[] = "apple";

		printf("\n##### ARGS ##### \n");
		printf("You have inserted: %d words.\n", argc -1);
		printf("String 1: %s\n", argv[1]);
		printf("String 2: %s\n\n", argv[2]);

		printf("\n##### IMPLEMENTATION ##### \n");
		result = ft_strncmp(argv[1], argv[2], n);
		printf("Result: %d\n", result);

		printf("\n##### ORIGINAL ##### \n");
		result = strncmp(argv[1], argv[2], n);
		printf("Result: %d\n\n", result);
	// 	if (result < 0)
	// 	{
	// 		printf("%s es menor que %s\n", argv[1], argv[2]);
	// 	}
	// 	else if (result == 0)
	// 	{
    //         printf("Strings are equal up to %d characters.\n", n);
	// 		printf("%s es igual a %s\n", argv[1], argv[2]);
	// 	}
	// 	else
	// 	{
	// 		printf("%s es mayor que %s\n", argv[1], argv[2]);
	// 	}
	}
	else
	{
		printf("Insert just two words!");
	}
	return (0);
}