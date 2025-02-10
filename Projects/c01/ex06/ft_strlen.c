/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:26:56 by gpico-co          #+#    #+#             */
/*   Updated: 2024/07/12 12:12:10 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		str++;
		length++;
	}
	return (length);
}

/*#include <stdio.h>

int	main(void)
{
	int	total;
	char	str[9] = "GenNoeEre";
	total = ft_strlen(str);
	printf("Total num letters in the word %s are %d.", str, total);
	return (0);
}*/
