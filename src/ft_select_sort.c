void	ft_select_arg(char *str,t_stack **a,t_stack **b)
{
	if (!ft_strcmp(str, "--simple"))
		ft_selection_sort(a, b);
	else if (!ft_strcmp(str, "--medium"))
		ft_chunk_sort(a, b, ft_get_chunk_size(ft_stack_size(*a)));
	else if (!ft_strcmp(str, "--complex"))
		ft_sort_radix(a, b);
}
