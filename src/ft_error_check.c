/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 19:19:41 by ketolba           #+#    #+#             */
/*   Updated: 2026/11/21 12:59:46 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error_check(int argc, char **argv)
{
	int	i;

	i = ft_flag(argv);
	if (i >= argc || i > 3)
		return (1);
		if ((i >= 2 && ft_check_flag(argv[1])
			|| (i == 3 && ft_check_flag(argv[2])
				|| ft_strcmp(argv[1], "--bench"))
				|| !ft_strcmp(argv[2], "--bench")))
			return (1);
	while (i < argc)
	{
		if (!ft_checkinput(argv[i]))
			return (1);
		i++;
	}
	if (!ft_checkduplicate(argv))
		return (1);
	return (0);
}
