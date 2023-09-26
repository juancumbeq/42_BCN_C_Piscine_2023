/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:31:22 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/28 16:02:47 by jcumbe-q         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	pos_cat;
	unsigned int	i;

	pos_cat = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[pos_cat++] = src[i++];
	}
	dest[pos_cat] = '\0';
	return (dest);
}

/*int	main(void)
{
	int	n;

	char dest[20] = "Hello"; // 5 chars + 1 null
	char src[] = "world!";   // 6 chars + 1 null
	n = 4;
	printf("\n##### ARGS ##### \n");
	printf("String 1: %s\n", dest);
	printf("String 2: %s\n", src);
	printf("Dest Array Length: %lu\n", sizeof(dest));
	printf("\n##### IMPLEMENTATION ##### \n");
	printf("Result: %s\n", ft_strncat(dest, src, n));
	printf("Dest Chars Length: %d\n", ft_strlen(dest));
	printf("\n##### ORIGINAL ##### \n");
	printf("Result: %s\n", strncat(dest, src, n));
	printf("Dest Chars Length: %d\n\n", ft_strlen(dest));
	return (0);
}*/
