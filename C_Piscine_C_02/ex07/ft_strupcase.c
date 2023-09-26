/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:49:13 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/22 11:30:41 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 97 && c <= 122)
		{
			str[i] = c - 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char str_minus[] = "hello, world!";
	char *str_mayus;

	printf("Minus: %s\n", str_minus);
	str_mayus = ft_strupcase(str_minus);
	printf("Mayus: %s\n", str_mayus);
	return (0);
}*/