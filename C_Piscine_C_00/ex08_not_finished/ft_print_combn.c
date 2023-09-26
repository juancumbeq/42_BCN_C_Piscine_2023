/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:17:28 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/16 09:17:45 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int    ft_max_comb(int n)
{
    int max_comb;

    max_comb = 0;
    if(n > 0 && n < 10) // Establecemos los topes
    {
        int i;
        
        i=0:
        while(i<=n)
    }

    return (max_comb);
}

void    ft_print_combn(int n)
{
    int max_comb;

    max_comb = ft_max_comb(n);
    
    

    int nb;

    nb = 1; // Llega hasta 9 pero en cada iteracion se omiten ciertos numeros del principio.

    while()
}

int main(void)
{
    ft_print_combn(2);
    return (0);
}