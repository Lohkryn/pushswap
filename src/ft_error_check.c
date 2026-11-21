/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 19:19:41 by ketolba           #+#    #+#             */
/*   Updated: 2026/11/21 10:28:52 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error_check(int argc, char **argv)
{
	int	i;

	if(argc < 4 && !ft_check_flag(argv[1]) && (argc == 2 || ft_check_flag(argv[2])))
		return (1);
	if (argc > 3 && !ft_check_flag(argv[2]) && !ft_isnumber(argv[2]))
		return (1);
	if ((!ft_check_flag(argv[1]) && !ft_strncmp(argv[1], "--", 2))|| !strcmp(argv[2], "--bench"))
		return (1);
	if (!ft_strcmp(argv[1], "--bench") && ft_strncmp(argv[1], "--", 2) &&  ft_strncmp(argv[2], "--", 2))
		return (1);
	i = ft_flag(argv);
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
