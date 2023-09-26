/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:24:40 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/17 11:50:10 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 17;
	y = 5;
	ft_div_mod(x, y, &div, &mod);
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", div);
	printf("%d\n", mod);
	return (0);
}*/
