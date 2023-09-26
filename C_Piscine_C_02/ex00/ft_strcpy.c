/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:00:45 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/22 08:44:35 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*bu_dest;

	bu_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (bu_dest);
}

/*int	main(void)
{
	char	*src;
	char	*result;
	char	dest[20];

	// Es necesario inicializar el array destino para evitar Segmentation Fault
	src = "Hello, world!";
	result = ft_strcpy(dest, src);
	printf("Cadena copiada: %s\n", result);
	return (0);
	// Otra opcion del ejercicio seria recorrer el array y no el puntero
}*/
