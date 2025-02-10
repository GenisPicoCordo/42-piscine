/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:40:29 by gpico-co          #+#    #+#             */
/*   Updated: 2024/07/21 12:13:14 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 1)
		return (!power);
	nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}

/*int	main(void)
{
	printf("OUTPUT: %d\n", ft_recursive_power(-5, 2));
	return (0);
}*/
