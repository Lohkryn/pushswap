#include "push_swap.h"

void    ft_short_sort(t_stack **a, t_stack **b)
{
    if (ft_stack_size(a) == 2)
			sa(a);
	else if (ft_stack_size(a) == 3)
		ft_sort_three(a);
	else if (ft_stack_size(a) <= 5)
		ft_sort_five(a, b);
}