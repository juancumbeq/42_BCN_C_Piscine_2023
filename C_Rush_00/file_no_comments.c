#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char a); 
void	rush(int x, int y)
{
	int ancho;
	int prof;

	ancho = 1;
	prof = 0;

	while(ancho <= x)
		{
			if(ancho == 1)
			{
			    if(prof == 0 || prof == y - 1)
			    {
			        ft_putchar('A');
				    ancho++;
			    }
			    else
			    {
			        ft_putchar('B');
				    ancho++;
			    }
			    
			}
			else if(ancho == x)
			{
			    if(prof == 0 || prof == y - 1)
			    {
			        ft_putchar('C');
			        prof++;
    				if (prof == y)
    				{
    				    return(0);
    				}
    				ft_putchar('\n');
    				ancho = 1;
			    }
			    else
			    {
			        ft_putchar('B');
			        ft_putchar('\n');
				    ancho = 1;
				    prof++;
			    }
			}
			else
			{
				if (prof == 0 || prof == y - 1)
				{
				    ft_putchar('B');
				    ancho++;
				}
				else
				{
				    ft_putchar(' ');
				    ancho++;
				}
			}
		}
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(void)
{
	int x = 5;
	int y = 3;
	rush(x, y);
	return (0);
}