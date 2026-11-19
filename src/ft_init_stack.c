/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugdelie <hugdelie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:23:14 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/19 07:01:52 by hugdelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_init_stack(int argc, char **argv, t_stack **a)
{
	t_stack	*new;
	int		i;

	if (argc < 2 || (argc < 3 && !ft_strncmp(argv[1], "--", 2)))
		return (ft_putstr_fd("Error\n", 2), 0);
	if (ft_check_flag(argv[1]) && !ft_strncmp(argv[1], "--", 2))
		return (ft_putstr_fd("Error\n", 2), 0);
	i = ft_flag(argv[1]);
	while (i < argc)
	{
		if (!ft_checkinput(argv[i]))
			return (ft_putstr_fd("Error\n", 2), 0);
		i++;
	}
	if (!ft_checkduplicate(argv))
		return (ft_putstr_fd("Error\n", 2), 0);
	i = ft_flag(argv[1]);
	while (i < argc)
	{
		new = ft_newnode(ft_atoi(argv[i]));
		ft_stackadd_back(a, new);
		i++;
	}
	ft_assign_rank(*a);
	return (1);
}
