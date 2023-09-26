#include <unistd.h>
#include <stdio.h>


void    ft_putchar(char a); 

void	rush(int x, int y) /* x es ancho, y la profundidad.  5/3*/
{
	int ancho;
	int prof;

	ancho = 1;
	prof = 0;
	
	/* WHILE QUE RECORRE LAS POSICIONES DE LOS CHARS A IMPRIMIR*/
	while(ancho <= x)
		{
		    /*SOLO AL INICIO DE FILA*/
			if(ancho == 1)
			{
			    /*SI NOS ENCONTRAMOS EN EL PRIMER NIVEL Y EL ULTIMO*/
			    if(prof == 0 || prof == y - 1)
			    {
			        ft_putchar('A');
				    ancho++;
			    }
			    /*SI NOS ENCONTRAMOS ENTRE EL PRIMER NIVEL Y EL ULTIMO*/
			    else
			    {
			        ft_putchar('B');
				    ancho++;
			    }
			    
			}
			
			/*SOLO AL FINAL DE LINEA*/
			else if(ancho == x)
			{
			    
			     /*SI NOS ENCONTRAMOS EN EL PRIMER NIVEL Y EL ULTIMO*/
			    if(prof == 0 || prof == y - 1)
			    {
			        ft_putchar('C');
			        
			        /*Incrementamos la profundidad*/
			       prof++;
			        
    				/*Si ya hemos alcanzando la profundidad indicada cortamos ejecucion*/
    				if (prof == y)
    				{
    				    return(0);
    				}
    				ft_putchar('\n');
    				ancho = 1;
			    }
			    
			    /*SI NOS ENCONTRAMOS ENTRE EL PRIMER NIVEL Y EL ULTIMO*/
			    else
			    {
			        ft_putchar('B');
			        ft_putchar('\n');
				    ancho = 1;
				    prof++;
			    }
			}
			
			/*ENTRE INICIO Y FINAL DE CADA LINEA*/
			else
			{
			    /*Si estamos en la primera o ultima fila, mostramos B*/
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