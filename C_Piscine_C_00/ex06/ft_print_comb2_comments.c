/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:02:12 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/14 15:19:25 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
	El primer par inicia en 00 mientras que el segundo par llega hasta 99,
		en ese
	momento el primer par pasa a 01. El programa debe terminar cuando ambos pares
	llegan a 99.
*/
void	ft_print_comb2(void)
{
	int		first_pair;
	int		second_pair;
	char	first_digit;
	char	second_digit;

	first_pair = 0;
	second_pair = 0;
	while (first_pair < 99)
	{
		while (second_pair < 100)
		{
			/*EN CASO DE TENER UN NUMEOR DE DOS DIGITOS LOS SEPARAMOS
			CON '/' SACAMOS EL PRIMER NUMERO Y CON '%' EL SEGUNDO.*/
			first_digit = (first_pair / 10) + '0';
			second_digit = (first_pair % 10) + '0';
			write(1, &first_digit, 1);
			write(1, &second_digit, 1);
			write(1, " ", 1); // Espacio entre pares
			/*EN CASO DE TENER UN NUMERO DE DOS DIGITOS LOS SEPARAMOS
			CON '/' SACAMOS EL PRIMER NUMERO Y CON '%' EL SEGUNDO.*/
			first_digit = (second_pair / 10) + '0';
			second_digit = (second_pair % 10) + '0';
			write(1, &first_digit, 1);
			write(1, &second_digit, 1);
			/* solo cuando estemos llegando al final */
			if (!(first_pair == 98 && second_pair == 99))
			{
				write(1, ", ", 2);
			}
			second_pair++;
		}
		first_pair++;
		second_pair = first_pair + 1;
	}
}

/*int main(void)
{
	ft_print_comb2();
	return (0);
}*/
