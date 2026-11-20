/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_target_pa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:19:17 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/20 20:37:54 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_target_pa(t_stack **a, t_stack **b, int min, int max, int *ops)
{
	while (min <= max)
	{
		if (!b || !*b)
			return ;
		if ((*b)->rank == min)
		{
			pa(a, b, ops);
			ra(a, ops);
			min++;
		}
		else if ((*b)->rank == max)
		{
			pa(a, b, ops);
			max--;
		}
		else
			rb(b, ops);
	}
}
