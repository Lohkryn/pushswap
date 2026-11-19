/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_short_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugdelie <hugdelie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 07:04:00 by hugdelie          #+#    #+#             */
/*   Updated: 2026/11/19 07:04:01 by hugdelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_short_sort(t_stack **a, t_stack **b)
{
	if (ft_stack_size(*a) == 2)
		sa(a);
	else if (ft_stack_size(*a) == 3)
		ft_sort_three(a);
	else if (ft_stack_size(*a) <= 5)
		ft_sort_five(a, b);
}
