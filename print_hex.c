#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_atoi(char *str)
{
    int nbr;
    int sign;

    nbr = 0;
    sign = 1;

    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-')
    {
        sign = -1;
        nbr++;
    }
    if (*str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        nbr = nbr * 10 + *str - '0';
        str++;
    }
    return (nbr * sign);
}

void    print_hex(int nb)
{
    if (nb > 16)
    {
        print_hex(nb / 16);
        print_hex(nb % 16);
    }
    if (nb < 10)
        ft_putchar(nb + 48);
    else if (nb < 16)
        ft_putchar(nb + 87);
}

int     main(int ac, char **av)
{
    if (ac == 2)
        print_hex(ft_atoi(av[1]));
    write(1, "\n", 1);
    return (0);
}