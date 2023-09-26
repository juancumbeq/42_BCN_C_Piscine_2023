/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:55:40 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/21 14:43:31 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	min;
	int	index;
	int	index_in;

	index = 0;
	while (index < size - 1)
	{
		index_in = index + 1;
		min = index;
		while (index_in < size)
		{
			if (tab[index_in] < tab[min])
				min = index_in;
			index_in++;
		}
		if (tab[min] < tab[index])
		{
			aux = tab[index];
			tab[index] = tab[min];
			tab[min] = aux;
		}
		index++;
	}
}

/*int	main(void)
{
	int	size;

	int array_int[] = {6, 5, 7, 8, 9, 2, 1, 3, 4};
	size = sizeof(array_int) / sizeof(array_int[0]);
	ft_sort_int_tab(array_int, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array_int[i]);
	}
	return (0);
}*/
