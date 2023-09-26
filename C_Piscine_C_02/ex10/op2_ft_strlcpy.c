/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:30:51 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/24 11:48:02 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while ((src[i] != '\0') && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[len])
	{
		len++;
	}
	return (len);
}

/*int	main(void)
{
	char    src1[] = "Hello,world!Hello,world!Hello,world!Hello,world!";
		// Size: 48 bytes + 1 byte for null
	char    src2[] = "Hello,world!"; // Size: 12 bytes + 1 byte null
	char	dest[20]; // 19 bytes for chars + 1 byte for null
	int size = sizeof(dest);

	// SRC 1
	printf("######### SRC 1 #########\n");
	printf("Cadena original: %s\n", src1);
	printf("# chars de src1: %lu\n", sizeof(src1) - 1);
	printf("LEN de la cadena que que se intento copiar (only chars): %d\n\n",
		ft_strlcpy(dest, src1, size));

	// DEST
	printf("Cadena copiada: %s\n", dest);
	printf("Size de dest (chars + null): %lu\n\n", sizeof(dest));

	// SRC 2
	printf("######### SRC 2 #########\n");
	printf("Cadena original: %s\n", src2);
	printf("# chars de src2: %lu\n", sizeof(src2) - 1);
	printf("LEN de la cadena que que se intento copiar (only chars): %d\n\n",
		ft_strlcpy(dest, src2, size));

	// DEST
	printf("Cadena copiada: %s\n", dest);
	printf("Size de dest  (chars + null): %lu\n", sizeof(dest));
	return (0);


	// sizeof() da el tamano en bytes de una cadena, es decir,
	// cuenta incluso el char nulo

	// La 'i' de ft_strlcpy llega hasta 18 porque comiezan en 0 no en 1
	// de 0 - 18 hay 19 bytes

	// Valores de retorno: strlcpy devuelve la longitud
	// de la cadena que ha intentado copiar, es decir, el
	// numero de caracteres, mientras que strncpy devuelve el
	// destino.

	//  size: El tamaño máximo del búfer de destino. Es importante
	//  notar que este parámetro no es la cantidad máxima de caracteres
	//  a copiar como en strncpy, sino el tamaño total del búfer de destino.

	// De modo que si queremos copiar 'n' chars de 'src' el null se encuentra
	// en la posicion 'n + 1'. Es por eso que necesitamos que i llegue hasta
	// n - 1 para reservar el ultimo espacio para el null.

	// ----------------------------------

	// 	Tamaño del bufer SRC = 13 (1 - 13)
	// Posicion del null = 12 (0 - 12)

	// Tamaño del bufer DEST = 20 (1 - 20)
	// Posicion del null = 19 (0 - 19)

	// i = 0
	// i < (size - 1)
	// 18 <  (20 - 1)
	// 18 < 19
}*/


/*int	main(void)
{
	char    src1[] = "Hello,world!Hello,world!Hello,world!Hello,world!"; // Size: 48 bytes + 1 byte for null
	char    src2[] = "Hello,world!"; // Size: 12 bytes + 1 byte null
	char	dest[20]; // 19 bytes for chars + 1 byte for null
	int size = sizeof(dest);

	// SRC 1
	printf("######### SRC 1 #########\n");
	printf("Cadena original: %s\n", src1);
	printf("# chars de src1: %lu\n", sizeof(src1) - 1);
	printf("LEN de la cadena que que se intento copiar (only chars) (ft_strlcpy): %d\n", ft_strlcpy(dest, src1, size));
	printf("LEN de la cadena que que se intento copiar (only chars) (strlcpy): %lu\n\n", strlcpy(dest, src1, size));

	// DEST
	printf("Cadena copiada: %s\n", dest);
	printf("Size de dest (chars + null): %lu\n\n", sizeof(dest));

	// SRC 2
	printf("######### SRC 2 #########\n");
	printf("Cadena original: %s\n", src2);
	printf("# chars de src2: %lu\n", sizeof(src2) - 1);
	printf("LEN de la cadena que que se intento copiar (only chars): %d\n", ft_strlcpy(dest, src2, size));
	printf("LEN de la cadena que que se intento copiar (only chars) (strlcpy): %lu\n\n", strlcpy(dest, src2, size));

	// DEST
	printf("Cadena copiada: %s\n", dest);
	printf("Size de dest  (chars + null): %lu\n\n", sizeof(dest));
	return (0);


	// sizeof() da el tamano en bytes de una cadena, es decir,
	// cuenta incluso el char nulo

	// La 'i' de ft_strlcpy llega hasta 18 porque comiezan en 0 no en 1
	// de 0 - 18 hay 19 bytes

	// Valores de retorno: strlcpy devuelve la longitud
	// de la cadena que ha intentado copiar, es decir, el
	// numero de caracteres, mientras que strncpy devuelve el
	// destino.

	//  size: El tamaño máximo del búfer de destino. Es importante
	//  notar que este parámetro no es la cantidad máxima de caracteres
	//  a copiar como en strncpy, sino el tamaño total del búfer de destino.

	// De modo que si queremos copiar 'n' chars de 'src' el null se encuentra
	// en la posicion 'n + 1'. Es por eso que necesitamos que i llegue hasta
	// n - 1 para reservar el ultimo espacio para el null.

	// ----------------------------------

	// 	Tamaño del bufer SRC = 13 (1 - 13)
	// Posicion del null = 12 (0 - 12)

	// Tamaño del bufer DEST = 20 (1 - 20)
	// Posicion del null = 19 (0 - 19)

	// i = 0
	// i < (size - 1)
	// 18 <  (20 - 1)
	// 18 < 19
}*/
