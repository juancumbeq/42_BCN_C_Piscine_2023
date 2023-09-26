/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:42:57 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/22 10:42:59 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int		is_print;
	char	c;

	is_print = 1;
	while (*str != '\0')
	{
		c = *str;
		if (!(c >= 32 && c <= 126))
		{
			is_print = 0;
		}
		str++;
	}
	return (is_print);
}

/*int	main(void)
{
	char str_true[] = "Hello, World!";
	char str_false[] = "\n\t\x07\x1B H";
	char str_empty[] = "";

	printf("%d\n", ft_str_is_printable(str_true));
	printf("%d\n", ft_str_is_printable(str_false));
	printf("%d\n", ft_str_is_printable(str_empty));
	return (0);
}*/
