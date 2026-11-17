/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_min_to_top.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugdelie <hugdelie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 14:42:38 by ketolba           #+#    #+#             */
/*   Updated: 2026/11/17 19:47:26 by hugdelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move_min_to_top(t_stack **a, t_stack *min)
{
	t_stack	*tmp;
	int		i;
	int		size;

	tmp = *a;
	size = 0;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}
	tmp = *a;
	i = 0;
	while (tmp != min)
	{
		tmp = tmp->next;
		i++;
	}
	if (i <= size / 2)
		while (*a != min)
			ra(a);
	else
		while (*a != min)
			rra(a);
}
