/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 07:10:58 by hugdelie          #+#    #+#             */
/*   Updated: 2026/11/20 19:57:48 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float	ft_check_sort(t_stack *a)
{
	float	mistakes;
	float	pairs;
	t_stack	*current;
	t_stack	*next_nbr;

	mistakes = 0;
	pairs = 0;
	current = a;
	while (current->next)
	{
		next_nbr = current->next;
		while (next_nbr)
		{
			pairs += 1;
			if (current->value > next_nbr->value)
				mistakes += 1;
			next_nbr = next_nbr->next;
		}
		current = current->next;
	}
	if (pairs == 0)
		return (0);
	return ((mistakes / pairs) * 100);
}
