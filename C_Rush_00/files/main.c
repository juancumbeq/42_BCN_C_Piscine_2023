/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschuste <mschuste@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:54:05 by mschuste          #+#    #+#             */
/*   Updated: 2023/08/13 21:12:12 by mschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	int	x;
	int	y;

	x = 14;
	y = 7;
	rush (x, y);
	return (0);
}
