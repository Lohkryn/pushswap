/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 13:28:12 by ketolba           #+#    #+#             */
/*   Updated: 2026/11/20 20:31:21 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_selection_sort(t_stack **a, t_stack **b, int *ops)
{
	while (*a)
	{
		ft_move_min_to_top(a, ft_find_min(*a), ops);
		pb(a, b, ops);
	}
	while (*b)
		pa(a, b, ops);
}
