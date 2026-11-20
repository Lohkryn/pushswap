/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bench.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 12:24:40 by ketolba           #+#    #+#             */
/*   Updated: 2026/11/20 20:35:55 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_bench(t_stack **a, float disorder, char **argv, int *ops)
{
	int i;

	i = 0;
	while (i < TOTAL_OPS)
	{
		ops[TOTAL_OPS] += ops[i];
		i++;
	}
    ft_printf("[bench] disorder: %d%%\n",ft_check_sort(*a));
    ft_printf("[bench] strategy: %s", ft_log_type(argv[2], disorder));
    ft_printf("[bench] total_ops: %d\n", ops[TOTAL_OPS]);
    ft_printf("[bench] sa: %d	sb: %d	ss:%d	pa:%d	pb:%d\n", ops[SA], ops[SB], ops[SS], ops[PA], ops[PB]);
    ft_printf("[bench] ra: %d	rb: %d	rr: %d	rra: %d	rrb: %d	rrr: %d\n", ops[RA], ops[RB], ops[RR], ops[RRA], ops[RRB], ops[RRR]);
}
