/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:22:10 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/31 09:50:13 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*// REQUIRES PARAMETERS
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
	}
	else
	{
		write(1, "Insert just one word!", 21);
	}
	return (0);
}*/
