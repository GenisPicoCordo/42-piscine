/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:44:01 by gpico-co          #+#    #+#             */
/*   Updated: 2024/07/11 12:25:19 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_strncpy(char	*dest, char	*src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
        char    source[10] = "GenNoeEr.";
        char    destination[15];
        char	*dest;

        printf("Before\n\tsrc: %s\n\tdes: %s\n", source, destination);
        dest = ft_strncpy(destination, source, 6);
        printf("After:\n\tsrc: %s\n\tdes: %s\n", source, dest);
        return (0);
}*/
