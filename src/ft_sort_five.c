/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:26:47 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/20 18:17:44 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five(t_stack **a, t_stack **b, int *ops)
{
	t_stack	*min;

	while (ft_stack_size(*a) > 3)
	{
		min = ft_find_min(*a);
		ft_move_min_to_top(a, min, ops);
		pb(a, b, ops);
	}
	ft_sort_three(a, ops);
	if ((*b)->next && (*b)->rank < (*b)->next->rank)
		sb(b, ops);
	while (*b)
		pa(a, b, ops);
}
