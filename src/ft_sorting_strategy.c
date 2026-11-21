/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_strategy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 16:18:36 by ketolba           #+#    #+#             */
/*   Updated: 2026/11/21 13:15:49 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorting_strategy(t_stack **a, t_stack **b, char **argv, int *ops)
{
	int	strategy;
	int	disorder;

	disorder = ft_check_sort(*a);
	if (argv[1] && !ft_strcmp(argv[1], "--bench"))
		strategy = 2;
	else
		strategy = 1;
	if (ft_stack_size(*a) <= 5)
		ft_short_sort(a, b, ops);
	else if (!ft_strncmp(argv[strategy], "--", 2)
		&& ft_strcmp(argv[strategy], "--adaptive"))
		ft_select_arg(argv[strategy], a, b, ops);
	else if (disorder < 20)
		ft_selection_sort(a, b, ops);
	else if (disorder < 50)
		ft_chunk_sort(a, b, ft_get_chunk_size(ft_stack_size(*a)), ops);
	else
		ft_sort_radix(a, b, ops);
}
