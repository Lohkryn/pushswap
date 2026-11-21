/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:55:50 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/21 14:03:40 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_chunk(t_stack **a, t_stack **b, int range[2], int *ops)
{
	int	min;
	int	max;

	min = range[0];
	max = range[1];
	while (ft_has_chunk(*a, min, max))
	{
		if ((*a)->rank >= min && (*a)->rank < max)
			pb(a, b, ops);
		else
			ra(a, ops);
	}
}
