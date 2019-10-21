/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an.dmitriy93 <an.dmitriy93@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:24:52 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/07/30 16:26:16 by an.dmitriy9      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     search(char *str, int c)
{
    int i;

    i = 0;
    while (i < c)
    {
        if (str[i] == str[c])
            return (1);
        i++;
    }
    return (0);
}

int     main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    if (ac != 3)
        write(1, "\n", 1);
    while (av[1][i])
    {
        j = 0;
        while (av[2][j])
        {
            if (av[1][i] == av[2][j])
            {
                if (search(av[1], i) == 0)
                    write(1, &av[1][i], 1);
                    break;
            }
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}