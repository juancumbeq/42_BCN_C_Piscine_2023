/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 08:45:58 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/24 16:40:56 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
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

/*
#include <string.h>
int	main(void)
{
	char    src1[] = "Hello,world!Hello,world!Hello,world!Hello"; // 41 chars
	char    src2[] = "Hello,world!"; // 12 chars
	char	dest[25];
	int	n_chars = 20;

	// SOURCES Y DEST
	printf("Cadena original 1: %s\n", src1);
	printf("Size de src1: %lu\n", sizeof(src1) - 1);
	printf("Cadena original 2: %s\n", src2);
	printf("Size de src2: %lu\n\n", sizeof(src2) - 1);
	printf("Size de dest: %lu\n", sizeof(dest));
	printf("Size de n: %d\n\n", n_chars);

	// ORIGINAL VS FT_
	strncpy(dest, src1, n_chars);
	printf("Cadena 1 copiada con strncpy: %s\n", dest);
	ft_strncpy(dest, src1, n_chars);
	printf("Cadena 1 copiada con ft_strncpy: %s\n\n", dest);

	strncpy(dest, src2, n_chars);
	printf("Cadena 2 copiada con strncpy: %s\n", dest);
	ft_strncpy(dest, src2, n_chars);
	printf("Cadena 2 copiada con ft_strncpy: %s\n\n", dest);
	return (0);

	// Es necesario 'unsigned int	i;' porque si no no se
	// pueden comparar en el while

	// STRNCPY lo que hace es copiar 'n' chars dentro de otro
	// array. Si la fuente contiene menos caracteres que 'n'
	// el resto se rellena con \0 hasta llegan a n.

	// Si la fuente contiene mas caracteres que 'n', se
	// rellenaran todos los espacios designados por 'n'
	// pero no se asegura que haya un char nulo al final del
	// array.
}*/
