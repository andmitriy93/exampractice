#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rstr_capitalizer(char *str)
{
    int i;

    i = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0') &&
            (str[i] >= 'a' && str[i] <= 'z'))
            ft_putchar(str[i] - 32);
        else
            ft_putchar(str[i]);
        i++;
    }
}

int     main(int ac, char **av)
{
    int i;

    if (ac >= 2)
    {
        i = 1;
        while (i <= ac - 1)
        {
            rstr_capitalizer(av[i]);
            ft_putchar('\n');
            i++;
        }
    }
    else
        ft_putchar('\n');
    return (0);
}