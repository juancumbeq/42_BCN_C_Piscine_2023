/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:12:22 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/31 09:49:22 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*// REQUIRES PARAMETERS
int	main(int argc, char **argv)
{
	int nb;
	char a;

	if (argc == 2)
	{
		printf("%d\n", ft_strlen(argv[1]));
		nb = ft_strlen(argv[1]);
		a = nb + '0';
		write(1, &a, 2);
	}
	else
	{
		write(1, "Insert just one word!", 21);
	}
	return (0);
}*/
