/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschuste <mschuste@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:30:19 by mschuste          #+#    #+#             */
/*   Updated: 2023/08/13 21:12:49 by mschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch);

void	imprimir_caracter(char ch, int cantidad)
{
	int	i;

	i = 0;
	while (i < cantidad)
	{
		ft_putchar(ch);
		i++;
	}
}

void	dibujar_arriba_abajo(int ancho)
{
	imprimir_caracter('o', 1);
	if (ancho > 1)
	{
		imprimir_caracter('-', ancho - 2);
		imprimir_caracter('o', 1);
	}
	write(1, "\n", 1);
}

void	dibujar_medio(int ancho)
{
	imprimir_caracter('|', 1);
	if (ancho > 1)
	{
		imprimir_caracter(' ', ancho - 2);
		imprimir_caracter('|', 1);
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x >= 1 && y >= 1)
	{
		dibujar_arriba_abajo(x);
	}
	while (i < y -2)
	{
		dibujar_medio(x);
		i++;
	}
	if (y >= 2)
	{
		dibujar_arriba_abajo(x);
	}
}
