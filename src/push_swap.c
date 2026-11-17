/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:41:07 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/17 18:23:58 by excalibur        ###   ########.fr       */
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
	if (!ft_is_sorted(a))
	{
		if (ft_stack_size(a) <=5)
			ft_short_sort(&a, &b);
		if ("la fonction de ton calcul return -33%")
			ft_selection_sort(&a,&b);
		else if ("pareil a 50%")
				ft_chunk_sort(&a, &b, ft_get_chunk_size(ft_stack_size(a)));
		else 
			ft_sort_radix(&a,&b);
	}
	ft_free_stack(&a);
	ft_free_stack(&b);
	return (0);
}
