/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilel-hla <ilel-hla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:32:24 by ilel-hla          #+#    #+#             */
/*   Updated: 2024/11/23 14:12:47 by ilel-hla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long number)
{
	int		count;
	char	*hex;

	hex = "0123456789abcdef";
	count = 0;
	if (number >= 16)
		count += ft_puthex(number / 16);
	count += ft_putchar(hex[number % 16]);
	return (count);
}

int	ft_putaddress(void *add)
{
	int				count;
	unsigned long	nbr;

	count = 0;
	nbr = (unsigned long)add;
	count += ft_puthex(nbr);
	return (count);
}
