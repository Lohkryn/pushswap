/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 07:04:20 by hugdelie          #+#    #+#             */
/*   Updated: 2026/11/20 18:12:22 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_flag(char *str)
{
	if (!ft_strcmp(str, "--simple") || !ft_strcmp(str, "--medium")
		|| !ft_strcmp(str, "--complex") || !ft_strcmp(str, "--adaptive")
			|| !ft_strcmp(str, "--bench"))
	{
		return (1);
	}
	return (0);
}
