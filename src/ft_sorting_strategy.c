/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_strategy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 16:18:36 by ketolba           #+#    #+#             */
/*   Updated: 2026/11/20 21:08:09 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorting_strategy(t_stack **a, t_stack **b, char **argv, float disorder, int *ops)
{
		if (ft_stack_size(*a) <= 5)
			ft_short_sort(a, b, ops);
		else if (!ft_strncmp(argv[1], "--", 2)
			&& ft_strcmp(argv[1], "--adaptive"))
			ft_select_arg(argv[1], a, b, ops);
		else if (disorder < 20)
			ft_selection_sort(a, b, ops);
		else if (disorder < 50)
			ft_chunk_sort(a, b, ft_get_chunk_size(ft_stack_size(*a)), ops);
		else
			ft_sort_radix(a, b, ops);
}
