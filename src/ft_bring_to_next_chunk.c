/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bring_to_next_chunk.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:21:21 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/20 18:16:12 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bring_for_next_chunk(t_stack **a, int rank, int *ops)
{
	int	pos;
	int	size;

	if (!a || !*a)
		return ;
	pos = ft_pos(*a, rank);
	size = ft_stack_size(*a);
	if (ft_stacklast(*a)->rank == rank)
		return ;
	if (pos <= size / 2)
	{
		while (ft_stacklast(*a)->rank != rank)
			ra(a, ops);
	}
	else
	{
		while (ft_stacklast(*a)->rank != rank)
			rra(a, ops);
	}
}
