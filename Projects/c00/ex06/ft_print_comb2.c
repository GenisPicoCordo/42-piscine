/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:04:35 by gpico-co          #+#    #+#             */
/*   Updated: 2024/07/22 09:29:02 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int y, int z)
{
	ft_putchar(y / 10 + 48);
	ft_putchar(y % 10 + 48);
	write(1, " ", 1);
	ft_putchar(z / 10 + 48);
	ft_putchar(z % 10 + 48);
}

void	ft_print_comb2(void)
{
	int	y;
	int	z;

	y = 0;
	while (y <= 98)
	{
		z = y + 1;
		while (z <= 99)
		{
			ft_print_numbers(y, z);
			if (y != 98 || z != 99)
				write(1, ", ", 2);
			z++;
		}
		y++;
	}
}

int	main()
{
	ft_print_comb2();
}
