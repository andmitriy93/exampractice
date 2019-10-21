#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    str_capitalizer(char *str)
{
    int i;
    int flag;

    i = 0;
    flag = 1;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if (str[i - 1] == ' ' || str[i - 1] == '\t')
            flag = 1;
        if (str[i] >= 'a' && str[i] <= 'z' && flag)
        {
            flag = 0;
            ft_putchar(str[i] - 32);
        }
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
            str_capitalizer(av[i]);
            ft_putchar('\n');
            i++;
        }
     }
     else
        ft_putchar('\n');
    return (0);
}