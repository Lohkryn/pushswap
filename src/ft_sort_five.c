/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:26:47 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/16 15:00:45 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five(t_stack **a, t_stack **b)
{
	t_stack	*min;

	while (ft_stack_size(*a) > 3)
	{
		min = ft_find_min(*a);
		ft_move_min_to_top(a, min);
		pb(a, b);
	}
	ft_sort_three(a);
	if ((*b)->next && (*b)->rank < (*b)->next->rank)
		sb(b);
	while (*b)
		pa(a, b);
}
