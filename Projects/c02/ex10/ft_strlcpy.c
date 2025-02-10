/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:59:59 by gpico-co          #+#    #+#             */
/*   Updated: 2024/07/15 13:41:06 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <bsd/string.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size)
	{
		while (i < (size - 1) && i < len && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

/*int main()
{
    char dest[50];
    char src[] = "SALUT les khey";
    unsigned int result;
    printf("src: %s\n", src);
    result = ft_strlcpy(dest, src, sizeof(dest));
    printf("string.h: %u\n", result);
    printf("dest: %s\n", dest);
    result = ft_strlcpy(dest, src, 5);
    printf("size src: %u\n", result);
    printf("dest (size 5): %s\n", dest);
    return 0;
}*/
