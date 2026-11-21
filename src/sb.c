/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 03:08:14 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/21 12:38:10 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sb(t_stack **b, int *ops)
{
	t_stack *first;
	t_stack *second;

	if (!b || !*b || !(*b)->next)
		return;
	first = *b;
	second = (*b)->next;
	first->next = second->next;
	second->next = first;
	*b = second;
	ops[SB]++;
	write(1, "sb\n", 3);
}
