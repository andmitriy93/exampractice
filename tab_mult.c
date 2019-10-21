#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
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
        nbr = nbr * 10 + *str - 48;
        str++;
    }
    return (nbr * sign);
}

int     main(int ac, char **av)
{
    int i;
    int nb;

    i = 1;
    if (ac == 2)
    {
        nb = ft_atoi(av[1]);
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(nb);
            write(1, " = ", 3);
            ft_putnbr(nb * i);
            if (i < 9)
                write(1, "\n", 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}