/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:09:33 by gpico-co          #+#    #+#             */
/*   Updated: 2025/01/13 12:46:20 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	l;

	l = 0;
	if (argc == 2)
	{
		while(argv[1][l])
			l++;
		while(l > 0)
		{
			l--;
			write(1, &argv[1][l], 1);
		}
	}
	write(1, "\n", 1);
}
