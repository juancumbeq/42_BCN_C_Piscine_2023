/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 08:45:58 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/23 12:37:23 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char    src1[] = "Hello,world!Hello,world!Hello,world!Hello"; // 41 chars
	char    src2[] = "Hello,world!"; // 12 chars
	char	dest[25];
	int	n_chars = 20;

	// SOURCES Y DEST
	printf("Cadena original 1: %s\n", src1);
	printf("Size de src1: %lu\n", sizeof(src1));
	printf("Cadena original 2: %s\n", src2);
	printf("Size de src2: %lu\n\n", sizeof(src2));
	printf("Size de dest: %lu\n\n", sizeof(dest));

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
}*/
