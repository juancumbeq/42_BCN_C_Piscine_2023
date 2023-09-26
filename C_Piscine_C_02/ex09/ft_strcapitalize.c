/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:50:51 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/22 13:29:40 by jcumbe-q         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	char	last_c;

	i = 0;
	last_c = ' ';
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			if (!(last_c >= 97 && last_c <= 122) && !(last_c >= 48
					&& last_c <= 57))
			{
				str[i] = c - 32;
			}
		}
		last_c = c;
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "saLUT, tU vAS ? }42mots *quarANTE-dEUX; cinquante+et+un";

	printf("Uncapitalized: %s\n", str);
	ft_strcapitalize(str);
	printf("Capitalized: %s\n", str);
	return (0);
}
