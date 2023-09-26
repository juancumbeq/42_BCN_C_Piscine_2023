/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:02:12 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/16 11:22:34 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char digit)
{
	write(1, &digit, 1);
}

void	ft_print_comb2(void)
{
	int	first_pair;
	int	second_pair;

	first_pair = 0;
	second_pair = first_pair + 1;
	while (first_pair < 99)
	{
		while (second_pair < 100)
		{
			ft_putchar((first_pair / 10) + '0');
			ft_putchar((first_pair % 10) + '0');
			write(1, " ", 1);
			ft_putchar((second_pair / 10) + '0');
			ft_putchar((second_pair % 10) + '0');
			if (!(first_pair == 98 && second_pair == 99))
				write(1, ", ", 2);
			second_pair++;
		}
		first_pair++;
		second_pair = first_pair + 1;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
