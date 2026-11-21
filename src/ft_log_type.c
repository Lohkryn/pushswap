/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugdelie <hugdelie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 19:35:19 by ketolba           #+#    #+#             */
/*   Updated: 2026/11/21 13:11:50 by hugdelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_log_type(char *str, float disorder)
{
	if (!ft_strcmp(str, "--simple"))
		return ("simple / O(n2 )\n");
	else if (!ft_strcmp(str, "--medium"))
		return ("medium / O(n V n)\n");
	else if (!ft_strcmp(str, "--complex"))
		return ("complex / O(n log n)\n");
	else if (!ft_strcmp(str, "--adaptive"))
	{
		if (disorder < 20)
			return ("Adaptive / O(n2)\n");
		else if (disorder < 50)
			return ("Adaptive / O(n V n)\n");
		else
			return ("Adaptive / O(n log n)\n");
	}
	return ("Adaptive / O(n log n)\n");
}
