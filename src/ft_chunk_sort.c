/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunk_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:23:23 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/20 18:21:02 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_chunk_sort(t_stack **a, t_stack **b, int chunk_size, int *ops)
{
	int	chunk_min;
	int	chunk_max;
	int	total;

	chunk_min = 0;
	total = ft_stack_size(*a);
	while (chunk_min < total)
	{
		chunk_max = chunk_min + chunk_size;
		if (chunk_max > total)
			chunk_max = total;
		ft_push_chunk(a, b, chunk_min, chunk_max, ops);
		if (chunk_min > 0)
			ft_bring_for_next_chunk(a, chunk_min - 1, ops);
		ft_target_pa(a, b, chunk_min, chunk_max - 1, ops);
		chunk_min = chunk_max;
	}
	ft_bring_for_next_chunk(a, chunk_max - 1, ops);
}
