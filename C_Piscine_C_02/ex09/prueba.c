#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = c + 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

char    *ft_strcapitalize(char *str)
{
    int     i;
    char    c;
    c = ' ';
    i = 0;
    ft_strlowcase(str);
    
    while (str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            if(!(c >= 'a' && c <= 'z') && !(c >= 48 && c <= 57))
            {
                str[i] -= 32;
            }
        }
        c = str[i];
        i++;
    }
    return (str);
}



int	main(void)
{
	char str[] = "saLUT, tU vAS ? }42mots *quarANTE-dEUX; cinquante+et+un";

	printf("Uncapitalized: %s\n", str);
	ft_strcapitalize(str);
	printf("Capitalized: %s\n", str);
	return (0);
} 