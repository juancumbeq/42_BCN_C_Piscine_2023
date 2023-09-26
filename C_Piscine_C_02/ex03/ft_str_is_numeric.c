/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:07:44 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/22 10:21:10 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int		is_num;
	char	c;

	is_num = 1;
	while (*str != '\0')
	{
		c = *str;
		if (!(c >= 48 && c <= 57))
		{
			is_num = 0;
		}
		str++;
	}
	return (is_num);
}

/*int	main(void)
{
	char str_true[] = "123456789";
	char str_false[] = "123456789Hello, world9";
	char str_empty[] = "";

	printf("%d\n", ft_str_is_numeric(str_true));
	printf("%d\n", ft_str_is_numeric(str_false));
	printf("%d", ft_str_is_numeric(str_empty));
	return (0);
}*/
