/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 09:46:43 by gpico-co          #+#    #+#             */
/*   Updated: 2024/07/16 14:40:50 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		if (s2[i] > s1[i])
			return (-1);
		i++;
	}
	if (i < n)
	{
		if (s1[i] && !s2[i])
			return (1);
		if (s2[i] && !s1[i])
			return (-1);
	}
	return (0);
}

/*int	main()
{
	char	*str1 = "hello";
	char	*str2 = "hello";
	char	*str3 = "world";
	unsigned int	n = 3;

	printf("Comparing %s and %s: %d\n", str1, str2, ft_strncmp(str1, str2, n)); 0
	printf("Comparing %s and %s: %d\n", str1, str3, ft_strncmp(str1, str3, n)); -
	printf("Comparing %s and %s: %d\n", str3, str1, ft_strncmp(str3, str1, n)); +
	return 0;
}*/
