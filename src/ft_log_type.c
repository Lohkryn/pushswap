/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 19:35:19 by ketolba           #+#    #+#             */
/*   Updated: 2026/11/20 20:52:28 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char *ft_log_type(char *str, float disorder)
{
	if (!ft_strcmp(str, "--simple"))
		return ("simple / O(n2 )\n");
	else if (!ft_strcmp(str, "--medium"))
		return ("medium / O(n V n)\n");
	else if (!ft_strcmp(str, "--complex"))
		return ("complex / O(n log n)\n");
	else if (!ft_strcmp(str, "--adaptive"))
	{
		if (disorder < 0.2)
			return ("Adaptive /0(n2)\n");
		else if (disorder < 0.5)
			return ("Adaptive / O(n V n)\n");
		else
			return ("Adaptive / O(n log n)\n");
	}
	return ("Unknown strategy\n");
}
