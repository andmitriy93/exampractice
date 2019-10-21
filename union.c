/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an.dmitriy93 <an.dmitriy93@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:24:56 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/07/25 17:43:42 by an.dmitriy9      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     check_doubles2(char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int     check_doubles1(char *str, char c, int pos)
{
    int i;

    i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int     main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac != 3)
        write(1, "\n", 1);
    while (av[1][i])
    {
        if (check_doubles1(av[1], av[1][i], i))
            write(1, &av[1][i], 1);
        i++;
    }
    i = 0;
    while (av[2][i])
    {
        if (check_doubles2(av[1], av[2][i]))
        {
            if (check_doubles1(av[2], av[2][i], i))
                write(1, &av[2][i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}