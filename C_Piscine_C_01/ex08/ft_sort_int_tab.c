/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:55:40 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/21 15:32:40 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	index;

	index = 0;
	while (index < size)
	{
		if (tab[index] > tab[index + 1])
		{
			aux = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = aux;
			index = 0;
		}
		else
		{
			index++;
		}
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
