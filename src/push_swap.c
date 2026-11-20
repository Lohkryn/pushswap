/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:41:07 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/20 20:34:57 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	float	disorder;
	int	*ops;

	ops = calloc(TOTAL_OPS, sizeof(int));
	a = NULL;
	b = NULL;
	if (!ft_init_stack(argc, argv, &a))
		return (1);
	disorder = ft_check_sort(a);
	if (!ft_is_sorted(a))
		ft_sorting_strategy(&a, &b, argv, disorder, ops);
	ft_free_stack(&a);
	if (argv[1] && !ft_strncmp(argv[1], "--bench", 7))
		ft_bench(&a, disorder, argv, ops);
	free(ops);
	return (ft_free_stack(&b), 0);
}
