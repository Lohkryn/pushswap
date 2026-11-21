/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunk_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:23:23 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/21 13:51:56 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_chunk_sort(t_stack **a, t_stack **b, int chunk_size, int *ops)
{
	int	chunk_min;
	int	chunk_max;
	int	total;
	int	range[2];

	chunk_min = 0;
	total = ft_stack_size(*a);
	while (chunk_min < total)
	{
		chunk_max = chunk_min + chunk_size;
		if (chunk_max > total)
			chunk_max = total;
		range[0] = chunk_min;
		range[1] = chunk_max;
		ft_push_chunk(a, b, range, ops);
		if (chunk_min > 0)
			ft_bring_for_next_chunk(a, chunk_min - 1, ops);
		ft_target_pa(a, b, range, ops);
		chunk_min = chunk_max;
	}
	ft_bring_for_next_chunk(a, chunk_max - 1, ops);
}
