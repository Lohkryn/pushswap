/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:41:07 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/21 10:25:48 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	float	disorder;
	int	*ops;

	ops = ft_calloc(TOTAL_OPS , sizeof(int));
	a = NULL;
	b = NULL;
	if (!ft_init_stack(argc, argv, &a))
		return (1);
	disorder = ft_check_sort(a);
	if (!ft_is_sorted(a))
		ft_sorting_strategy(&a, &b, argv, disorder, ops);
	if (argv[1] && !ft_strncmp(argv[1], "--bench", 7))
		ft_bench(disorder, argv, ops);
	ft_free_stack(&a);
	free(ops);
	return (ft_free_stack(&b), 0);
}
