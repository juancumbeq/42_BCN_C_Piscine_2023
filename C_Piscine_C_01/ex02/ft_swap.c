/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:01:04 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/17 11:19:36 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	backup;

	backup = *a;
	*a = *b;
	*b = backup;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 1;
	y = 9;
	printf("%d\n", x);
	printf("%p\n", &x);
	printf("%d\n", y);
	printf("%p\n", &y);
	ft_swap(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}*/