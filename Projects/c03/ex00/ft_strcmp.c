/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 09:32:36 by gpico-co          #+#    #+#             */
/*   Updated: 2024/07/18 08:54:44 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*int	main()
{
	char	*str1 = "hello";
	char	*str2 = "hello";
	char	*str3 = "world";

	printf("Comparing %s and %s: %d\n", str1, str2, ft_strcmp(str1, str2)); 0
	printf("Comparing %s and %s: %d\n", str1, str3, ft_strcmp(str1, str3)); -
	printf("Comparing %s and %s: %d\n", str3, str1, ft_strcmp(str3, str1)); +
	return 0;
}*/
