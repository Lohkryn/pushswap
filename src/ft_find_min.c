/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketolba <ketolba@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:55:01 by ketolba           #+#    #+#             */
/*   Updated: 2026/11/16 13:55:20 by ketolba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *ft_find_min(t_stack *stack)
{
        t_stack *min;

        min = stack;
        while (stack)
        {
                if (stack->rank < min->rank)
                        min = stack;
                stack = stack->next;
        }
        return (min);
}
