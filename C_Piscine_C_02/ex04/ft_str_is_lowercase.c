/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:22:06 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/23 12:38:45 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int		is_lower;
	char	c;

	is_lower = 1;
	while (*str != '\0')
	{
		c = *str;
		if (!(c >= 97 && c <= 122))
		{
			is_lower = 0;
		}
		str++;
	}
	return (is_lower);
}

/*int	main(void)
{
	char str_true[] = "helloworld";
	char str_false[] = "Hello, WorLD!w";
	char str_empty[] = "";


	printf("%d\n", ft_str_is_lowercase(str_true));
	printf("%d\n", ft_str_is_lowercase(str_false));
	printf("%d", ft_str_is_lowercase(str_empty));
	return (0);
}*/
