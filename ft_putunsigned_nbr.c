/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilel-hla <ilel-hla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:27:38 by ilel-hla          #+#    #+#             */
/*   Updated: 2024/11/20 21:23:01 by ilel-hla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned_nbr(unsigned int nbr)
{
	unsigned int	count;

	count = 0;
	if (nbr > 9)
	{
		count += ft_putunsigned_nbr(nbr / 10);
		count += ft_putunsigned_nbr(nbr % 10);
	}
	else
		count += ft_putchar(nbr + '0');
	return (count);
}
