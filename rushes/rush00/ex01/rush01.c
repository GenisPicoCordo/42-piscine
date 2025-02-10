/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelara- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:40:51 by pmelara-          #+#    #+#             */
/*   Updated: 2024/07/07 14:32:08 by pohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c_x;
	int	c_y;

	c_x = 1;
	c_y = 1;
	while (c_y <= y)
	{
		c_x = 1;
		while (c_x <= x)
		{
			if ((c_x == 1 && c_y == 1)
				|| (c_x == x && c_y == y && x > 1 && y > 1))
				ft_putchar('/');
			else if ((c_x == 1 && c_y == y && y > 1)
				|| (c_x == x && c_y == 1 && x > 1))
				ft_putchar('\\');
			else if (c_x > 1 && c_y > 1 && c_x < x && c_y < y)
				ft_putchar(' ');
			else
				ft_putchar('*');
			c_x++;
		}
		c_y++;
		ft_putchar('\n');
	}
}
