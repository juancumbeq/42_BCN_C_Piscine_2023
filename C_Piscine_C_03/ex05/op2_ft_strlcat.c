/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:32:10 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/22 16:32:14 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int	pos_cat;
    unsigned int    rem_space;
	unsigned int	i;

    i = 0;
    pos_cat = ft_strlen(dest); // CALCULAMOS LOS CHARS DE DEST Y LA POS DEL CAT
    rem_space = size - pos_cat; // ESPACIO RESTANTE DE DEST

    if(ft_strlen(dest) + ft_strlen(src) > size - 1)
    {
        return (ft_strlen(dest) + ft_strlen(src));
    }
    if(size > 0)
    {
        while(src[i] != '\0' && i < size - 1) //CONCATENAMOS SRC EN DEST
        {
            dest[pos_cat++] = src[i++];
        }
        dest[pos_cat] = '\0';
        return (pos_cat); // RETORNAMOS DEST + SRC
    }
    return (0);
}

/*
It returns the total length of the concatenated string. 

If the resulting length exceeds the specified size, 
the return value is the sum of the length of the source string and the length of the original destination 
string (without considering the null terminator).

strlcat() functions return the initial length of dst plus the length of src.
*/

int	main(void)
{
	char    dest[30] = "Hello world!"; // 12 chars + 1 null
    char    dest2[30] = "Hello world!"; // 12 chars + 1 null
	char    src[] = " world! Hello";   // 13 chars + 1 null
	int size = sizeof(dest) / sizeof(dest[0]);

	printf("\n##### ARGS ##### \n");
	printf("String 1: %s\n", dest);
    printf("String 1: %s\n", dest2);
	printf("String 3: %s\n", src);
    printf("Dest Array Length: %d\n", size);

	printf("\n##### IMPLEMENTATION ##### \n");
    printf("%d\n", ft_strlcat(dest, src, size));
    write(1, dest, ft_strlen(dest));
    write(1, "\n", 1);

	printf("\n##### ORIGINAL ##### \n");
    printf("%lu\n", strlcat(dest2, src, size));
    write(1, dest2, ft_strlen(dest2));
    write(1, "\n", 1);
	return (0);
}



unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src [i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}