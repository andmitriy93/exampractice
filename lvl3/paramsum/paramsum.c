/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 09:49:06 by dmian             #+#    #+#             */
/*   Updated: 2019/11/19 13:28:22 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb > 9)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}

int     main(int ac, char **av)
{
    av = 0;
    ft_putnbr(ac - 1);
    write(1, "\n", 1);
    return (0);
}
