/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:13:19 by gpico-co          #+#    #+#             */
/*   Updated: 2024/07/23 09:03:34 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char	*str)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (str[j] != '\0')
	{
		if (i == 0 && (str[j] >= 'a' && str[j] <= 'z'))
		{
			str[j] -= 'a' - 'A';
			i++;
		}
		else if (i > 0 && (str[j] >= 'A' && str[j] <= 'Z'))
			str[j] += 'a' - 'A';
		else if ((str[j] < '0') || (str[j] > '9' && str[j] < 'A')
			|| (str[j] > 'Z' && str[j] < 'a') || (str[j] > 'z'))
			i = 0;
		else
			i++;
		j++;
	}
	return (str);
}

int main(void)
{
    char string1[] = "hola me llamo ralph";
    char string2[] = "hello, how are you?";
    char string3[] = "42school is awesome";
    char string4[] = "capitalize EVERY word!";
    printf("Original: %s\n", string1);
    printf("Capitalized: %s\n\n", ft_strcapitalize(string1));
    printf("Original: %s\n", string2);
    printf("Capitalized: %s\n\n", ft_strcapitalize(string2));
    printf("Original: %s\n", string3);
    printf("Capitalized: %s\n\n", ft_strcapitalize(string3));
    printf("Original: %s\n", string4);
    printf("Capitalized: %s\n\n", ft_strcapitalize(string4));
    return 0;
}
