/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:46:51 by gpico-co          #+#    #+#             */
/*   Updated: 2025/01/13 11:04:03 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	l;
	int	i;

	l = 0;
	i = 0;
	if (argc >= 2)
	{
		while(argv[l])
			l++;
		l--;
		while(argv[l][i])
		{
			write(1, &argv[l][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
