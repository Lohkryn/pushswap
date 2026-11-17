#include "push_swap.h"

static int ft_check_sort(t_stack *a)
{
	int m;
	int pairs;
	t_stack *current;
	t_stack *next;

	m = 0;
	pairs = 0;
	current = a;
	while (current->next)
	{
		next = current->next;
		while (next->next)
		{
			pairs += 1;
			if (current->value > next->value)
				m += 1;
			next = next->next;
		}
		current = current->next;
	}
	if (pairs == 0)
		return (0);
	return (m / pairs);
}

int ft_check_sort_return(t_stack *a)
{
	int	metric;

	metric = ft_check_sort(a);
	if (metric == 0)
		return (SORT);
	if (metric <= 1 && metric >= 0.5)
		return (HIGH);
	if (metric < 0.5 && metric >= 0.2)
		return (MEDIUM);
	return (LOW);
}