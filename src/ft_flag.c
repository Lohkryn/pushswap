#include "push_swap.h"

int ft_flag(char *str)
{
    if (!ft_strncmp(str, "--", 2))
        return (2);
    return (1);
}