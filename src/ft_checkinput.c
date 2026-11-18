/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkinput.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 05:40:10 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/18 17:35:25 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkinput(char *nbr)
{
	if (!ft_isnumber(nbr) || !ft_checkintrange(nbr))
		return (0);
	return (1);
}
