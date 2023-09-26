/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:32:10 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/29 13:57:44 by jcumbe-q         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	j = dlen;
	if (size == 0 || size <= dlen)
	{
		return (slen + size);
	}
	while (src[i] != '\0' && i < (size - dlen - 1))
	{
		dest[j++] = src[i++];
	}
	dest[j] = '\0';
	return (dlen + slen);
}

/*int	main(void)
{
	char    dest[30] = "Hello world!"; // 12 chars + 1 null
	char    dest2[30] = "HELLO WORLD!"; // 12 chars + 1 null
	char    src[] = " world! Hello";   // 13 chars + 1 null
	int size = sizeof(dest);

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
}*/
