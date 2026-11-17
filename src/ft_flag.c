#include "push_swap.h"

static int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int ft_flag(char **argv)
{
    if (ft_strcmp(argv[1], "--adaptive") == 0)
        return (ADAPTIVE);
    else if (ft_strcmp(argv[1], "--complex") == 0)
        return (HIGH);
    else if (ft_strcmp(argv[1], "--medium") == 0)
        return (MEDIUM);
    else if (ft_strcmp(argv[1], "--simple") == 0)
        return (LOW);
    return (0);
}