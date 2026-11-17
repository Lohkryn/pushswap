/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkinput.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugdelie <hugdelie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 05:40:10 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/17 22:44:59 by hugdelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkinput(char *nbr, int i)
{
	(void)i;
	if ((i == 2 && ft_flag(&nbr)) || !ft_isnumber(nbr) || !ft_checkintrange(nbr))
		return (0);
	return (1);
}
