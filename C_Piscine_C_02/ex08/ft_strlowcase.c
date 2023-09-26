/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:32:34 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/22 11:49:15 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 65 && c <= 90)
		{
			str[i] = c + 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char str_minus[] = "HELLO, WORLD!";

	printf("Mayus: %s\n", str_minus);
	ft_strlowcase(str_minus);
	printf("Minus: %s\n", str_minus);
	return (0);
}*/
