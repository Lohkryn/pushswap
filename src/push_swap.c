/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugdelie <hugdelie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:41:07 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/17 20:25:38 by hugdelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (!ft_init_stack(argc, argv, &a))
		return (1);
	if (!ft_is_sorted(a) && ft_flag == ADAPTIVE)
	{
		if (ft_stack_size(a) <= 5)
			ft_short_sort(&a, &b);
		else if (ft_check_sort_return(a) == LOW)
			ft_selection_sort(&a, &b);
		else if (ft_check_sort_return(a) == MEDIUM)
			ft_chunk_sort(&a, &b, ft_get_chunk_size(ft_stack_size(a)));
		else
			ft_sort_radix(&a, &b);
	}
	else if (!ft_is_sorted(a) && ft_flag == HIGH)
		ft_sort_radix(&a, &b);
	else if (!ft_is_sorted(a) && ft_flag == MEDIUM)
		ft_chunk_sort(&a, &b, ft_get_chunk_size(ft_stack_size(a)));
	else if (!ft_is_sorted(a) && ft_flag == LOW)
		ft_selection_sort(&a, &b);
	return (ft_free_stack(&b), ft_free_stack(&a), 0);
}
