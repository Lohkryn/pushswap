/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugdelie <hugdelie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 07:02:57 by hugdelie          #+#    #+#             */
/*   Updated: 2026/11/19 07:13:25 by hugdelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_select_arg(char *str, t_stack **a, t_stack **b)
{
	if (!ft_strcmp(str, "--simple"))
		ft_selection_sort(a, b);
	else if (!ft_strcmp(str, "--medium"))
		ft_chunk_sort(a, b, ft_get_chunk_size(ft_stack_size(*a)));
	else if (!ft_strcmp(str, "--complex"))
		ft_sort_radix(a, b);
}
