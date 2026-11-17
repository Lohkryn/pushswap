/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugdelie <hugdelie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:23:14 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/17 21:33:40 by hugdelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_init_stack(int argc, char **argv, t_stack **a)
{
	t_stack	*new;
	int		i;

	if (argc < 2)
		return (ft_printf("need number\n"), 0);
	i = 1;
	while (i < argc)
	{
		if (!ft_checkinput(argv[i], i))
			return (ft_printf("wrong input\n"), 0);
		i++;
	}
	if (!ft_checkduplicate(argv))
		return (ft_printf("Error: duplicate values\n"), 0);
	i = 1;
	while (i < argc)
	{
		new = ft_newnode(ft_atoi(argv[i]));
		ft_stackadd_back(a, new);
		i++;
	}
	ft_assign_rank(*a);
	return (1);
}
