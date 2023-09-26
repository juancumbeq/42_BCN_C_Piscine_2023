/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:31:01 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/28 14:23:32 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	pos_cat;
	int	i;

	i = 0;
	pos_cat = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[pos_cat] = src[i];
		pos_cat++;
		i++;
	}
	dest[pos_cat] = '\0';
	return (dest);
}

/*int	main(void)
{
		char dest[20] = "Hello"; // 5 chars + 1 null
		char src[] = "world!"; // 6 chars + 1 null

		printf("\n##### ARGS ##### \n");
		printf("String 1: %s Length: %d\n", dest, ft_strlen(dest));
		printf("String 2: %s Length: %d\n", src, ft_strlen(src));
		printf("DEST Array Length: %lu\n", sizeof(dest));

		printf("\n##### IMPLEMENTATION ##### \n");
		printf("Result: %s\n", ft_strcat(dest, src));
		printf("DEST Chars Length: %d\n", ft_strlen(dest));

		printf("\n##### ORIGINAL ##### \n");
		printf("Result: %s\n", strcat(dest, src));
		printf("DEST Chars Length: %d\n\n", ft_strlen(dest));
	return (0);
}*/
