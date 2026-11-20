/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:23:14 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/20 20:30:06 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_init_stack(int argc, char **argv, t_stack **a)
{
	t_stack	*new;
	int		i;

	if (ft_error_check(argc, argv))
		return (ft_putstr_fd("Error\n", 2), 0);
	i = ft_flag(argv);
	while (i < argc)
	{
		new = ft_newnode(ft_atoi(argv[i]));
		ft_stackadd_back(a, new);
		i++;
	}
	ft_assign_rank(*a);
	return (1);
}
