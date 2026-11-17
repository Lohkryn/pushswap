/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_engix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 13:42:33 by ketolba           #+#    #+#             */
/*   Updated: 2026/11/17 13:56:12 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_count_bits(int max)
{
	int bits;

	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

void	ft_sort_engix(t_stack **a, t_stack **b)
{
	int	size;
	int	bits;
	int	bit;
	int	i;

	size = ft_stack_size(*a);
	bits = ft_count_bits(size - 1);
	bit = 0;
	while (bit < bits)
	{
		i = 0;
		while (i < size)
		{
			if ((((*a)->rank >> bit) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			i++;
		}
		while (*b)
			pa(a, b);
		bit++;
	}
}
