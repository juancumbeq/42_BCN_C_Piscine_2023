/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 09:30:56 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/23 12:36:07 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int		alpha;
	char	c;

	alpha = 1;
	while (*str != '\0')
	{
		c = *str;
		if (!(c >= 65 && c <= 90) && !(c >= 97 && c <= 122))
		{
			alpha = 0;
		}
		str++;
	}
	return (alpha);
}

/*int	main(void)
{
	char str_true[] = "Helloworld";
	char str_false[] = "Hello, 1234 world";
	char str_empty[] = ""; // A efectos practicos solo contiene un '\0'

	printf("%d\n", ft_str_is_alpha(str_true));
	printf("%d\n", ft_str_is_alpha(str_false));
	printf("%d\n", ft_str_is_alpha(str_empty));
	return (0);
}*/
