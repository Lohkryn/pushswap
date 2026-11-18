/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:41:07 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/18 17:35:29 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	float disorder;

	a = NULL;
	b = NULL;
	if (!ft_init_stack(argc, argv, &a))
		return (1);
	disorder = ft_check_sort(a);	
	if (!ft_is_sorted(a))
	{
		if (ft_stack_size(a) <= 5)
			ft_short_sort(&a, &b);
		else if (!ft_strncmp(argv[1], "--", 2) && ft_strcmp(argv[1], "--adaptive"))
			ft_select_arg(argv[1], &a, &b);
		else if (disorder <= 0.2)
			ft_selection_sort(&a, &b);
		else if (disorder <= 0.5)
			ft_chunk_sort(&a, &b, ft_get_chunk_size(ft_stack_size(a)));
		else
			ft_sort_radix(&a, &b);
	}
	ft_free_stack(&a);
	ft_free_stack(&b);
	return (0);
}