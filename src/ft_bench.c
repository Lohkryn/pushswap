/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bench.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugdelie <hugdelie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 12:24:40 by ketolba           #+#    #+#             */
/*   Updated: 2026/11/21 11:35:16 by hugdelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_bench(int disorder, char **argv, int *ops)
{
	int i;
	int	total_ops;

	if (!argv[1])
		return(ft_putstr_fd("Error\n", 2));
	total_ops = 0;
	i = 0;
	while (i <= TOTAL_OPS)
	{
		total_ops += ops[i];
		i++;
	}
    ft_printf("[bench] disorder: %d %%\n", disorder);
    ft_printf("[bench] strategy: %s", ft_log_type(argv[2], disorder));
    ft_printf("[bench] total_ops: %d\n", total_ops);
    ft_printf("[bench] sa: %d	sb: %d	ss:%d	pa:%d	pb:%d\n", ops[SA], ops[SB], ops[SS], ops[PA], ops[PB]);
    ft_printf("[bench] ra: %d	rb: %d	rr: %d	rra: %d	rrb: %d	rrr: %d\n", ops[RA], ops[RB], ops[RR], ops[RRA], ops[RRB], ops[RRR]);
}
