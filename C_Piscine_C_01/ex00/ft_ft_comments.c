/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:23:27 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/15 14:47:39 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr) //Definimos un puntero que recibe informacion de 'ptr'
{
	*nbr = 42; // Accedemos a la direccion de memoria almacenada y asignamos 42
	printf("%d\n", *nbr); // Mostramos valor almacenado en a direccion de memoria de nbr
}

int	main(void)
{
	int	x; // Declaramos una variable
	int	*ptr; // Declaramos un puntero

	ptr = &x; // Asignacion de direccion de 'x' a 'ptr'
	printf("%p\n", &ptr); // Direccion del puntero
	printf("%p\n", ptr); // Direccion almacenada en el puntero

	ft_ft(ptr); // Pasamos puntero como parametro
	printf("%d\n", *ptr); // Direccion almacenada en el puntero
	return (0);
}
