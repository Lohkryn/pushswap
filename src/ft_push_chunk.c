/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:55:50 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/20 18:12:19 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_chunk(t_stack **a, t_stack **b, int min, int max, int *ops)
{
	while (ft_has_chunk(*a, min, max))
	{
		if ((*a)->rank >= min && (*a)->rank < max)
			pb(a, b, ops);
		else
			ra(a, ops);
	}
}
