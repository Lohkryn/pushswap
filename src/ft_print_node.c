/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugdelie <hugdelie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 02:21:31 by ktolba            #+#    #+#             */
/*   Updated: 2026/11/19 07:12:55 by hugdelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_node(t_stack *node)
{
	ft_printf ("value: %d, rank: %d\n", node->value, node->rank);
}
