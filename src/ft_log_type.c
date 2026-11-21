/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 19:35:19 by ketolba           #+#    #+#             */
/*   Updated: 2026/11/21 14:20:26 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_log_type(char *str, float disorder)
{
	if (!ft_strcmp(str, "--simple"))
		return ("simple / O(n^2)\n");
	else if (!ft_strcmp(str, "--medium"))
		return ("medium / O(n√n)\n");
	else if (!ft_strcmp(str, "--complex"))
		return ("complex / O(n log n)\n");
	else if (disorder < 20)
		return ("Adaptive / O(n^2)\n");
	else if (disorder < 50)
		return ("Adaptive / O(n√n)\n");
	else
		return ("Adaptive / O(n log n)\n");
}
