#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char ch);

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

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
	imprimir_caracter('A', 1);
	if (ancho > 1)
	{
		imprimir_caracter('B', ancho - 2);
		imprimir_caracter('C', 1);
	}
	write(1, "\n", 1);
}

void	dibujar_medio(int ancho)
{
	imprimir_caracter('B', 1);
	if (ancho > 1)
	{
		imprimir_caracter(' ', ancho - 2);
		imprimir_caracter('B', 1);
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
	while (i < y - 2)
	{
		dibujar_medio(x);
		i++;
	}
	if (y >= 2)
	{
		dibujar_arriba_abajo(x);
	}
}

int	main(void)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	rush(x, y);
	return (0);
}
