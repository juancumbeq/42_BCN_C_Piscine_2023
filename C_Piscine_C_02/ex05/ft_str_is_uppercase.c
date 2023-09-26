/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:28:50 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/22 10:41:15 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int		is_upper;
	char	c;

	is_upper = 1;
	while (*str != '\0')
	{
		c = *str;
		if (!(c >= 65 && c <= 90))
		{
			is_upper = 0;
		}
		str++;
	}
	return (is_upper);
}

/*int	main(void)
{
	char str_true[] = "HELLOWORLD";
	char str_false[] = "Hello, World!H";
	char str_empty[] = "";
	printf("%d\n", ft_str_is_uppercase(str_true));
	printf("%d\n", ft_str_is_uppercase(str_false));
	printf("%d", ft_str_is_uppercase(str_empty));
	return (0);
}*/