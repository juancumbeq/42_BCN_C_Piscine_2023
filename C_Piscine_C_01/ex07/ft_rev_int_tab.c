/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:18:54 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/21 11:54:04 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	rev_index;
	int	nbr;

	index = 0;
	rev_index = size - 1;
	while (index < rev_index)
	{
		nbr = tab[index];
		tab[index] = tab[rev_index];
		tab[rev_index] = nbr;
		index++;
		rev_index--;
	}
}

/*int	main(void)
{
	int	size;

	int array_int[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	// Dividimos la longitud total del array entre la longitud
	// del elemento que representa a cada uno de los demas
	size = sizeof(array_int) / sizeof(array_int[0]);
	ft_rev_int_tab(array_int, size);
	// Para darle la vuelta al array lo que hago es recorrer el array d
	// e izq a dcha y vicerversa y mietras el index
	//sea menor que rev_index, seguiremos iterando.
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array_int[i]);
	}
	return (0);
}*/
