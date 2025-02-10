/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:40:13 by gpico-co          #+#    #+#             */
/*   Updated: 2025/01/13 15:42:24 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res;
	int	i;

	i = 8;
	res = 0;
	while(i > 0)
	{
		res = (res << 1)  | (octet & 1);
		octet = octet >> 1;
		i--;
	}
	return (res);
}
