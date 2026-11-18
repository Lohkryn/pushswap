int ft_check_flag(char *str)
{
    if (!ft_strcmp(str, "--simple") || !ft_strcmp(str, "--medium") || 
        !ft_strcmp(str, "--complex") ||!ft_strcmp(str, "--adaptive"))
    {
        return (0);
    }
    return (1);
}