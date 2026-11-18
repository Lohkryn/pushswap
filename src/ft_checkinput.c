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
	if ((i == 1 && ft_isnumber(nbr) == 1) || (i == 1 && ft_flag(&nbr) != 0))
		return (1);
	if (!ft_isnumber(nbr) || !ft_checkintrange(nbr))
		return (0);
	return (1);
}
