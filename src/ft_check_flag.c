/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugdelie <hugdelie@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 07:04:20 by hugdelie          #+#    #+#             */
/*   Updated: 2026/11/19 07:10:41 by hugdelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_flag(char *str)
{
	if (!ft_strcmp(str, "--simple") || !ft_strcmp(str, "--medium")
		|| !ft_strcmp(str, "--complex") || !ft_strcmp(str, "--adaptive"))
	{
		return (0);
	}
	return (1);
}
