/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:04:59 by gpico-co          #+#    #+#             */
/*   Updated: 2024/07/12 11:43:50 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nu;

	nu = nb;
	if (nu < 0)
	{
		ft_putchar('-');
		nu = -nu;
	}
	if (nu / 10 != 0)
		ft_putnbr(nu / 10);
	ft_putchar(nu % 10 + 48);
}

/*int	main()
{
	ft_putnbr(5849);
	return (0);
}*/
