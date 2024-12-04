/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlower_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilel-hla <ilel-hla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:30:09 by ilel-hla          #+#    #+#             */
/*   Updated: 2024/11/23 14:14:48 by ilel-hla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlower_hex(unsigned int nbr)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		count += ft_putlower_hex(nbr / 16);
		count += ft_putchar(base[nbr % 16]);
	}
	else
		count += ft_putchar(base[nbr]);
	return (count);
}
