/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:18:17 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/21 12:35:11 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int nb)
{
	long int	nbr;
	int			len;

	nbr = nb;
	len = 0;
	if (nbr < 0)
	{
		write(2, "-", 1);
		nbr *= -1;
		len++;
	}
	if (nbr > 9)
		len += ft_putnbr_pf(nbr / 10);
	len += ft_putchar_pf(nbr % 10 + '0');
	return (len);
}
