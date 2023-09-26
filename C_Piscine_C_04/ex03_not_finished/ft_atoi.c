/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:30:38 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/30 16:30:45 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_atoi(char *str);
{
    //int sign; // EVEN % 2 == 1, ODD % 2 == 0
    char actual_sign;
    int i;
    int sum;

    sing = '+';
    i = 0;

    while(str[i])
    {
        if (!(str[i] >= 48 && str[i] <= 57) // If str[i] is not the following, stop the program
        && str[i] != ' ' 
        && str[i] != '+' 
        && str[i] != '-')
        {
            return (0);
        }
        else
        {
            if (actual_sign == '+' && str[i] == '-')
            {
                actual_sign = '-';
            }
            else if (actual_sign == '-' && str[i] == '-')
            {
                actual_sign = '+';
            }
        }
        {
            i++;
        }
    }
    
}

// REQUIRES PARAMETERS
int main(int argc, char **argv)
{
    int result;

    argv[1] = " ---+--+1234ab567";
    if (argc == 2)
    {
        printf("\n##### ARGS ##### \n");
		printf("String 1: %s\n", argv[1]);

		printf("\n##### IMPLEMENTATION ##### \n");
		result = ft_atoi(argv[1]);
		printf("Result: %d\n", result);

		printf("\n##### ORIGINAL ##### \n");
		result = atoi(argv[1]);
		printf("Result: %d\n\n", result);
    }
    else
    {
        prinft("Insert a number between spaces, '-' y'+'");
    }
    return (0);
}