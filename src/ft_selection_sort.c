/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugdelie <hugdelie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 13:28:12 by ketolba           #+#    #+#             */
/*   Updated: 2026/11/17 19:47:57 by hugdelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_selection_sort(t_stack **a, t_stack **b)
{
	while (*a)
	{
		ft_move_min_to_top(a, ft_find_min(*a));
		pb(a, b);
	}
	while (*b)
		pa(a, b);
}
