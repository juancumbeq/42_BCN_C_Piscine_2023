/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcumbe-q <jcumbe-q@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:31:48 by jcumbe-q          #+#    #+#             */
/*   Updated: 2023/08/29 10:35:39 by jcumbe-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] == to_find[j])
			{
				while ((str[i + j] == to_find[j]) && (to_find[j] != '\0'))
					j++;
				if (to_find[j] == '\0')
					return (&str[i]);
				j = 0;
			}
			i++;
		}
		return (NULL);
	}
}

/*int	main(void)
{
	char    str[] = "Hello world Hello!"; // 18 chars + 1 null
	char    sub[] = "wor";   // 6 chars + 1 null
	char    *ptr_imp;
	char    *ptr_org;

	printf("\n##### ARGS ##### \n");
	printf("String 1: %s\n", str);
	printf("String 2: %s\n", sub);

	printf("\n##### IMPLEMENTATION ##### \n");
	ptr_imp = ft_strstr(str, sub);
	if (ptr_imp != NULL) {
		write(1, ptr_imp, ft_strlen(ptr_imp));
		write(1, "\n", 1);
	} else {
		write(1, "Not found\n", 10);
	}

	printf("\n##### ORIGINAL ##### \n");
	ptr_org = strstr(str, sub);
	if (ptr_org != NULL) {
		write(1, ptr_org, 1); // MOSTRAMOS LA PRIMERA LETRA DE LA OCURRENCIA
		write(1, "\n", 1);
		write(1, ptr_org,
			ft_strlen(ptr_org));// MOSTRAMOS EL STRING RESTANTE DE LA PRIMERA OCURRENCIA
		write(1, "\n", 1);
	} else {
		write(1, "Not found\n", 10);
	}
	return (0);
}*/
