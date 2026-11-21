/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugdelie <hugdelie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:41:07 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/21 13:11:10 by hugdelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	float	disorder;
	int		*ops;

	if (argc < 2)
		return (0);
	ops = ft_calloc(TOTAL_OPS, sizeof(int));
	if (!ops)
		return (ft_putstr_fd("Error\n", 2), 1);
	a = NULL;
	b = NULL;
	if (!ft_init_stack(argc, argv, &a))
	{
		free(ops);
		return (1);
	}
	disorder = ft_check_sort(a);
	if (!ft_is_sorted(a))
		ft_sorting_strategy(&a, &b, argv, disorder, ops);
	if (argv[1] && !ft_strncmp(argv[1], "--bench", 7))
		ft_bench(disorder, argv, ops);
	ft_free_stack(&a);
	free(ops);
	return (ft_free_stack(&b), 0);
}
